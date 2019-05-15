void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
Serial.begin(9600);
while (!Serial);
Serial.println("input 1-to-8 to choose which relay you want to on");
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available())
{
  int state = Serial.parseInt();
  if (state == 1)
  {
    digitalWrite(2, HIGH);
    Serial.println("command completed");
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
  }
  if (state == 2)
  {
    digitalWrite(3, HIGH);
    Serial.println("command completed");
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    
  }if (state == 3)
  {
    digitalWrite(4, HIGH);
    Serial.println("command completed");
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    
  }if (state == 4)
  {
    digitalWrite(5, HIGH);
    Serial.println("command completed");
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    
  }if (state == 5)
  {
    digitalWrite(6, HIGH);
    Serial.println("command completed");
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    
  }if (state == 6)
  {
    digitalWrite(7, HIGH);
    Serial.println("command completed");
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    
  }if (state == 7)
  {
    digitalWrite(8, HIGH);
    Serial.println("command completed");
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(9, LOW);
    
  }if (state == 8)
  {
    digitalWrite(9, HIGH);
    Serial.println("command completed");
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    
  }
}
}
