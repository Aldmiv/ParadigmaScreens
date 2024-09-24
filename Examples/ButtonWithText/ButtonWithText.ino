/*
    ____  ___    ____  ___    ____  ____________  ______ 
   / __ \/   |  / __ \/   |  / __ \/  _/ ____/  |/  /   |
  / /_/ / /| | / /_/ / /| | / / / // // / __/ /|_/ / /| |
 / ____/ ___ |/ _, _/ ___ |/ /_/ // // /_/ / /  / / ___ |
/_/   /_/  |_/_/ |_/_/  |_/_____/___/\____/_/  /_/_/  |_|

------------------------------------------------------------------------------------------------------------------------------------------------------                                                         

### Пример использования приложения Paradigma для управления встроенным светодиодом и текстом на экране нажатием на кнопку в приложении.
Данный код протестирован с версией iOS приложения Paradigma 2.0 (https://apps.apple.com/ru/app/paradigma/id6503053235) и версией библиотеки ParadigmaScreens.h 1.0.

**Функциональность:**
- При нажатии кнопки зажигается встроенный светодиод.
- При отжатии светодиод гаснет.
- Текст с ID 1 меняется в зависимости от состояния кнопки (нажата/отжата).

**Инструкции:**
- **Добавление кнопки на экран:**  
  В приложении необходимо добавить элемент кнопки с ID = 1.  
  
- **Добавление текста на экран:**  
  Необходимо добавить элемент текста с ID = 1, чтобы получать уведомления о нажатии и отжатии кнопки.
  
- **Подключение модуля Bluetooth:**  
  Модуль Bluetooth должен быть подключен следующим образом:  
  - TX модуля к RX на Arduino  
  - RX модуля к TX на Arduino  

------------------------------------------------------------------------------------------------------------------------------------------------------

### Example usage of the Paradigma app for controlling the built-in LED and screen text by pressing a button in the app.
This code was tested with iOS app version Paradigma 2.0 (https://apps.apple.com/ru/app/paradigma/id6503053235) and ParadigmaScreens.h library version 1.0.

**Functionality:**
- When the button is pressed, the built-in LED turns on.
- When the button is released, the LED turns off.
- Text with ID 1 changes based on button state (pressed/released).

**Instructions:**
- **Adding a button to the screen:**  
  In the app, add a button element with ID = 1.

- **Adding a text element to the screen:**  
  You need to add a text element with ID = 1 to receive notifications about the button being pressed or released.

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

  // Настраиваем встроенный светодиод как выход / Set built-in LED as output
  pinMode(LED_BUILTIN, OUTPUT);

  // Дополнительно можно вывести сообщение в монитор порта для отладки / Optionally, print a message for debugging
  Serial.println("Bluetooth initialized, ready to receive button presses");
}

void loop() {
  // Эта строка всегда должна быть в коде для обработки событий / This line must always be present in the code to handle events
  ParadigmaScreens.update();

  // Если кнопка с ID "1" нажата / If button with ID "1" is pressed
  if (ParadigmaScreens.button[1]) {
    // Включаем встроенный светодиод / Turn on the built-in LED
    digitalWrite(LED_BUILTIN, HIGH);

    // Отправляем текст по ID объекта текста 1, что кнопка нажата / Send text with ID 1, indicating the button is pressed
    ParadigmaScreens.sendText(1, "Button 1 pressed");
  } else {
    // Выключаем встроенный светодиод / Turn off the built-in LED
    digitalWrite(LED_BUILTIN, LOW);

    // Отправляем текст по ID объекта текста 1, что кнопка отжата / Send text with ID 1, indicating the button is released
    ParadigmaScreens.sendText(1, "Button 1 released");
  }
}