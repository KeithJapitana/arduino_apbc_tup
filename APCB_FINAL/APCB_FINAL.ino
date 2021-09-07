#include <VarSpeedServo.h>
VarSpeedServo myservo;
#include <dht.h>
#define dataPin 50 
dht DHT;

int TH = 26;
int lumi = 80;
int buttonState = 0;

const int buzzer = 11;
const int ldr = 53;
const int buttonPin = 12;    
const int red =  42;
const int green = 38;
const int white =  40;

int a = 6 ;
int b = 7 ;
int c = 8 ;

int uv = 2;
int led = 13;
void setup() {

  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(white, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
   
  pinMode(buttonPin, INPUT);
  pinMode(uv, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(led, OUTPUT);  
   myservo.attach(10);
     digitalWrite (green,LOW);
 digitalWrite (red,LOW);
 digitalWrite (white,LOW);
  
  digitalWrite(uv, HIGH);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(led, LOW);
      myservo.write(15,20,true);
                   delay (1000);
}

void loop(){
   int LDR = analogRead(A15);
   int readData = DHT.read11(dataPin); 
   float t = DHT.temperature;
   float h = DHT.humidity;
   Serial.println(t);
   delay(200);

  
  buttonState = digitalRead(buttonPin);
  digitalWrite (green,HIGH);
 digitalWrite (red,LOW);
 digitalWrite (white,LOW);

if (buttonState == HIGH)
{
   if(DHT.temperature >= TH){ //DHT TEMP TRUE 
    if(LDR <= lumi){ // IF cover is closed execute the Process
     digitalWrite (green,LOW);
 digitalWrite (red,LOW);
 digitalWrite (white,HIGH);       
  digitalWrite(led, LOW);
  digitalWrite(uv, LOW);
         delay(600000);
  digitalWrite(uv, HIGH);
         
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
        delay(1000);    //FORWARD


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
       delay(30000);     //DEVELOPING


  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
       delay(30000);    //DEVELOPING 2


  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
       delay(60000);    //DEVELOPING 3 


  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
       delay(30000);    //DEVELOPING 4




  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
       delay(60000);    //DEVELOPING 5

 digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
       delay(60000);    //DEVELOPING 6

  
         digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
       delay(60000);    //DEVELOPING 7

 digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
       delay(60000);    //DEVELOPING 8

         digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
       delay(60000);    //DEVELOPING 9

 digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
       delay(60000);    //DEVELOPING 10




              digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
       delay(60000);    //DEVELOPING 11

 digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
       delay(60000);    //DEVELOPING 12

  

  
  
  
  
  
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY 
   
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
      delay(3000);

 // etch ta
  digitalWrite (green,LOW);
 digitalWrite (red,HIGH);
 digitalWrite (white,LOW);
myservo.write(210,20);
delay (5000);
digitalWrite (led,HIGH);
delay (3000);
digitalWrite (led,LOW);
digitalWrite(a, LOW);  
digitalWrite(b, LOW);
digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
       delay(60000);     //etching 1


  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
       delay(30000);    //etching 2


  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
       delay(90000);    //etching  3 


  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
       delay(240000);    //etching 4




        digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
       delay(80000);    //etching 5

 digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
       delay(120000);    //ETCHING 6

//etching 2nd stage
 

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
       delay(30000);    //ETCHING 7


  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
       delay(60000);    //ETCHING 8 


  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
       delay(30000);    //ETCHING 9




        digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
       delay(60000);    //ETCHING 10

 digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY
  digitalWrite(c, HIGH);
  delay (100);


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 
  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY

  digitalWrite(c, HIGH);
  delay (100);
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(c, HIGH);
  delay (100);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
       delay(60000);    //ETCHING 11

       

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY 




 digitalWrite(c,  HIGH);
 delay (30000);






  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
      delay(500);     //BACK TO ORIGIN





  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
      delay(2000);  //BACK TO START LATCH */


   myservo.write(15,20);
                   delay (3000);

  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
      delay(2000);  //BACK TO START LATCH */

  digitalWrite (green,HIGH);
 digitalWrite (red,LOW);
 digitalWrite (white,LOW);

tone(buzzer,1000);
delay(5000);
noTone(buzzer);



      
      
    }
    if(LDR >= lumi){ // if cover is Open

       //1ST buzzer
      tone(buzzer,1000);
      delay(500);
      noTone(buzzer);
      delay(500);
      //2ND
      tone(buzzer,1000);
      delay(500);
      noTone(buzzer);
      delay(500);
      
      
    }
    else{ //else for LDR
      
    }
    
   }
   

   if(DHT.temperature <= TH) //DHT TEMP FALSE
    { //1ST buzzer
      tone(buzzer,1000);
      delay(500);
      noTone(buzzer);
      delay(500);
      //2ND
      tone(buzzer,1000);
      delay(500);
      noTone(buzzer);
      delay(500);
      //3RD
      tone(buzzer,1000);
      delay(500);
      noTone(buzzer);
      delay(500);
      //4TH
      tone(buzzer,1000);
      delay(500);
      noTone(buzzer);
      delay(500);
    }
    else{ //ELSE FOR DHT
      
      
      
    }

   
   
}
else{
  
}
}
