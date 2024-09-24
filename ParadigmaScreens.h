#ifndef ParadigmaScreens_h
#define ParadigmaScreens_h

#include <Arduino.h>
#include <SoftwareSerial.h>

class ParadigmaScreens {
  public:
    // Конструктор с указанием RX и TX пинов для Bluetooth
    ParadigmaScreens(int rxPin, int txPin);

    // Инициализация Bluetooth соединения
    void begin(long baudRate);

    // Обновление состояния кнопок и переключателей
    void update();

    // Отправка текста по ID объекта текста
    void sendText(int textID, const char* text);

    // Доступ к состоянию кнопок и переключателей
    bool button[51];      // Массив для хранения состояния 50 кнопок (индексы от 1 до 50)
    bool switchState[51];  // Массив для хранения состояния 50 переключателей

  private:
    SoftwareSerial* btSerial;  // Ссылка на программный серийный порт
    String receivedString;     // Буфер для собранных данных
    bool receiving;            // Флаг для отслеживания состояния приема данных
    String lastSentText[51];   // Массив для хранения последнего отправленного текста для каждого textID

    // Внутренние методы для обработки состояний кнопок и переключателей
    void processButtonState(int buttonID, bool state);
    void processSwitchState(int switchID, bool state);
};

#endif  // ParadigmaScreens_h
