#include <Arduino.h>
int ledPin=13;
int startValue=5;

void Flashled(int times){
  int flash=0;
  
  while(times>flash){
    digitalWrite(ledPin,HIGH);
    delay(200);
    digitalWrite(ledPin,LOW);
    delay(200);

    flash++;
  }
}

void setup() {
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);

  Serial.print("=========Smart Coutdown Starting=========\n");
  int count=startValue;

  while (count>0){
    Serial.print("Counter at:");
    Serial.println(count);

    Flashled(count);
    delay(1000);
    count--;

   
  }

  Serial.print("=====Countdown Complete====");

}

void loop (){


}

 


