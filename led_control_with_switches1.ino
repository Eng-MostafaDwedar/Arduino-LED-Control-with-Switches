int green1=11;
int red1=10;
int red2=9; 
int red3=6;
int red4=5; 
int green2=3;
int ss1=7;
int ss2=8;
int read1=0;
int read2=0;
void setup()
{
  pinMode (green1,1);
  pinMode (red1,1);
  pinMode (red2,1); 
  pinMode (red3,1);
  pinMode (red4,1); 
  pinMode (green2,1);
  pinMode(7,0);
  pinMode(8,0);
}

void loop()
{
read1 = digitalRead(ss1);
if(read1==1){
analogWrite(green1,128);
analogWrite(red1,255);
}
else {
analogWrite(green1,0);
analogWrite(red1,0);
}
read2 = digitalRead(ss2);
if(read2==1){
analogWrite(green2,128);
analogWrite(red3,255);
}
else {
analogWrite(green2,0);
analogWrite(red3,0);
}
}