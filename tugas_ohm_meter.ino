int analogPin= 0;
int adc= 0;
int Vin= 5;
float V1= 0;
float V2= 0;
float R1= 100000;
float R2= 0;
float Rt= 0;
float It;
float a= 0;

void setup()
{
Serial.begin(9600);
}

void loop()
{
adc= analogRead(analogPin);
if(adc) 
{
a= adc * Vin;
V2= (a)/1023;
a= (Vin/V2) -1;
R2= R1 * a;
V1=5-V2;
Rt=R1+R2;
It=(5/Rt)*1000;
//It=It*100000;
Serial.println("=========== Ohmmeter =========== ");
Serial.println("======= Using an Arduino  ====== ");
Serial.print("V2: ");
Serial.print(V2); 
Serial.println("  VOLT");
Serial.print("R2: ");
Serial.print(R2);
Serial.println("  OHM");
Serial.print("V1: ");
Serial.print(V1);
Serial.println("  VOLT");
Serial.print("Rt: ");
Serial.print(Rt);
Serial.println("  OHM");
Serial.print("It: ");
Serial.print(It);
Serial.println("  mA");
delay(5000);
}
}
