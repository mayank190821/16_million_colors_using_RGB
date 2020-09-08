const int redPinNumber=11,bluePinNumber=10,greenPinNumber=9;
int i,j,k;

void setup() {
pinMode(redPinNumber,OUTPUT);
pinMode(bluePinNumber,OUTPUT);
pinMode(greenPinNumber,OUTPUT);
}

void loop() {
for(i=0;i<=255;i=i+10)
 {
   for(j=0;j<=255;j=j+10)
   {
    for(k=0;k<=255;k=k+10)
    {
      color(i,j,k);
      delay(10);
    }
   }
 }
}

void color(int redvalue,int bluevalue,int greenvalue)
{
   analogWrite(redPinNumber,redvalue);
   analogWrite(bluePinNumber,bluevalue);
   analogWrite(greenPinNumber,greenvalue);
}
