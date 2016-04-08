
int drive_gb = 100;
long drive_mb;
long drive_kb;
long real_drive_mb;
long real_drive_kb;

void setup()               //run once, when the sketch starts
{
  Serial.begin(9600);       //set up Serial library at 9600 bps

  Serial.print ("Your HD is ");
  Serial.print (drive_gb);
  Serial.println (" GB large");
  Serial.print ("In theory, it can store ");
  
  drive_mb = drive_gb;
  drive_mb = drive_mb * 1024; // converteix de mb a gb 
  
  Serial.print (drive_mb);
  Serial.print (" Megabytes,"); // text a escriure 

  drive_kb = drive_gb;
  drive_kb = drive_kb * 1024000;  // converteix de kb a gb 

  Serial.print (drive_kb);
  Serial.println (" Kilobytes."); // text a escriure 

  Serial.print ("But it really only stores ");   // text a escriue 

  real_drive_mb = drive_gb;
  real_drive_mb = real_drive_mb * 1000;  // converteix de mb a gb 

  Serial.print (real_drive_mb);
  Serial.print (" Megabytes,"); // text a escriure 

  real_drive_kb = drive_gb;
  real_drive_kb = real_drive_kb * 1000000;  // converteix de kb a gb 

  Serial.print ( real_drive_kb);
  Serial.println (" Kilobytes.");   // text a escriure 

  Serial.print ("You are missing ");  // text a escriure 


  Serial.print ( "Kilobytes!");   // text a escriure 

  
  
}

void loop()      //we need this to be here even though its empty
{
}















