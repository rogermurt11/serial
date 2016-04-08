/*************************************************************************
**                                                                      **                                                                     
**                    CONTROL ESTRUCTURE 3                              **                                                                      
**                                                                      **                                                                      
**                                                                      **
*************************************************************************/

//******  Includes  ******************************************************


//******  Variables  *****************************************************
int tempAigua = 95;

//******  Setup  *********************************************************                                                                      
void setup() {
 // put your setup code here, to run once:
Serial.begin (9600); 

if  (tempAigua  <90)  // si tempAigu és més petit de 90 escriu "Aigua encara no vull"
{
Serial.print ("Aigua encara no vull"); 
}
 else if ((tempAigua >=90) && (tempAigua <100))  // si no compleix la etapa anterior i comples que tempAigua estigui entre 90 i 100 escriu "Aigua apunt de bullir" 
{
Serial.print ("Aigua a punt de bullir");
}
else if  (tempAigua == 100)      // si encara no compleix ninguna de les etapes anteriors i el valor de tempAigua és 100, escriu "Aigua a 100ºC
{
Serial.print ("Aigua a 100Cº"); 
}
else if (tempAigua >100)   // per ultim, si el valor de tempAigua és superior a 100, escriu "Aigua bullint" 
{
Serial.print ("Aigua bullint");
}
} 

//******  Loop  **********************************************************
void loop() {
 
}
