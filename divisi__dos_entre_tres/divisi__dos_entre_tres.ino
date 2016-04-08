/*************************************************************************
**                                                                      **                                                                     
**                    DIVISIÓ DOS ENTRE TRES                            **                                                                      
**                                                                      **                                                                      
**                                                                      **
*************************************************************************/

//******  Includes  ******************************************************


//******  Variables  *****************************************************
int a = 3.0;   // posem 3.0 perqué a l'hora de fer la divició, el nombre final també estigui en nombres decimals
int b = 2.0;   //  "                                                                                 "
float c;

//******  Setup  *********************************************************                                                                      
void setup() {
  // put your setup code here, to run once:
Serial.begin (9600);

Serial.println ( " tres entre dos es igual a ");    // text que volem que ens escrigui 

Serial.print (" a / b = ");    // diem que volem dividir la variable a entre la b
Serial.println ( (float) a / b );  // com que el resultat és un nombre decimal, definim float perqué el resultat sigui decimal, si no fesim això en escriuria només el nombre enter. 
}

//******  Loop  **********************************************************
void loop() {
  // put your main code here, to run repeatedly:

}
