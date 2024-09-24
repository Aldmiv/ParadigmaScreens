/*
    ____  ___    ____  ___    ____  ____________  ______ 
   / __ \/   |  / __ \/   |  / __ \/  _/ ____/  |/  /   |
  / /_/ / /| | / /_/ / /| | / / / // // / __/ /|_/ / /| |
 / ____/ ___ |/ _, _/ ___ |/ /_/ // // /_/ / /  / / ___ |
/_/   /_/  |_/_/ |_/_/  |_/_____/___/\____/_/  /_/_/  |_|

------------------------------------------------------------------------------------------------------------------------------------------------------                                                         

### Пример использования приложения Paradigma для управления встроенным светодиодом с помощью переключателя (switch) в приложении.
Данный код протестирован с версией iOS приложения Paradigma 2.0 (https://apps.apple.com/ru/app/paradigma/id6503053235) и версией библиотеки ParadigmaScreens.h 1.0.

**Функциональность:**
- При включении переключателя включается встроенный светодиод.
- При выключении переключателя светодиод гаснет.

**Инструкции:**
- **Добавление переключателя на экран:**  
  В приложении необходимо добавить элемент переключателя (switch) с ID = 1.  
  
- **Подключение модуля Bluetooth:**  
  Модуль Bluetooth должен быть подключен следующим образом:  
  - TX модуля к RX на Arduino  
  - RX модуля к TX на Arduino  

------------------------------------------------------------------------------------------------------------------------------------------------------

### Example usage of the Paradigma app for controlling the built-in LED with a switch.
This code was tested with iOS app version Paradigma 2.0 (https://apps.apple.com/ru/app/paradigma/id6503053235) and ParadigmaScreens.h library version 1.0.

**Functionality:**
- When the switch is turned on, the built-in LED turns on.
- When the switch is turned off, the LED turns off.

**Instructions:**
- **Adding a switch to the screen:**  
  In the app, add a switch element with ID = 1.

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
  Serial.println("Bluetooth initialized, ready to receive switch states");
}

void loop() {
  // Эта строка всегда должна быть в коде для обработки событий / This line must always be present in the code to handle events
  ParadigmaScreens.update();

  // Если переключатель с ID "1" включен / If switch with ID "1" is ON
  if (ParadigmaScreens.switchState[1]) {
    // Включаем встроенный светодиод / Turn on the built-in LED
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    // Выключаем встроенный светодиод / Turn off the built-in LED
    digitalWrite(LED_BUILTIN, LOW);
  }
}