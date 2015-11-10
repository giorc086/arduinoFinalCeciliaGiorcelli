/* Testing MQ-2 GAS sensor with serial monitor
   Suitable for detecting of LPG, i-butane, propane, methane ,alcohol, Hydrogen or smoke
   More info: http://www.ardumotive.com/how-to-use-mq2-gas-sensor-en.html
   Dev: Michalis Vasilakis // Date: 11/6/2015 // www.ardumotive.com                     */

const int gasPin = A0; //GAS sensor output pin to Arduino analog A0 pin

int ledPin1 = 2; //green
int ledPin2 = 3; //green
int ledPin3 = 4; //green
int ledPin4 = 5; //yellow
int ledPin5 = 6; //yellow
int ledPin6 = 7; //red
int sensorValue;


void setup()
{
  Serial.begin(9600); //Initialize serial port - 9600 bps
  pinMode(ledPin1, OUTPUT);  //setting the LED's as outputs
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
}

void loop()
{
  Serial.println(analogRead(gasPin));
  delay(1000); // Print value every 1 sec.
  sensorValue = analogRead(gasPin);

////////////////////////////////////////////////PIN1
  if(sensorValue < 60)
{
  digitalWrite(ledPin1,LOW);
}

if(sensorValue > 61)
{
  digitalWrite(ledPin1, HIGH);
}

////////////////////////////////////////////////PIN2
  if(sensorValue < 70)
{
  digitalWrite(ledPin2,LOW);
}

if(sensorValue > 71)
{
  digitalWrite(ledPin2, HIGH);
}

////////////////////////////////////////////////PIN3
  if(sensorValue < 80)
{
  digitalWrite(ledPin3,LOW);
}

if(sensorValue > 81)
{
  digitalWrite(ledPin3, HIGH);
}

////////////////////////////////////////////////PIN4
  if(sensorValue < 85)
{
  digitalWrite(ledPin4,LOW);
}

if(sensorValue > 86)
{
  digitalWrite(ledPin4, HIGH);
}

////////////////////////////////////////////////PIN5
  if(sensorValue < 90)
{
  digitalWrite(ledPin5,LOW);
}

if(sensorValue > 91)
{
  digitalWrite(ledPin5, HIGH);
}


////////////////////////////////////////////////PIN6
  if(sensorValue < 100)
{
  digitalWrite(ledPin6,LOW);
}

if(sensorValue > 101)
{
  digitalWrite(ledPin6, HIGH);
}
}

