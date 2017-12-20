#include <boarddefs.h>
#include <IRremote.h>
#include <IRremoteInt.h>
#include <ir_Lego_PF_BitStreamEncoder.h>

//***************************************************************
//the pins of 1-digit 7-segment display attached to arduino board digital pins 4 - 11 respectively
const int dp = 4; //dot
const int c = 5;
const int b = 6;
const int a = 7;
const int f = 8;
const int g = 9;
const int e = 10;
const int d = 11;

int RECV_PIN = 3;
IRrecv irrecv(RECV_PIN);
decode_results results;

byte lastNumber = 0;

int timeDelay = 1000;//set the time delay between symbols
//***************************************************************
void setup()
{
  //loop over thisPin from 4 to 11 and set them all to output
  for (int displayPin = 4; displayPin <= 11; displayPin++)
  {
    pinMode(displayPin, OUTPUT);
  }
  digitalWrite(dp, LOW); //turn the dot of the 1-digit 7-segment display module off
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}

void loop()
{
  

  if (irrecv.decode(&results))
  {
    String signal = String(results.value, HEX);
    Serial.println(signal);
    
    if (signal == "9716be3f") {
      lastNumber = 1;
      number1();
    }
    if (signal == "3d9ae3f7") {
      lastNumber = 2;
      number2();
    }
    if (signal == "6182021b") {
      lastNumber = 3;
      number3();
    }
    if (signal == "8c22657b") {
      lastNumber = 4;
      number4();
    }
    if (signal == "488f3cbb") {
      lastNumber = 5;
      number5();
    }
    if (signal == "449e79f") {
      lastNumber = 6;
      number6();
    }
    if (signal == "32c6fdf7") {
      lastNumber = 7;
      number7();
    }
    if (signal == "1bc0157b") {
      lastNumber = 8;
      number8();
    }
    if (signal == "3ec3fc1b") {
      lastNumber = 9;
      number9();
    }
    if (signal == "c101e57b") {
      switch(lastNumber){
        case 9: goto nine;break;
        case 8: goto eight;break;
        case 7: goto seven;break;
        case 6: goto six;break;
        case 5: goto five;break;
        case 4: goto four;break;
        case 3: goto three;break;
        case 2: goto two;break;
        case 1: goto one; break;
      }
      nine:
      number9();
      delay(timeDelay);
      eight:
      number8();
      delay(timeDelay);
      seven:
      number7();
      delay(timeDelay);
      six:
      number6();
      delay(timeDelay);
      five:
      number5();
      delay(timeDelay);
      four:
      number4();
      delay(timeDelay);
      three:
      number3();
      delay(timeDelay);
      two:
      number2();
      delay(timeDelay);
      one:
      number1();
      delay(timeDelay);
      number0();
      delay(timeDelay);
    }
    
    irrecv.resume(); // Receive the next value
  }
  
}

void number0(void) //display 0 to the 7-segment
{
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  
}

void number1(void) //display 1 to the 7-segment
{
  digitalWrite(a, LOW);
  digitalWrite(f, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(e, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  
}
void number2(void) //display 2 to the 7-segment
{
  digitalWrite(a, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  
}
void number3(void) //display 3 to the 7-segment
{
  digitalWrite(a, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  
}
void number4(void) //display 4 to the 7-segment
{
  digitalWrite(a, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  
}
void number5(void) //display 5 to the 7-segment
{ 
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  
}
void number6(void) //display 6 to the 7-segment
{
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  
}
void number7(void) //display 7 to the 7-segment
{
  digitalWrite(a, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(e, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  
}
void number8(void) //display 8 to the 7-segment
{
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  
}
void number9(void) //display 9 to the 7-segment
{
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  
}
//************************************************
void letterA(void) //display A to the 7-segment
{
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  

}
void letterb(void) //display b to the 7-segment
{
  digitalWrite(a, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  
}
void letterC(void) //display C to the 7-segment
{
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(g, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  

}
void letterd(void) //display d to the 7-segment
{
  digitalWrite(a, LOW);
  digitalWrite(f, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
   
}
void letterE(void) //display E to the 7-segment
{
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
   
}
void letterF(void) //display F to the 7-segment
{
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
   
}
void letterG(void) //display G to the 7-segment
{ 
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
    
}
void letterH(void) //display H to the 7-segment
{ 
  digitalWrite(a, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  
}
void letterI(void) //display I to the 7-segment
{ 
  digitalWrite(a, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(g, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
   
}
void letterJ(void) //display J to the 7-segment
{ 
  digitalWrite(a, LOW);
  digitalWrite(f, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(e, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
    
}
