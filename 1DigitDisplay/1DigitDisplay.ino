/*
  Project: 1-digit 7-Segment Display module (common cathode)
  Function: You should now see the 7-segment display cycle from 0 to J
*/
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
}

void loop()
{
  number0();//display 0 to the 7-segment
  delay(timeDelay);//wait for a second
  number1();//display 1 to the 7-segment
  delay(timeDelay);//wait for a second
  number2();//display 2 to the 7-segment
  delay(timeDelay); //wait for a second
  number3();//display 3 to the 7-segment
  delay(timeDelay); //wait for a second
  number4();//display 4 to the 7-segment
  delay(timeDelay); //wait for a second
  number5();//display 5 to the 7-segment
  delay(timeDelay); //wait for a second
  number6();//display 6 to the 7-segment
  delay(timeDelay); //wait for a second
  number7();//display 7 to the 7-segment
  delay(timeDelay); //wait for a second
  number8();//display 8 to the 7-segment
  delay(timeDelay); //wait for a second
  number9();//display 9 to the 7-segment
  delay(timeDelay); //wait for a second
  letterA();//display A to the 7-segment
  delay(timeDelay); //wait for a second
  letterb();//display b to the 7-segment
  delay(timeDelay); //wait for a second
  letterC();//display C to the 7-segment
  delay(timeDelay); //wait for a second
  letterd();//display d to the 7-segment
  delay(timeDelay); //wait for a second
  letterE();//display E to the 7-segment
  delay(timeDelay); //wait for a second
  letterF();//display F to the 7-segment
  delay(timeDelay); //wait for a second
  letterG();//display G to the 7-segment
  delay(timeDelay); //wait for a second
  letterH();//display H to the 7-segment
  delay(timeDelay); //wait for a second
  letterI();//display I to the 7-segment
  delay(timeDelay); //wait for a second
  letterJ();//display J to the 7-segment
  delay(timeDelay); //wait for a second
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
