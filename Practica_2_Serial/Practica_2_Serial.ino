/*************************************************************************
**                                                                      **                                                                     
**                       PRACTICA 2 SERIAL                              **                                                                      
**                                                                      **                                                                      
**                                                                      **
*************************************************************************/

//******  Includes  ******************************************************


//******  Variables  *****************************************************
int a = 5;                // definim el valor de cada lletra perquè a continuació, les lletres que s'operin tinguin un valor cada una 
int b = 10;              //       "                                          "                                          "
int c = 20;             //        "                                          "                                          "

//******  Setup  *********************************************************                                                                      
void setup() {
 Serial.begin(9600);     // llegeix el programa a 9600 bps

  Serial.println("Here is some math: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);

  Serial.print("a + b = ");       // suma a + b 
  Serial.println(a + b);

 Serial.print("a * c = ");       // multiplica a * c 
  Serial.println(a * c);
  
  Serial.print("c / b = ");       // divideix c / b
  Serial.println(c / b);

  Serial.print("c % b = ");       // tant per cent de c i b 
  Serial.println(c % b);
  
  Serial.print("b - c = ");       // resta b - c 
  Serial.println(b - c); 
}

//******  Loop  **********************************************************
void loop()  // we need this to be here even though its empty
{
}

