#define ONE_MINUTE (1 * 10 * 1000)
#define ON true
#define OFF false

void setup()
{
  for(int i = 0; i < 13; i++) {
    pinMode(i, OUTPUT);
  }
}

void blink_for_one_second(int pin) {
  digitalWrite(pin, LOW);
  delay(900);
  digitalWrite(pin, HIGH);
  delay(100);
}

void blink_all_lights_for_one_second() {
  for(int i = 0; i < 13; i++ ){
    digitalWrite(i, LOW);
  }
  delay(400);
  for(int i = 0; i < 13; i++ ){
    digitalWrite(i, HIGH);
  }
  delay(100);
  for(int i = 0; i < 13; i++ ){
    digitalWrite(i, LOW);
  }
  delay(400);
  for(int i = 0; i < 13; i++ ) {
    digitalWrite(i, HIGH);
  }
  delay(100);
}

void turn_all_lights(bool on) {
  int state = on ? HIGH : LOW;
  for(int i = 0; i < 13; i++) {
    digitalWrite(i, state);
  }
}

void loop()
{
  int i = 0;
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 5; j++) {
      blink_for_one_second(i);
    }
    digitalWrite(i, HIGH);
  }

  for(int i = 0; i < 10; i ++) {
    blink_all_lights_for_one_second();
  }

  turn_all_lights(OFF);
}
