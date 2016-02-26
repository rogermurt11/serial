void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
}

void loop()                 // run over and over again
{
  Serial.println("Comprovar numero de targeta de crèdit");  // primera frase 
  delay(1000);
  Serial.println("    ");  // no diu res
  delay(1000);
  Serial.println("Comprovar numero de compte bancari "); // segona frase 
  delay(1000);
}

