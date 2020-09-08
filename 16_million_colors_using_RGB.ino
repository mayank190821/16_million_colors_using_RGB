
int red=11,blue=10,green=9;
int i,j,k;
void setup() {
pinMode(red,OUTPUT);
pinMode(blue,OUTPUT);
pinMode(green,OUTPUT);
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
   analogWrite(red,redvalue);
   analogWrite(blue,bluevalue);
   analogWrite(green,greenvalue);
}
