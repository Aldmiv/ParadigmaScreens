#include "ParadigmaScreens.h"

// Конструктор с указанием RX и TX пинов для Bluetooth
ParadigmaScreens::ParadigmaScreens(int rxPin, int txPin) {
    btSerial = new SoftwareSerial(rxPin, txPin);
    receivedString = "";
    receiving = false;

    // Инициализируем все кнопки и переключатели в состоянии "отжата"
    for (int i = 1; i <= 50; i++) {
        button[i] = false;
        switchState[i] = false;
        lastSentText[i] = "";  // Инициализация пустого текста для каждого textID
    }
}

// Инициализация Bluetooth соединения
void ParadigmaScreens::begin(long baudRate) {
    btSerial->begin(baudRate);
}

// Обновление состояния кнопок и переключателей
void ParadigmaScreens::update() {
    while (btSerial->available()) {
        char incomingChar = btSerial->read();

        if (incomingChar == '<') {
            receiving = true;
            receivedString = "";  // Очищаем строку перед новым приемом данных
        } else if (incomingChar == '>') {
            receiving = false;

            // Обрабатываем строку с информацией о кнопке или переключателе
            if (receivedString.startsWith("B")) {
                int buttonID = receivedString.substring(1, receivedString.length() - 1).toInt();
                bool state = receivedString.endsWith("P");  // P означает "нажата", R — "отжата"
                processButtonState(buttonID, state);
            } else if (receivedString.startsWith("S")) {
                int switchID = receivedString.substring(1, receivedString.length() - 1).toInt();
                bool state = receivedString.endsWith("ON");  // ON означает включен, OFF — выключен
                processSwitchState(switchID, state);
            }
        } else if (receiving) {
            receivedString += incomingChar;
        }
    }
}

// Внутренний метод для обработки состояния кнопки
void ParadigmaScreens::processButtonState(int buttonID, bool state) {
    if (buttonID >= 1 && buttonID <= 50) {
        button[buttonID] = state;  // Обновляем состояние кнопки
    }
}

// Внутренний метод для обработки состояния переключателя
void ParadigmaScreens::processSwitchState(int switchID, bool state) {
    if (switchID >= 1 && switchID <= 50) {
        switchState[switchID] = state;  // Обновляем состояние переключателя
    }
}

// Отправка текста по ID объекта текста
void ParadigmaScreens::sendText(int textID, const char* text) {
    if (textID >= 1 && textID <= 50) {
        String newText = String(text);

        // Проверяем, изменился ли текст для указанного textID
        if (newText != lastSentText[textID]) {
            String command = String("&") + String(textID) + "#" + newText + "&";
            btSerial->println(command);

            // Обновляем последний отправленный текст
            lastSentText[textID] = newText;
        }
    }
}
