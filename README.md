### Программа для проверки работоспособности приемопередатчиков и их возможностей.
---
##### Организация периферийных устройств
Модули подключаются к контроллеру по протоколу SPI. Для передающего устройства (Transmit) указать в прошивке номера портов управляющих контактов СE и CSN. Аналогично для принимающего устройства (Receive).
##### Принцип тестирования
Итеративно трансивер отправляет в эфир пакет данных размером 1 байт (число 0-255). Устанавливается канал связи (0-127, на одном канале до 6 передатчиков и 1 приемник), уровень мощности передатчика, cкорость обмена данными (Мбит/с).
>Частота сигнала = 2.4 ГГц + номер канала / 1000.
>Чем ниже скорость обмена данными, тем выше чувствительность и дальность связи.
Каждый трансивер имеет свой уникальный ID (5-байтовый адрес).
