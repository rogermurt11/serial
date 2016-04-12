/******************************************************************
 **                                                              **       
 **      SERIAL 4.5 ESTRUCTURES SWITCHCASE                       ** 
 **                                                              ** 
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************
int sensorReading = 0;          // Variable sensor de llum
//***************  SETUP   ****************************************
void setup() {
  
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("The day is "); 
   
  switch (sensorReading) {
  case 0:    
    Serial.println("dark"); //si el sensor és igual a 0 escriurà fosc 
    break;
  case 1:    
    Serial.println("dim"); //si el sensor és igual a 1 escriurà enfosquir
    break;
  case 2:    
    Serial.println("medium"); //si el sensor és igual a 2 escriurà mig 
    break;
  case 3:
    Serial.println("bright"); //si el sensor és igual a 3 escriurà clar 
    break;
  default:
    Serial.println("... I don't know!!!"); // aquest cop si el sensor té un valor diferent escriurà no ho se!
  }
}

//*************    LOOP   ******************************************
void loop() {

}
