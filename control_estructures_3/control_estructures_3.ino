

/*************************************************************************
**                                                                      **                                                                     
**                    Engegada aturada d'un LED                         **                                                                      
**                                                                      **                                                                      
**                                                                      **
*************************************************************************/

//******  Includes  ******************************************************


//******  Variables  *****************************************************


//******  Setup  *********************************************************                                                                      

int tempAigua = 95;

void setup() 
{
  // put your setup code here, to run once:
Serial.begin (9600); 

if  (tempAigua  <90) 
{
Serial.print ("Aigua encara no vull"); 
}
 else if ((tempAigua >=90) && (tempAigua <100))
{
Serial.print ("Aigua a punt de bullir");
}
else if  (tempAigua == 100)
{
Serial.print ("Aigua a 100Cº"); 
}
else if (tempAigua >100)
{
Serial.print ("Aigua bullint");
}
}


//******  Loop  **********************************************************
void loop() 
{
 
}
