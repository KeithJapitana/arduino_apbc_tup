#include <VarSpeedServo.h>
VarSpeedServo myservo;

int a = 6 ;
int b = 7 ;
int c = 8 ;
int d = 13 ;
int uv = 2;

void setup() {
  pinMode(uv, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);  
      myservo.attach(10);
      
  digitalWrite(uv, HIGH);
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
      myservo.write(15,20,true);
                   delay (5000);
}

void loop() {
  digitalWrite(uv, LOW);
         delay(480000);
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



  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 


  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY



  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 



  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
       delay(30000);    //DEVELOPING 2


  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY



  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 


  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY



  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 


  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 


  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY



  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 


  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 



  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
       delay(60000);    //DEVELOPING 3 


  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY



  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 


  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY



  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 


  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 


  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY



  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 


  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 



  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
       delay(30000);    //DEVELOPING 4




        digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY



  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 


  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY



  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 


  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 


  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY



  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 


  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 



  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
       delay(60000);    //DEVELOPING 5

 digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY



  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 


  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 

  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY



  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 


  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 


  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY



  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 


  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
       delay(800);      //BALIK GAMAY


  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
       delay(800);     //FORWARD GAMAY 



  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
       delay(60000);    //DEVELOPING 6


       
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
      delay(30000);    //WAIT


  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
      delay(200);     //BACK TO ORIGIN





  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
      delay(2000);  //BACK TO START LATCH
}
