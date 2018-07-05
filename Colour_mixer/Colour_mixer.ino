#define red 11
#define green 10
#define blue 9
void setup() {
 pinMode(9,OUTPUT);//Blue 
 pinMode(10,OUTPUT);//Green
 pinMode(11,OUTPUT);//Red
 digitalWrite(red,1);
 digitalWrite(green,1);
 digitalWrite(blue,1);
 Serial.begin(38400);
}

void loop() {

  //------------------------------------------------------------------------------------------
  // Take Serial readings
  if(Serial.available()){
    char c=Serial.read();              //Assign only the character
    int val=Serial.parseInt();         //Take integer value
    if(c == 'r'){
      
      analogWrite(red,255-val);   // Inverterd the value due to common anode RGB LED
    }
    if(c == 'g'){
      
      analogWrite(green,255-val);
    }
    if(c == 'b'){
      
      analogWrite(blue,255-val);
    }
    if(c == 'f'){
      
        digitalWrite(red,1);
        digitalWrite(green,1);
        digitalWrite(blue,1);
    }
    
    
  }
  
}
// Created by Vinura Udaraka
