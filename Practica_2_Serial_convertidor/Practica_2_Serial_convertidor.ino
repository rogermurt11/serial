/*************************************************************************
**                                                                      **                                                                     
**                     PRACTICA 2 CONVERTIDOR                           **                                                                      
**                                                                      **                                                                      
**                                                                      **
*************************************************************************/

//******  Includes  ******************************************************


//******  Variables  *****************************************************
int drive_gb = 10;
int drive_mb;

//******  Setup  *********************************************************                                                                      
void setup() {
Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Your HD is "); // text a escriure 
  Serial.print(drive_gb);      
 Serial.println(" GB large.");  // text a escriure 

  drive_mb = 1024 * drive_gb;    // convertidor de mb a gb 

  Serial.print("It can store ");  // text a escriure 
  Serial.print(drive_mb); 
  Serial.println(" Megabytes!");  //  // escriu "megabytes"
}

//******  Loop  **********************************************************
void loop()     // we need this to be here even though its empty
{
}


