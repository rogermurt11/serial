int tempAigua = 100;
void setup() // 
{
Serial.begin(9600); // velocitat a la que llegeix el programa (9600 bps)
if ( tempAigua > 100)   // si tempAigua és més gran que 100...)
{
Serial.print("Aigua supera els 100C, esta bullint!");  // si tempAigua és més gran que 100 escriu el text que hi ha entre les cometes 
}
}
void loop() // we need this to be here even though its empty
{
}
