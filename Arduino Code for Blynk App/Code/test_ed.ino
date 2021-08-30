#include <BlynkSimpleStream.h>
 

 char auth[] = "qgLqkJhGpacrrGl3TrHWEK96-5NWYcBm";
 
 void setup()
 {
   Serial.begin(9600);
   Blynk.begin(auth, Serial);
   pinMode(11, OUTPUT);
   pinMode(12, OUTPUT);
   pinMode(13, OUTPUT);
 }
 
 BLYNK_WRITE(V1) //Button Widget is writing to pin V1
{
  int pinData = param.asInt(); //Save Status
  if(pinData==1){
    digitalWrite(11, HIGH);
  }else{
    digitalWrite(11, LOW);
  }
}
 
 void loop()
 {
   Blynk.run();
 }
