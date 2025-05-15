#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEServer.h>
#include <FastLED.h>

#define SERVICE_UUID        "0000FFE0-0000-1000-8000-00805F9B34FB"
#define CHARACTERISTIC_UUID "0000FFE1-0000-1000-8000-00805F9B34FB"

#define LED_PIN     26
#define NUM_LEDS    20
CRGB leds[NUM_LEDS];

BLECharacteristic* pChar;
int currentMode = 1;
uint8_t brightness = 128;
CRGB customColor = CRGB(255, 56, 0);

CRGBPalette16 currentPalette;
TBlendType currentBlending = LINEARBLEND;
uint8_t startIndex = 0;

void selectPaletteForMode(int mode) {
  switch (mode) {
    case 1: currentPalette = RainbowColors_p; break;
    case 2: currentPalette = OceanColors_p;   break;
    case 3: currentPalette = LavaColors_p;    break;
    case 4: currentPalette = ForestColors_p;  break;
    default: break;
  }
}

void updateStrip() {
  FastLED.setBrightness(brightness);

  if (currentMode >= 1 && currentMode <= 4) {
    selectPaletteForMode(currentMode);
    return;
  }

  CRGB color = (currentMode == 0) ? customColor : CRGB::Black;
  fill_solid(leds, NUM_LEDS, color);
  FastLED.show();
}

void updatePaletteAnimation() {
  startIndex++;
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = ColorFromPalette(currentPalette, startIndex + i * 3, brightness, currentBlending);
  }
  FastLED.show();
}

class CharCallbacks : public BLECharacteristicCallbacks {
  void onWrite(BLECharacteristic* ch) override {
    String rx = ch->getValue().c_str();
    Serial.print("Получено по BLE: ");
    Serial.println(rx);

    if (rx.startsWith("mode:")) {
      currentMode = rx.substring(5).toInt();
      updateStrip();
    } else if (rx.startsWith("Brightness:")) {
      brightness = constrain(rx.substring(11).toInt(), 0, 255);
      updateStrip();
    } else if (rx.startsWith("RGB:") && currentMode == 0) {
      int r = rx.substring(4, 7).toInt();
      int g = rx.substring(8, 11).toInt();
      int b = rx.substring(12, 15).toInt();
      customColor = CRGB(r, g, b);
      updateStrip();
    }

    ch->setValue(rx);
    ch->notify();
  }
};

class ServerCallbacks : public BLEServerCallbacks {
  void onConnect(BLEServer*) override {
    Serial.println("Central connected");
  }

  void onDisconnect(BLEServer*) override {
    Serial.println("Central disconnected ➜ advertising again");
    BLEDevice::startAdvertising();
  }
};

void setup() {
  Serial.begin(115200);
  Serial.println("Initialization BLE + FastLED...");


  FastLED.addLeds<NEOPIXEL, LED_PIN>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.setBrightness(brightness);
  updateStrip();

  BLEDevice::init("ESP32_Lamp");
  BLEServer* server = BLEDevice::createServer();
  server->setCallbacks(new ServerCallbacks());

  BLEService* service = server->createService(SERVICE_UUID);
  pChar = service->createCharacteristic(
    CHARACTERISTIC_UUID,
    BLECharacteristic::PROPERTY_READ |
    BLECharacteristic::PROPERTY_WRITE |
    BLECharacteristic::PROPERTY_NOTIFY
  );

  pChar->setCallbacks(new CharCallbacks());
  pChar->setValue("ESP32 ready!");
  service->start();

  BLEAdvertising* adv = BLEDevice::getAdvertising();
  adv->addServiceUUID(SERVICE_UUID);
  adv->setScanResponse(true);
  adv->start();

  Serial.println("BLE UART started");
}

void loop() {
  if (currentMode >= 1 && currentMode <= 4) {
    updatePaletteAnimation();
    delay(20);
  }
}