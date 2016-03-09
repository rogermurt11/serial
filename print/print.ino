int a = 55;

void setup() {
  // put your setup code here, to run once:
Serial.begin (9600);
Serial.println ("ASCII Table ~ Character Map");

}

void loop() {
  // put your main code here, to run repeatedly:

Serial.write (a);

Serial.print ( ",dec :");
Serial.print(a);
}
