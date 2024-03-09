#include "BluetoothSerial.h";
BluetoothSerial BT;
char input;
int Buzzer = 16;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  BT.begin("BT1:Galaxy M11");
  Serial.println("The device started,now you can pair it with biuetooth");
  pinMode(Buzzer,OUTPUT);
  
  }

void loop() {
  // put your main code here, to run repeatedly:
  if(BT.available()>0)
  {
    input = BT.read();
    Serial.println(input);
    if(input == '1')
    {
      digitalWrite(Buzzer,HIGH);
    }
    if(input == '0')
   {
    digitalWrite(Buzzer,LOW);
   }
  }

}
