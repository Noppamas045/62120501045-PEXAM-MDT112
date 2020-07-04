void setup(){
    Serial.begin(9600);
    pinMode(8,OUTPUT);
    tone(8,600);
    delay(400);
    noTone(8);

    Serial.println("Hello MDT !!!"); //2
}

void loop(){
  
    

}