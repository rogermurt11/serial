/*************************************************************************
**                                                                      **                                                                     
**                    Convertidor de nombres                            **                                                                      
**                                                                      **                                                                      
**                                                                      **
*************************************************************************/

//******  Includes  ******************************************************


//******  Variables  *****************************************************
int num = 64;    // variable definida

//******  Setup  *********************************************************                                                                      
void setup() {
 Serial.begin(9600); // set up Serial library at 9600 bps
Serial.println(" Different formats for the same number: ");
Serial.write(num);
Serial.println();
Serial.println(num);
Serial.println(num,DEC);    // converteix el nombre de la variable en llenguatge decimal 
Serial.println(num,BIN);    //   "                                                  "
Serial.println(num,HEX);    //   "                                                  "
Serial.println(num,OCT);    //   "                                                  "

}

//******  Loop  **********************************************************
void loop() {
 
}






