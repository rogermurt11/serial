/******************************************************************
 **                                                              **       
 **          Math is fun  2.2    Càlcul hipotenusa               ** 
 **                                                              ** 
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************
  int a = 3;
  int b = 4;
  int h;


//***************  SETUP   ****************************************
void setup() {
    Serial.begin(9600);     // carrega Serial lliberia comunicació monitor at 9600 bps
    
    Serial.print("a = ");
    Serial.println(a);
    Serial.print("b = ");
    Serial.println(b);
    Serial.println("h = sqrt (pow (a,2)+ pow (b,2)) ");
     h = sqrt (pow (a,2)+pow (b,2));
    Serial.println(h);

 
}
//*************    LOOP   ******************************************
void loop()  // 
{
}
