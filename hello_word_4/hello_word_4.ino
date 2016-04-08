/*************************************************************************
**                                                                      **                                                                     
**                           HELLO WORD 4                               **                                                                      
**                                                                      **                                                                      
**                                                                      **
*************************************************************************/

//******  Includes  ******************************************************


//******  Variables  *****************************************************


//******  Setup  *********************************************************                                                                      
void setup() {
Serial.begin(9600); // set up Serial library at 9600 bps
Serial.println("Escull el numero de l'operació que vols realitzar'");     // text que volem que escrigui 
Serial.println (" 1. Comprovar numero de targetes de credit");           // "                 "
Serial.println (" 2. Comprovar numero de compte bancari ");             //  "                 "
Serial.println (" 3. Buscar un digit perdut de targeta de credit ");   //   "                 "
}

//******  Loop  **********************************************************
void loop() // run over and over again
{
// do nothing
}
