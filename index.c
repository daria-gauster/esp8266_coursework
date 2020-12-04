#define PIN_LED 2
#define PIN_PHOTO_SENSOR A0

void setup() {
  Serial.begin(9600);
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  int val = 1023 – analogRead(PIN_PHOTO_RESISTOR);
  Serial.println(val);

  int ledPower = map(val, 0, 1023, 0, 255); // Преобразуем полученное значение в уровень 
  //PWM-сигнала. Чем меньше значение освещенности, 
  //тем меньше мощности мы должны подавать на светодиод через ШИМ.
  }
Serial.println(val);
  if (val < 300) {
    digitalWrite(PIN_LED, LOW);
  } else {
    digitalWrite(PIN_LED, HIGH);
  }
}
