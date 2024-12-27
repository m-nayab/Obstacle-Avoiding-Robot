const int lftpin =2;
const int lftpwmpin =6;
const int rgtpin =7;
const int rgtpwmpin = 3;
const int trigpin=12;
const int echopin =10;
int value =0;
int cm=0;

void setup(){
  Serial.begin(9600);
  pinMode(lftpin,OUTPUT);
  pinMode(lftpwmpin,INPUT);
  pinMode(rgtpin,OUTPUT);
  pinMode(rgtpwmpin,OUTPUT);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  digitalWrite(trigpin,LOW);

}
void loop(){
 int i=distance();
// Serial.println(i);
  if(i>0 && i<20){
  backward();
delay(3000);
leftturn();
delay(3000);
rightturn();
delay(3000);
forward();
  }
  else{
     forward();
  }
}
void forward(){
 int val =150;
digitalWrite(rgtpin,0);
analogWrite(rgtpwmpin,val);
digitalWrite(lftpin,0);
analogWrite(lftpwmpin,val);
  delay(1000);

}
void backward(){
 int val =-150;
digitalWrite(rgtpin,1);
analogWrite(rgtpwmpin,val);
digitalWrite(lftpin,1);
analogWrite(lftpwmpin,val);

}
void leftturn(){
int val =150;
digitalWrite(rgtpin,0);
analogWrite(rgtpwmpin,val);
digitalWrite(lftpin,1);
analogWrite(lftpwmpin,val*-1);

}
void rightturn(){
int val =150;
digitalWrite(rgtpin,1);
analogWrite(rgtpwmpin,val*-1);
digitalWrite(lftpin,0);
analogWrite(lftpwmpin,val);

}
int distance(){
 digitalWrite(trigpin,HIGH);
 delayMicroseconds(20);
 digitalWrite(trigpin,LOW);
 value=pulseIn(echopin,HIGH);
 cm=value/58;
 return cm;
}
