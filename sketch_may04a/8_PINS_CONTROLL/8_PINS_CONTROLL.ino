void setup() {
  // put your setup code here, to run once:
pinMode(0, OUTPUT);
pinMode(1, OUTPUT);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);

pinMode(14, INPUT);
pinMode(15, INPUT);
pinMode(16, INPUT);
pinMode(17, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (14 == HIGH)
{
 if(15 == HIGH && 16 == HIGH && 17 == HIGH)
 digitalWrite(7, HIGH);
 if(15 == HIGH && 16 == HIGH && 17 == LOW)
 digitalWrite(6, HIGH);
 if(15 == HIGH && 16 == LOW && 17 == HIGH)
 digitalWrite(5, HIGH);
 if(15 == HIGH && 16 == LOW && 17 == LOW)
 digitalWrite(4, HIGH);
 if(15 == LOW && 16 == HIGH && 17 == HIGH)
 digitalWrite(3, HIGH);
 if(15 == LOW && 16 == HIGH && 17 == LOW)
 digitalWrite(2, HIGH);
 if(15 == LOW && 16 == LOW && 17 == HIGH)
 digitalWrite(1, HIGH);
 if(15 == LOW && 16 == LOW && 17 == LOW)
 digitalWrite(0, HIGH);
}

if (14 == LOW)
{
 if(15 == HIGH && 16 == HIGH && 17 == HIGH)
 digitalWrite(7, LOW);
 if(15 == HIGH && 16 == HIGH && 17 == LOW)
 digitalWrite(6, LOW);
 if(15 == HIGH && 16 == LOW && 17 == HIGH)
 digitalWrite(5, LOW);
 if(15 == HIGH && 16 == LOW && 17 == LOW)
 digitalWrite(4, LOW);
 if(15 == LOW && 16 == HIGH && 17 == HIGH)
 digitalWrite(3, LOW);
 if(15 == LOW && 16 == HIGH && 17 == LOW)
 digitalWrite(2, LOW);
 if(15 == LOW && 16 == LOW && 17 == HIGH)
 digitalWrite(1, LOW);
 if(15 == LOW && 16 == LOW && 17 == LOW)
 digitalWrite(0, LOW);
}
}
