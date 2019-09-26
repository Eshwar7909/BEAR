int flamesensor =26;
int IRpin = 2; 
int RFD0 = 3;
int RFD1 = 4;
int RFD2 = 5;
int RFD3 = 6;
int pin5 = 7;
int pin6 = 8;    
int pin1 = 9;     
int pin2 = 10;
int pin3 = 11;
int pin4 = 12;     
int pin7 = 48;
int pin8 = 49;
int laser= 50;
int buzzer = 51;
int IRstate = 1;
int sensorValue = 1; 
int RFD0state = 1;
int RFD1state = 1;
int RFD2state = 1;
int RFD3state = 1;
        
void setup()
{
  pinMode(laser, OUTPUT);
  pinMode(pin1, OUTPUT);

  pinMode(pin2, OUTPUT);

   pinMode(pin3, OUTPUT);

  pinMode(pin4, OUTPUT);

  pinMode(pin5, OUTPUT);

  pinMode(pin6, OUTPUT);

  pinMode(pin7, OUTPUT);

  pinMode(pin8, OUTPUT);
   
  pinMode(IRpin, INPUT);
  
  pinMode(RFD0, INPUT);

  pinMode(RFD1, INPUT);
   
  pinMode(RFD2, INPUT);
   
  pinMode(RFD3, INPUT);
  pinMode(buzzer,OUTPUT);
   
}

void loop() 
{
  IRstate = digitalRead(IRpin);

  RFD0state = digitalRead(RFD0);

  RFD1state = digitalRead(RFD1);

  RFD2state = digitalRead(RFD2);

  RFD3state = digitalRead(RFD3);
  
  sensorValue = digitalRead(flamesensor);

if (IRstate == HIGH && RFD0state == HIGH && RFD1state == HIGH && RFD2state == HIGH && RFD3state == HIGH && sensorValue == LOW)

{
digitalWrite(buzzer,HIGH);

delay(1000);

digitalWrite(buzzer,LOW);



}  
  else if (IRstate == HIGH && RFD0state == LOW && RFD1state == HIGH && RFD2state == HIGH && RFD3state == HIGH) 
  {
    
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, HIGH);

    digitalWrite(pin3, LOW);
    digitalWrite(pin4, HIGH);

    digitalWrite(pin5, LOW);
    digitalWrite(pin6, LOW);
     digitalWrite(pin7,LOW);
    digitalWrite(pin8,LOW);
    digitalWrite(buzzer, LOW);

    digitalWrite(laser, LOW);
   digitalWrite(flamesensor,LOW);

  }
   else if (IRstate == LOW && RFD0state == LOW && RFD1state == HIGH && RFD2state == HIGH && RFD3state == HIGH) 
  {
    
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, LOW);
    digitalWrite(pin4, LOW);
    digitalWrite(pin5, LOW);
    digitalWrite(pin6, LOW);
     digitalWrite(pin7,LOW);
    digitalWrite(pin8,LOW);
    digitalWrite(laser, LOW);
   digitalWrite(flamesensor,LOW);
    digitalWrite(buzzer, LOW); 
  }
  
  else if( IRstate == HIGH && RFD0state == HIGH && RFD1state == LOW && RFD2state == HIGH && RFD3state == HIGH) 
  {
    
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, LOW);

    digitalWrite(pin3, HIGH);
    digitalWrite(pin4, LOW);
    
    
    digitalWrite(pin5, LOW);
    digitalWrite(pin6, LOW);
     digitalWrite(pin7,LOW);
    digitalWrite(pin8,LOW);
    digitalWrite(laser, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(flamesensor,LOW);
  }
   
   else if(IRstate == LOW && RFD0state == HIGH && RFD1state == LOW && RFD2state == HIGH && RFD3state == HIGH) 
  {
     digitalWrite(pin1, LOW);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, LOW);
    digitalWrite(pin4, LOW);
    digitalWrite(pin5, LOW);
    digitalWrite(pin6, LOW);
     digitalWrite(pin7,LOW);
    digitalWrite(pin8,LOW);
    digitalWrite(laser, LOW);
    digitalWrite(buzzer, LOW); 
    digitalWrite(flamesensor,LOW);
  }  
  else if(IRstate ==HIGH && RFD0state == HIGH && RFD1state == HIGH && RFD2state == LOW && RFD3state == HIGH) 
  {
    
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, HIGH);

    digitalWrite(pin3, HIGH);
    digitalWrite(pin4, HIGH);
    
    digitalWrite(pin5, LOW);
    digitalWrite(pin6, LOW);
     digitalWrite(pin7,LOW);
    digitalWrite(pin8,LOW);
     digitalWrite(laser, LOW);
     digitalWrite(buzzer, LOW);
     digitalWrite(flamesensor,LOW);
    
  } 
  else if(IRstate ==LOW && RFD0state == HIGH && RFD1state == HIGH && RFD2state == LOW && RFD3state == HIGH) 
  {
     digitalWrite(pin1, LOW);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, LOW);
    digitalWrite(pin4, LOW);
    digitalWrite(pin5, LOW);
    digitalWrite(pin6, LOW);
     digitalWrite(pin7,LOW);
    digitalWrite(pin8,LOW);
    digitalWrite(laser, LOW); 
    digitalWrite(buzzer, LOW);
    digitalWrite(flamesensor,LOW);
  }
  
  else if(IRstate == HIGH && RFD0state == HIGH && RFD1state == HIGH && RFD2state == HIGH && RFD3state == LOW) 
  {
    
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, LOW);
    digitalWrite(pin4, HIGH);
    
   
    digitalWrite(pin5, LOW);
    digitalWrite(pin6, LOW);
     digitalWrite(pin7,LOW);
    digitalWrite(pin8,LOW);
     digitalWrite(laser, LOW);
     digitalWrite(buzzer, LOW);
     digitalWrite(flamesensor,LOW);
  } 
   else if(IRstate ==LOW && RFD0state == HIGH && RFD1state == HIGH && RFD2state == HIGH && RFD3state == LOW) 
  {
     digitalWrite(pin1, LOW);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, LOW);
    digitalWrite(pin4, LOW);
    digitalWrite(pin5, LOW);
    digitalWrite(pin6, LOW);
     digitalWrite(pin7,LOW);
    digitalWrite(pin8,LOW);
    digitalWrite(laser, LOW); 
    digitalWrite(buzzer, LOW);
    digitalWrite(flamesensor,LOW);
  }
 
   else if(IRstate == HIGH&&RFD0state == LOW && RFD1state == LOW && RFD2state == HIGH && RFD3state == HIGH) 
  {
    
    digitalWrite(pin5, HIGH);
    digitalWrite(pin6, LOW);

    delay(1000);

    digitalWrite(pin5, HIGH);
    digitalWrite(pin6, HIGH);


    digitalWrite(pin1, LOW);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, LOW);
    digitalWrite(pin4, LOW);
     digitalWrite(pin7,LOW);
    digitalWrite(pin8,LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(laser, LOW);
    digitalWrite(flamesensor,LOW);


    
  } 

  else if(IRstate ==HIGH && RFD0state == HIGH && RFD1state == HIGH && RFD2state == LOW && RFD3state == LOW) 
  {
    
    digitalWrite(pin5, LOW);
    digitalWrite(pin6, HIGH);

    delay(1000);


    digitalWrite(pin5, LOW);
    digitalWrite(pin6, LOW);


    digitalWrite(pin1, LOW);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, LOW);
    digitalWrite(pin4, LOW);
     digitalWrite(pin7,LOW);
    digitalWrite(pin8,LOW);
     digitalWrite(laser, LOW);
     digitalWrite(buzzer, LOW);
     digitalWrite(flamesensor,LOW);
  }
 else if(RFD0state == HIGH && RFD1state == LOW && RFD2state == HIGH && RFD3state == LOW) 
  {
    digitalWrite(laser, HIGH);
    digitalWrite(pin7, HIGH);
    digitalWrite(pin8,LOW);

    delay(1000);


    digitalWrite(pin7,LOW);
    digitalWrite(pin8,LOW);


    digitalWrite(pin1, LOW);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, LOW);
    digitalWrite(pin4, LOW);

    digitalWrite(pin5, LOW);
    digitalWrite(pin6, LOW);
    digitalWrite(laser, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(flamesensor,LOW);
  }   
 else if(RFD0state == LOW && RFD1state == HIGH && RFD2state == LOW && RFD3state == HIGH)
  {
    digitalWrite(laser, HIGH);
    digitalWrite(pin7,LOW);
    digitalWrite(pin8,HIGH);

    delay(1000);


    digitalWrite(pin7,LOW);
    digitalWrite(pin8,LOW);


    digitalWrite(pin1, LOW);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, LOW);
    digitalWrite(pin4, LOW);

    digitalWrite(pin5, LOW);
    digitalWrite(pin6, LOW);
    digitalWrite(laser, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(flamesensor,LOW);
  }
 else if (IRstate ==HIGH && RFD0state == HIGH && RFD1state == HIGH && RFD2state == HIGH && RFD3state == HIGH)
{
   digitalWrite(pin1, LOW);
    digitalWrite(pin2, LOW);

    digitalWrite(pin3, LOW);
    digitalWrite(pin4, LOW);
  digitalWrite(pin7,HIGH);
  digitalWrite(pin8,HIGH);
  digitalWrite(flamesensor,LOW);
  
    digitalWrite(laser, LOW);
    digitalWrite(buzzer, LOW);
}

  }
