/*************************************************************************
**                                                                      **                                                                     
**                         CONVERTIDOR LONG                              **                                                                      
**                                                                      **                                                                      
**                                                                      **
*************************************************************************/

//******  Includes  ******************************************************


//******  Variables  *****************************************************
int drive_gb = 100;  // 
long drive_mb;   // s'utilitza per temes d'emmagatzematge 

//******  Setup  *********************************************************                                                                      
void setup() {
 Serial.begin(9600);       //set up Serial library at 9600 bps

  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = drive_gb;
  drive_mb = drive_mb * 1024;     // converteix els gb a mb 

  Serial.print("It can store ");  // text a escriure 
  Serial.print(drive_mb);
  Serial.println(" Megabytes!"); // text a escriure 
}

//******  Loop  **********************************************************
void loop()      //we need this to be here even though its empty
{
}

