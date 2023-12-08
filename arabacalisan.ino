#include <SoftwareSerial.h>

SoftwareSerial bluetoothSerial(0,1);
String veri;

int hiz=150;


const int in1=8;
const int in2=9;
const int in3=10;
const int in4=11;
const int enA=6;
const int enB=5;

void setup() {

  Serial.begin(9600);

  bluetoothSerial.begin(9600);
  bluetoothSerial.println("merhabaBluetooth");


  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(enA,OUTPUT);
  pinMode(enB,OUTPUT);

}

void loop() {

  

  while(Serial.available()){
    delay(40);
    char c=Serial.read();
    veri+=c;
    //Serial.print(veri);
  }
  Serial.print(veri);
  if(veri=="F"){
    ileri();
    
  }
  else if(veri=="B"){
    geri();
  }
  else if(veri=="R"){
    sag();
  }
  else if(veri=="S"){
    dur();
  }
  if(veri=="L"){
    sol();
  }




  if(veri=="1"){
    hiz=80;
    ileri();
  }
    if(veri=="2"){
    hiz=100;
    ileri();
  }
    if(veri=="3"){
    hiz=120;
    ileri();
  }
    if(veri=="4"){
    hiz=150;
    ileri();
  }
    if(veri=="5"){
    hiz=180;
    ileri();
  }
    if(veri=="6"){
    hiz=200;
    ileri();
  }
    if(veri=="7"){
    hiz=210;
    ileri();
  }
    if(veri=="8"){
    hiz=220;
    ileri();
  }
    if(veri=="9"){
    hiz=240;
    ileri();
  }
    if(veri=="q"){
    hiz=255;
    ileri();
  }


  veri="";
}



void deneme(){
    analogWrite(enA, 80);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);



 //   analogWrite(enB, 255);
 // digitalWrite(in4,HIGH);
 // digitalWrite(in3,LOW);
}

void ileri(){
   analogWrite(enA, hiz);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);

  delay(50);

    digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
}
void geri(){
  analogWrite(enA, 100);
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);

   delay(500);

    digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
}
void fren(){
  analogWrite(enA, 255);
  analogWrite(enB, 255);
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
}

void sol(){
  analogWrite(enB, 255);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);

  delay(100);

  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  
}
void sag(){
  analogWrite(enB, 255);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);

   delay(100);

  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
}
void orta(){
  analogWrite(enB, 255);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
}
void dur(){
  analogWrite(enA, 255);
  analogWrite(enB, 255);
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
}
