#define RED_LED 10
#define GREEN_LED 9

uint16_t A;
uint16_t B;

uint16_t delta;
uint16_t delayTime;

void setup()
{
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);

  Serial.begin (9600);
}

void loop()
{
    A = analogRead(A1);
    B = analogRead(A0);

    delta = A - B;

    delayTime = map(delta, 0, 1023, 500, 100);

    digitalWrite(RED_LED, HIGH);
    digitalWrite(GREEN_LED, LOW);
    delay(delayTime);

    digitalWrite(RED_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);
    delay(delayTime);

    Serial.print("Delay time: ");
    Serial.println(delayTime);
    Serial.print("delta: ");
    Serial.println(delta);
   
}