
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


char auth[] = "fb390b1f6e7747d2b44e7cfb446cce7d";


char ssid[] = "Razdaan";
char pass[] = "bhardwaj";


int pinin1;
int pinin11;
int pinin2;
int pinin22;
int pinin3;
int pinin33;
int pinin4;
int pinin44;
int pinin5;
int pinin55;
int pinout1 = 0;
int pinout2 = 2;
int pinout3 = 4;
int pinout4 = 5;
int pinout5 = 16;

       
void setup()
{

  Serial.begin(9600);
  Blynk.begin(auth, ssid , pass);

  pinMode(pinout1,OUTPUT);
  pinMode(pinout2,OUTPUT);
  pinMode(pinout3,OUTPUT);
  pinMode(pinout4,OUTPUT);
  pinMode(pinout5,OUTPUT);

  
}




   BLYNK_WRITE(V1) // V5 is the number of Virtual Pin  
   {
              pinin1 = param.asInt();
   }
   BLYNK_WRITE(V2) // V5 is the number of Virtual Pin  
   {
              pinin11 = param.asInt();
   }
   BLYNK_WRITE(V3) // V5 is the number of Virtual Pin  
   {
              pinin2 = param.asInt();
   }
   BLYNK_WRITE(V4) // V5 is the number of Virtual Pin  
   {
              pinin22 = param.asInt();
   }
   BLYNK_WRITE(V5) // V5 is the number of Virtual Pin  
   {
              pinin3 = param.asInt();
   }
   BLYNK_WRITE(V6) // V5 is the number of Virtual Pin  
   {
              pinin33 = param.asInt();
   }
   BLYNK_WRITE(V7) // V5 is the number of Virtual Pin  
   {
              pinin4 = param.asInt();
   }
   BLYNK_WRITE(V8) // V5 is the number of Virtual Pin  
   {
              pinin44 = param.asInt();
   }
   BLYNK_WRITE(V9) // V5 is the number of Virtual Pin  
   {
              pinin5 = param.asInt();
   }
   BLYNK_WRITE(V10) // V5 is the number of Virtual Pin  
   {
              pinin55 = param.asInt();
   }





void loop()
{   
        

//1 11 1
    if((pinin1) == HIGH)
    {
          if(WiFi.status() != WL_CONNECTED && (pinin11) == LOW)
          {
              digitalWrite(pinout1,LOW);
          }
          else if(WiFi.status() == WL_CONNECTED)
          {
              digitalWrite(pinout1,HIGH);
          }
    }
  
    else if((pinin1) == LOW)
    {  
          if((pinin11) == LOW)
          {
              digitalWrite(pinout1,LOW);  
          }
          else if((pinin11) == HIGH)
          {
              digitalWrite(pinout1,HIGH);  
          }
    }

//2 22 2
    if((pinin2) == HIGH)
    {
          if(WiFi.status() != WL_CONNECTED && (pinin22) == LOW)
          {
              digitalWrite(pinout2,LOW);
          }
          else if(WiFi.status() == WL_CONNECTED)
          {
              digitalWrite(pinout2,HIGH);
          }
    }
  
    else if((pinin2) == LOW)
    {  
          if((pinin22) == LOW)
          {
              digitalWrite(pinout2,LOW);  
          }
          else if((pinin22) == HIGH)
          {
              digitalWrite(pinout2,HIGH);  
          }
    }


 //3 33 3
    if((pinin3) == HIGH)
    {
          if(WiFi.status() != WL_CONNECTED && (pinin33) == LOW)
          {
              digitalWrite(pinout3,LOW);
          }
          else if(WiFi.status() == WL_CONNECTED)
          {
              digitalWrite(pinout3,HIGH);
          }
    }
  
    else if((pinin3) == LOW)
    {  
          if((pinin33) == LOW)
          {
              digitalWrite(pinout3,LOW);  
          }
          else if((pinin33) == HIGH)
          {
              digitalWrite(pinout3,HIGH);  
          }
    }



 //4 44 4
    if((pinin4) == HIGH)
    {
          if(WiFi.status() != WL_CONNECTED && (pinin44) == LOW)
          {
              digitalWrite(pinout4,LOW);
          }
          else if(WiFi.status() == WL_CONNECTED)
          {
              digitalWrite(pinout4,HIGH);
          }
    }
  
    else if((pinin4) == LOW)
    {  
          if((pinin44) == LOW)
          {
              digitalWrite(pinout4,LOW);  
          }
          else if((pinin44) == HIGH)
          {
              digitalWrite(pinout4,HIGH);  
          }
    }



 //5 55 5
    if((pinin5) == HIGH)
    {
          if(WiFi.status() != WL_CONNECTED && (pinin55) == LOW)
          {
              digitalWrite(pinout5,LOW);
          }
          else if(WiFi.status() == WL_CONNECTED)
          {
              digitalWrite(pinout5,HIGH);
          }
    }
  
    else if((pinin5) == LOW)
    {  
          if((pinin55) == LOW)
          {
              digitalWrite(pinout5,LOW);  
          }
          else if((pinin55) == HIGH)
          {
              digitalWrite(pinout5,HIGH);  
          }
    }



    
    Blynk.run();



}

