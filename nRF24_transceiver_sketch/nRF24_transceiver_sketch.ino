#include <SPI.h>
// Библиотека для работы с трансивером nRF24L01
#include <RF24.h> 

#define CE_PIN 9
#define CSN_PIN 10

byte payload;

RF24 nRF(CE_PIN, CSN_PIN);

void setup(){
  Serial.begin(9600);
  
  // Инициализируем модуль
  nRF.begin();
  // Размер пакета данных в байтах
  nRF.setPayloadSize(1);
  // Канал для обмена данными 0-127 (частота сигнала)
  nRF.setChannel(0);
  // Уровень мощности передатчика
  // RF24_PA_MIN, RF24_PA_LOW, RF24_PA_HIGH, RF24_PA_MAX
  nRF.setPALevel(RF24_PA_MAX);
  // Скорость обмена данными (Мбит/с)
  // RF24_250KBPS, RF24_1MBPS, RF24_2MBPS 
  nRF.setDataRate(RF24_250KBPS);

  /*
  // Transmit
  // Открыть канал на запись
  // Уникальный ID трансивера (5-байтовый адрес)
  nRF.openWritingPipe(byte("nRF24"));
  nRF.stopListening();
  */
  
  /*
  // Receive
  // Открыть канал на чтение (номер 0-5, адрес)
  nRF.openReadingPipe(1, byte("nRF24"));
  nRF.startListening();
  */
}

void loop(){
  /*
  // Transmit
  // &var - указатель на адрес оперативной памяти данной переменной (оператор '&')
  bool report=nRF.write(&payload, sizeof(payload));
  Serial.println(report);
  payload+=1;
  */
  
  /*                
  // Receive
  if(nRF.available()){
    nRF.read(&payload, sizeof(payload));
    Serial.println(payload);
  }
  */
}
