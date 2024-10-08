# ParadigmaScreens Library

![68747470733a2f2f73322e726164696b616c2e636c6f75642f323032342f30392f32342f5549415050362e706e67.png](https://s2.radikal.cloud/2024/10/01/68747470733a2f2f73322e726164696b616c2e636c6f75642f323032342f30392f32342f5549415050362e706e67.png)

## Description

The **ParadigmaScreens** library for Arduino IDE works with the **Paradigma** iOS app version 2.X.  
The **Paradigma** app allows you to control your microcontroller projects with Bluetooth modules. Using a convenient **drag and drop** interface, you can create custom control screens. The library supports custom buttons, switches, and text blocks.

## App Features:

- Create custom screens to control projects on Arduino and ESP via Bluetooth.
- Work with Bluetooth modules such as **HC-05**, **HC-06**, **HM-10**, and others.
- Conveniently save and restore screen configurations.

## Getting Started

1. Download the [**Paradigma**](https://apps.apple.com/ru/app/paradigma/id6503053235) app from the App Store.
2. Install the **ParadigmaScreens** library.
3. Assemble the circuit.
4. Upload the example from the library for familiarization.
5. Create custom screens in the app and control your device!

## Brief Description of ParadigmaScreens Commands

- **ParadigmaScreens.sendText(1, "Hello world!");**  
  Sends the text `"Hello world!"` to the text object with ID `1` in the app.

- **ParadigmaScreens.button[1]**  
  Returns `true` if the button with ID `1` is pressed in the app, and `false` if it is not pressed.

- **ParadigmaScreens.switchState[1]**  
  Returns `true` if the switch with ID `1` is ON in the app, and `false` if it is OFF.

- **ParadigmaScreens.update();**  
  Updates the states of control elements by receiving data from the app; should be called inside the `loop()` function.

## Screenshots

![SNIMOK-EKRANA-2024-09-29-V-00.17.40.png](https://s2.radikal.cloud/2024/10/01/SNIMOK-EKRANA-2024-09-29-V-00.17.40.png)
![SNIMOK-EKRANA-2024-09-29-V-00.18.03.png](https://s2.radikal.cloud/2024/10/01/SNIMOK-EKRANA-2024-09-29-V-00.18.03.png)
![SNIMOK-EKRANA-2024-09-29-V-00.18.21.png](https://s2.radikal.cloud/2024/10/01/SNIMOK-EKRANA-2024-09-29-V-00.18.21.png)
![SNIMOK-EKRANA-2024-09-29-V-00.18.27.png](https://s2.radikal.cloud/2024/10/01/SNIMOK-EKRANA-2024-09-29-V-00.18.27.png)

## Controlling a Bluetooth Car Without the Library

In addition to custom screens, you can directly send the following symbols to control a Bluetooth car. In this case, the **ParadigmaScreens** library is not required. In the app, you need to select **Bluetooth Car**:

- **S** — Stop
- **F** — Forward
- **B** — Backward
- **L** — Left
- **R** — Right
- **I** — Forward Right
- **G** — Forward Left
- **J** — Backward Right
- **H** — Backward Left

# ParadigmaScreens Library

![68747470733a2f2f73322e726164696b616c2e636c6f75642f323032342f30392f32342f5549415050362e706e67.png](https://s2.radikal.cloud/2024/10/01/68747470733a2f2f73322e726164696b616c2e636c6f75642f323032342f30392f32342f5549415050362e706e67.png)

## Описание

Библиотека **ParadigmaScreens** для Arduino IDE работает с iOS приложением **Paradigma** версии 2.X.  
Приложение **Paradigma** позволяет управлять вашими проектами на микроконтроллерах с Bluetooth модулями. С помощью удобного интерфейса **drag and drop** вы можете создавать кастомные экраны для управления. Библиотека поддерживает кастомные кнопки, переключатели и текстовые блоки.

## Возможности приложения:

- Создание кастомных экранов для управления проектами на Arduino и ESP через Bluetooth.
- Работа с Bluetooth модулями, такими как **HC-05**, **HC-06**, **HM-10** и другими.
- Удобное сохранение и восстановление конфигураций экранов.

## Как начать использовать

1. Скачайте приложение [**Paradigma**](https://apps.apple.com/ru/app/paradigma/id6503053235) из App Store.
2. Установите библиотеку **ParadigmaScreens**.
3. Соберите схему.
4. Загрузите пример из библиотеки для ознакомления.
5. Создавайте кастомные экраны в приложении и управляйте вашим устройством!

## Краткое описание команд ParadigmaScreens

- **ParadigmaScreens.sendText(1, "Hello world!");**  
  Отправляет текст `"Hello world!"` на текстовый объект с ID `1` в приложении.

- **ParadigmaScreens.button[1]**  
  Возвращает `true`, если кнопка с ID `1` нажата в приложении, и `false`, если она не нажата.

- **ParadigmaScreens.switchState[1]**  
  Возвращает `true`, если переключатель с ID `1` включен в приложении, и `false`, если он выключен.

- **ParadigmaScreens.update();**  
  Обновляет состояния элементов управления, получая данные из приложения; должна вызываться внутри функции `loop()`.

## Скриншоты

![SNIMOK-EKRANA-2024-09-29-V-00.17.40.png](https://s2.radikal.cloud/2024/10/01/SNIMOK-EKRANA-2024-09-29-V-00.17.40.png)
![SNIMOK-EKRANA-2024-09-29-V-00.18.03.png](https://s2.radikal.cloud/2024/10/01/SNIMOK-EKRANA-2024-09-29-V-00.18.03.png)
![SNIMOK-EKRANA-2024-09-29-V-00.18.21.png](https://s2.radikal.cloud/2024/10/01/SNIMOK-EKRANA-2024-09-29-V-00.18.21.png)
![SNIMOK-EKRANA-2024-09-29-V-00.18.27.png](https://s2.radikal.cloud/2024/10/01/SNIMOK-EKRANA-2024-09-29-V-00.18.27.png)

## Управление Bluetooth-машинкой без библиотеки

Помимо кастомных экранов, вы можете напрямую отправлять следующие символы для управления Bluetooth-машинкой. В этом случае библиотека **ParadigmaScreens** не требуется. В приложении нужно выбрать **Bluetooth Car**:

- **S** — Стоп
- **F** — Вперед
- **B** — Назад
- **L** — Налево
- **R** — Направо
- **I** — Вперед направо
- **G** — Вперед налево
- **J** — Назад направо
- **H** — Назад налево
