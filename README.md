# ParadigmaScreens Library

![Paradigma.png](https://downloader.disk.yandex.ru/preview/9fe80dd6ae07d6a104dc0cd39d2da5b8c0220a81c0f0e2930b5e4d23a11588b9/66f4f249/_go3wrCMbx02LpdrL3YywtrxYBlDDCYeFQLRFGlLY9EPd-RBLJGpo9Vt0y3RvrQaQvLJ3nPG7pPyF7vVIt_-bQ%3D%3D?uid=0&filename=68747470733a2f2f73322e726164696b616c2e636c6f75642f323032342f30392f32342f5549415050362e706e67.png&disposition=inline&hash=&limit=0&content_type=image%2Fpng&owner_uid=0&tknv=v2&size=2048x2048&size=2048x2048)

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

## Скриншоты

![Paradigma1.png](https://downloader.disk.yandex.ru/preview/b842a134c50866d401ab007ea91d3d49781404cb1053d26888b481132a07fae4/66f4f237/Bkk4x5-L58rfpTzSt7PxjILXacVd15P5lxeLbfMKzU-R6-LgoBS1N3qP9fvLULCbK8sEzB2YU7xlgTHm_AFr6g%3D%3D?uid=0&filename=UIAPP1.png&disposition=inline&hash=&limit=0&content_type=image%2Fpng&owner_uid=0&tknv=v2&size=2048x2048&size=2048x2048)

![Paradigma2.png](https://downloader.disk.yandex.ru/preview/632598884ea0e8ef855364c6d3e1bd4594614087d22900d2bcc9315e5c38a65d/66f4f21f/whI00jyOYhQaB2EYlCo66I7kfj6DIubfMQaq9WtIZVKDC7xMeiWRIGvCCQ9u-mqks1pBkTBzl_hfoJX4Zpb9GA%3D%3D?uid=0&filename=UIAPP2.png&disposition=inline&hash=&limit=0&content_type=image%2Fpng&owner_uid=0&tknv=v2&size=2048x2048&size=2048x2048)

![Paradigma3.png](https://downloader.disk.yandex.ru/preview/62529747ed55d7c3b9c3e7b0a41bff4377bf3116e0a8e6d8eafcc7a530d3c621/66f4f20b/ABpFEPMX-qIFaexmR8U_CZINt6XGaP5EO1wbip5DRCsTsHMV26FV9t4GxgN1KCuiig7ft4ZpD2PCPfCTBFzoGw%3D%3D?uid=0&filename=UIAPP3.png&disposition=inline&hash=&limit=0&content_type=image%2Fpng&owner_uid=0&tknv=v2&size=2048x2048&size=2048x2048)

![Paradigma4.png](https://downloader.disk.yandex.ru/preview/aacb8f82c63bd8a93c18feb21f6493edf9a0fefc23a5bd77c2fcdf2ee85f43c2/66f4f1c9/tM4wEXTyGIq5gWVwGjUYX2iSU1rycb2VCyMAniKpSW2uOgBxyun8iaJf2rnSboPughBfVPxIlTJ1WYnz3sIpJQ%3D%3D?uid=0&filename=UIAPP4.png&disposition=inline&hash=&limit=0&content_type=image%2Fpng&owner_uid=0&tknv=v2&size=2048x2048&size=2048x2048)

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

![Paradigma.png](https://downloader.disk.yandex.ru/preview/9fe80dd6ae07d6a104dc0cd39d2da5b8c0220a81c0f0e2930b5e4d23a11588b9/66f4f249/_go3wrCMbx02LpdrL3YywtrxYBlDDCYeFQLRFGlLY9EPd-RBLJGpo9Vt0y3RvrQaQvLJ3nPG7pPyF7vVIt_-bQ%3D%3D?uid=0&filename=68747470733a2f2f73322e726164696b616c2e636c6f75642f323032342f30392f32342f5549415050362e706e67.png&disposition=inline&hash=&limit=0&content_type=image%2Fpng&owner_uid=0&tknv=v2&size=2048x2048&size=2048x2048)

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

## Screenshots


![Paradigma1.png](https://downloader.disk.yandex.ru/preview/b842a134c50866d401ab007ea91d3d49781404cb1053d26888b481132a07fae4/66f4f237/Bkk4x5-L58rfpTzSt7PxjILXacVd15P5lxeLbfMKzU-R6-LgoBS1N3qP9fvLULCbK8sEzB2YU7xlgTHm_AFr6g%3D%3D?uid=0&filename=UIAPP1.png&disposition=inline&hash=&limit=0&content_type=image%2Fpng&owner_uid=0&tknv=v2&size=2048x2048&size=2048x2048)

![Paradigma2.png](https://downloader.disk.yandex.ru/preview/632598884ea0e8ef855364c6d3e1bd4594614087d22900d2bcc9315e5c38a65d/66f4f21f/whI00jyOYhQaB2EYlCo66I7kfj6DIubfMQaq9WtIZVKDC7xMeiWRIGvCCQ9u-mqks1pBkTBzl_hfoJX4Zpb9GA%3D%3D?uid=0&filename=UIAPP2.png&disposition=inline&hash=&limit=0&content_type=image%2Fpng&owner_uid=0&tknv=v2&size=2048x2048&size=2048x2048)

![Paradigma3.png](https://downloader.disk.yandex.ru/preview/62529747ed55d7c3b9c3e7b0a41bff4377bf3116e0a8e6d8eafcc7a530d3c621/66f4f20b/ABpFEPMX-qIFaexmR8U_CZINt6XGaP5EO1wbip5DRCsTsHMV26FV9t4GxgN1KCuiig7ft4ZpD2PCPfCTBFzoGw%3D%3D?uid=0&filename=UIAPP3.png&disposition=inline&hash=&limit=0&content_type=image%2Fpng&owner_uid=0&tknv=v2&size=2048x2048&size=2048x2048)

![Paradigma4.png](https://downloader.disk.yandex.ru/preview/aacb8f82c63bd8a93c18feb21f6493edf9a0fefc23a5bd77c2fcdf2ee85f43c2/66f4f1c9/tM4wEXTyGIq5gWVwGjUYX2iSU1rycb2VCyMAniKpSW2uOgBxyun8iaJf2rnSboPughBfVPxIlTJ1WYnz3sIpJQ%3D%3D?uid=0&filename=UIAPP4.png&disposition=inline&hash=&limit=0&content_type=image%2Fpng&owner_uid=0&tknv=v2&size=2048x2048&size=2048x2048)


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

