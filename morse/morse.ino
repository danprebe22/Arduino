#include <Morse.h>

Morse morse = Morse(9); //PIN
char letra;
String s = "";


void setup(){
  Serial.begin(9600);
}

void loop(){
  s = "";
  while(Serial.avaliable){
    letra = Serial.read();
    s+=letra;
  }
  
  morse.codigo(s);
  Serial.println(s);
 
  delay(500);
}
