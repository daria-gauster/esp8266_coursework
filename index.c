#define PIN_LED 2
#define PIN_PHOTO_SENSOR A0
#define PIN_RELAY 10

void setup() {
  Serial.begin(9600);
  pinMode(PIN_LED, OUTPUT);
  digitalWrite(PIN_RELAY, HIGH);
}

void loop() {
  int val = 1023 – analogRead(PIN_PHOTO_RESISTOR);
  Serial.println(val);

  int ledPower = map(val, 0, 1023, 0, 255); // Преобразуем полученное значение в уровень PWM-сигнала. Чем меньше значение освещенности, тем меньше мощности мы должны подавать на светодиод через ШИМ.

  analogWrite(PIN_LED, ledPower); // Меняем яркость
  if (val < 300) {
    // Светло, выключаем реле
    digitalWrite(PIN_RELAY, HIGH);
  } else {
    // Темновато, включаем лампочку
    digitalWrite(PIN_RELAY,  LOW);
  }
}
