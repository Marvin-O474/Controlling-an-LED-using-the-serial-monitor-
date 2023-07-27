const int ledpin=LED_BUILTIN;
 char serialmonitor;
void setup(){
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT);
   Serial.println("Input a 1 or 0 to control LED");
}
void loop(){
  if (Serial.available()>0){
   serialmonitor = Serial.read();}
    if (serialmonitor == '1'){
      digitalWrite(ledpin,HIGH);
      Serial.println("LED is on");}
      
      else{
        if (serialmonitor=='0'){
        digitalWrite(ledpin,LOW);
        Serial.println("LED is off");}
      }
       
    }
 
 
