#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>


const int M1A = 7;
const int M2A =6;
const int ena = 9;

Adafruit_SSD1306 display = Adafruit_SSD1306(128,32,&Wire);

void setup(){
    Serial.begin(9600);
    pinMode(8,OUTPUT);
    tone(8,600);
    delay(400);
    noTone(8);

    Serial.println("Hello MDT !!!"); //2

    pinMode(M1A, OUTPUT);
    pinMode(M2A, OUTPUT);
    pinMode(ena, OUTPUT);

    analogWrite (ena,100);
    digitalWrite (M1A,1);
    digitalWrite (M2A,0);
    Serial.println("Turn CCW");
    delay(2000);
    digitalWrite (M1A,0);
    digitalWrite (M2A,0); //3

    analogWrite (ena,100);
    digitalWrite (M1A,0);
    digitalWrite (M2A,1);
    Serial.println("Turn CW");
    delay(2500);
    digitalWrite (M1A,0);
    digitalWrite (M2A,0); //4

    
    display.begin(0x3C);
    display.clearDisplay();
    display.display();

    
    display.setCursor(30,10);
    display.setTextColor(1);
    display.setTextSize(1);
    display.println("Hello MDT !!");
      display.display(); 
      delay(1000);
      display.clearDisplay();
      display.display(); //5

      delay(350);
      tone(8,600);
      delay(200);
      noTone(8); //6



}

void loop(){ 


}