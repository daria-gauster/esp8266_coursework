//инициализация пина сенсора
#define PIN_PHOTO_SENSOR A0
//конфигурация платы
void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
}
//запуск кода программы
void loop() {
int val = analogRead(PIN_PHOTO_SENSOR); 
//вывод значения пина
  Serial.println(val);
//проверка уровня освещения
  if (val < 300) {
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(2, LOW);
}
}
