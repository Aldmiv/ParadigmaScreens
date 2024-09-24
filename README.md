# ParadigmaScreens Library

![Paradigma.png](https://downloader.disk.yandex.ru/preview/c3c74c479f51299a96d1bb4c7aa4ea56d15d8fa7d66c687a4ca8a78cce904376/66f2e8d4/_go3wrCMbx02LpdrL3YywtrxYBlDDCYeFQLRFGlLY9EPd-RBLJGpo9Vt0y3RvrQaQvLJ3nPG7pPyF7vVIt_-bQ%3D%3D?uid=0&filename=68747470733a2f2f73322e726164696b616c2e636c6f75642f323032342f30392f32342f5549415050362e706e67.png&disposition=inline&hash=&limit=0&content_type=image%2Fpng&owner_uid=0&tknv=v2&size=2048x2048)

## Описание

Библиотека **ParadigmaScreens** для Arduino IDE работает с iOS приложением **Paradigma** версии 2.0.  
Приложение **Paradigma** позволяет управлять вашими проектами на микроконтроллерах с Bluetooth модулями. С помощью удобного интерфейса **drag and drop** вы можете создавать кастомные экраны для управления. Библиотека поддерживает кастомные кнопки, переключатели и текстовые блоки.

## Возможности приложения:

- Создание кастомных экранов для управления проектами на Arduino и ESP через Bluetooth.
- Работа с Bluetooth модулями, такими как **HC-05**, **HC-06**, **HM-10** и другими.
- Удобное сохранение и восстановление конфигураций экранов.

## Как начать использовать

1. Скачайте приложение [**Paradigma 2.0**](https://apps.apple.com/ru/app/paradigma/id6503053235) из App Store.
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

# ParadigmaScreens Library

![Paradigma.png](https://downloader.disk.yandex.ru/preview/c3c74c479f51299a96d1bb4c7aa4ea56d15d8fa7d66c687a4ca8a78cce904376/66f2e8d4/_go3wrCMbx02LpdrL3YywtrxYBlDDCYeFQLRFGlLY9EPd-RBLJGpo9Vt0y3RvrQaQvLJ3nPG7pPyF7vVIt_-bQ%3D%3D?uid=0&filename=68747470733a2f2f73322e726164696b616c2e636c6f75642f323032342f30392f32342f5549415050362e706e67.png&disposition=inline&hash=&limit=0&content_type=image%2Fpng&owner_uid=0&tknv=v2&size=2048x2048)

## Description

The **ParadigmaScreens** library for Arduino IDE works with the **Paradigma** iOS app version 2.0.  
The **Paradigma** app allows you to control your microcontroller projects with Bluetooth modules. Using a convenient **drag and drop** interface, you can create custom control screens. The library supports custom buttons, switches, and text blocks.

## App Features:

- Create custom screens to control projects on Arduino and ESP via Bluetooth.
- Work with Bluetooth modules such as **HC-05**, **HC-06**, **HM-10**, and others.
- Conveniently save and restore screen configurations.

## Getting Started

1. Download the [**Paradigma 2.0**](https://apps.apple.com/ru/app/paradigma/id6503053235) app from the App Store.
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

## Screenshots

![Paradigma1.png](https://downloader.disk.yandex.ru/preview/83623cddeb63e28e2f7c3443b46afc42075b1c9fe1a8f6862fe0db342c236a55/66f2ee92/M94alHeDO-RIK_Vl-VauzXUZv7YGmbgtrJ3DkvVjQ7DHQz65l9IuN3Vt8ylcSVyEawfjruA3aIvnsU4YidWjwA%3D%3D?uid=0&filename=Снимок%20экрана%202024-09-24%20в%2015.47.41.png&disposition=inline&hash=&limit=0&content_type=image%2Fpng&owner_uid=0&tknv=v2&size=2048x2048)

![Paradigma1.png](https://downloader.disk.yandex.ru/preview/ae43718c5aa1a97fc2fa49c4507d2489862d8cc8b706b97e0f73d466f4f56e52/66f2eec4/GA2RgXuAwQBzmCWxVekRS2SVWlnbh2inKMahB6mUTbwkTTWUmaDouHgaz6ehpKJnEZB6MHZBHNkDKc9BvwUcDA%3D%3D?uid=0&filename=Снимок%20экрана%202024-09-24%20в%2015.49.03.png&disposition=inline&hash=&limit=0&content_type=image%2Fpng&owner_uid=0&tknv=v2&size=2048x2048)

![Paradigma1.png](https://downloader.disk.yandex.ru/preview/d93e76c5c8d3e2db9b1765aad4e39001695f87a4427ee61d430af5b8baaecab2/66f2f731/KI10QvSQd06_RPeNDSKsVGPtYpbZc6tLRgPSeUK0QptlTE5U7g3ZmYtVM85jygAO78K1USxG0BTJSh7RdyifaQ%3D%3D?uid=0&filename=Снимок%20экрана%202024-09-24%20в%2015.57.34.png&disposition=inline&hash=&limit=0&content_type=image%2Fpng&owner_uid=0&tknv=v2&size=2048x2048)

