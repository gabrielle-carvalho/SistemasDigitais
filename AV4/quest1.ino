#define RED_LED 10
#define GREEN_LED 9

#define DELTA_MAIOR 300
#define DELTA_MENOR 180

uint16_t A;
uint16_t B; 

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

    if ((A >= (B + DELTA_MENOR)) && (A <= (B + DELTA_MAIOR))){
        digitalWrite(GREEN_LED, LOW);
        digitalWrite(RED_LED, LOW);
    }

    else if (A > (B + DELTA_MAIOR)){
        digitalWrite(GREEN_LED, HIGH);
        digitalWrite(RED_LED, LOW);
    }
    else if (A < (B + DELTA_MENOR)){
        digitalWrite(GREEN_LED, LOW);
        digitalWrite(RED_LED, HIGH);
    }

    Serial.print("Valor de A: ");
    Serial.println(A);
    Serial.print("Valor de B: ");
    Serial.println(B);
    delay(1000);
   
}