void setup() {
  pinMode(5,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  //pinMode(11,INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int light = analogRead(A0);
  int sound = digitalRead(11);
  Serial.println(light);
  //Serial.println(sound);
  if(light>=200){
    Serial.println("FIRE FIRE");
    digitalWrite(5,HIGH);
    digitalWrite(7,LOW);
    tone(8,1000,200);
 }
  else{
    Serial.println("No fire");
    digitalWrite(5,LOW);
    digitalWrite(7,HIGH);
    noTone(8);
  
}

  delay(500);
  

}
