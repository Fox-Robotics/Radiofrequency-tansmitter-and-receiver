int LecturaX=0;
int LecturaY=0;
int Button;


void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(10,INPUT);
  pinMode(11,OUTPUT);
  

}

void loop() {
  LecturaX=analogRead(A0);
  LecturaY=analogRead(A1);
  Button=digitalRead(10);
  
  Serial.print(LecturaX);
  Serial.print(',');
  Serial.print(LecturaY);
  Serial.print(',');

  digitalWrite(11,Button);
  delay(100);

}
