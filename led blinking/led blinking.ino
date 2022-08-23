int LED1 = 11;
int LED2 = 10;
int LED3 = 9;
int LED4 = 8;
void setup()
 {
//pinMode(pin,mode);
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);
}

void loop()
 
  {
digitalWrite(LED1, HIGH);
delay(100);
digitalWrite(LED2, HIGH);
delay(100);
digitalWrite(LED3, HIGH);
delay(100);
digitalWrite(LED4, HIGH);
delay(100);
digitalWrite(LED1, LOW);
delay(100);
digitalWrite(LED2, LOW);
delay(100);
digitalWrite(LED3, LOW);
delay(100);
digitalWrite(LED4, LOW);
delay(100);
}


