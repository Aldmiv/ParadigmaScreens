/*
    ____  ___    ____  ___    ____  ____________  ______ 
   / __ \/   |  / __ \/   |  / __ \/  _/ ____/  |/  /   |
  / /_/ / /| | / /_/ / /| | / / / // // / __/ /|_/ / /| |
 / ____/ ___ |/ _, _/ ___ |/ /_/ // // /_/ / /  / / ___ |
/_/   /_/  |_/_/ |_/_/  |_/_____/___/\____/_/  /_/_/  |_|

------------------------------------------------------------------------------------------------------------------------------------------------------

### Пример использования приложения Paradigma для изменения текста на экране каждую секунду.
Данный код протестирован с версией iOS приложения Paradigma 2.0 (https://apps.apple.com/ru/app/paradigma/id6503053235) и версией библиотеки ParadigmaScreens.h 1.0.

**Функциональность:**
- Текст с ID 1 будет последовательно изменяться между "Text A" и "Text B" каждую секунду.

**Инструкции:**
- **Добавление текста на экран:**  
  Необходимо добавить элемент текста с ID = 1, чтобы видеть изменения текста.

- **Подключение модуля Bluetooth:**  
  Модуль Bluetooth должен быть подключен следующим образом:  
  - TX модуля к RX на Arduino  
  - RX модуля к TX на Arduino  

------------------------------------------------------------------------------------------------------------------------------------------------------

### Example usage of the Paradigma app for changing text on the screen every second.
This code was tested with iOS app version Paradigma 2.0 (https://apps.apple.com/ru/app/paradigma/id6503053235) and ParadigmaScreens.h library version 1.0.

**Functionality:**
- Text with ID 1 will alternate between "Text A" and "Text B" every second.

**Instructions:**
- **Adding a text element to the screen:**  
  You need to add a text element with ID = 1 to see the text changes.

- **Bluetooth module connection:**  
  The Bluetooth module should be connected as follows:  
  - TX of the module to RX on Arduino  
  - RX of the module to TX on Arduino  

------------------------------------------------------------------------------------------------------------------------------------------------------
*/

#include <ParadigmaScreens.h>  // Подключаем библиотеку / Include the library

// Определяем пины для Bluetooth модуля / Define pins for Bluetooth module
int txPin = 10;  // TX пин на Arduino / TX pin on Arduino
int rxPin = 11;  // RX пин на Arduino / RX pin on Arduino

// Создаем объект ParadigmaScreens / Create ParadigmaScreens object
ParadigmaScreens ParadigmaScreens(txPin, rxPin);

void setup() {
  // Инициализация соединения с модулем Bluetooth / Initialize connection with Bluetooth module
  ParadigmaScreens.begin(9600);

  // Дополнительно можно вывести сообщение в монитор порта для отладки / Optionally, print a message for debugging
  Serial.println("Bluetooth initialized, ready to change text every second");
}

void loop() {
  // Эта строка всегда должна быть в коде для обработки событий / This line must always be present in the code to handle events
  ParadigmaScreens.update();

  // Отправляем "Text A" и ждем 1 секунду / Send "Text A" and wait 1 second
  ParadigmaScreens.sendText(1, "Text A");
  delay(1000);  // Задержка 1 секунда / 1 second delay

  // Отправляем "Text B" и ждем 1 секунду / Send "Text B" and wait 1 second
  ParadigmaScreens.sendText(1, "Text B");
  delay(1000);  // Задержка 1 секунда / 1 second delay
}