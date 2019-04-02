#include <Keypad.h>
int led1 = 2, led5 = 6, led6=7, led7 = 8, led8 = 9, led9 = 10;
int led2 = 3, led10 = 11, led11 = 12, led12 = 13, led13 = 14;
int led3 = 4, led14 = 15, led15 = 16, led16 = 17, led17 = 18;
int led4 = 5, led18 = 19, led19 = 27, led20 = 28, led21 = 22;
int led22 = 23, led23 = 24, led24 = 25, led25 = 26;

const byte numRows= 4;
const byte numCols= 4;
char keymap[numRows][numCols]= { {'1', '2', '3', 'A'},

{'4', '5', '6', 'B'},

{'7', '8', '9', 'C'},

{'*', '0', '#', 'D'} };

byte rowPins[numRows] = {A0,A1,A2,A3}; //Rows 0 to 3
byte colPins[numCols]= {A4,A5,A6,A7}; //Columns 0 to 3

//initializes an instance of the Keypad class

Keypad myKeypad= Keypad(makeKeymap(keymap), rowPins, colPins, numRows, numCols);

void setup()
{
  Serial.begin(9600);
  pinMode(led1, OUTPUT) ,pinMode(led2, OUTPUT) ,pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT) ,pinMode(led5, OUTPUT) ,pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT) ,pinMode(led8, OUTPUT) ,pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT) ,pinMode(led11, OUTPUT) ,pinMode(led12, OUTPUT);
  pinMode(led13, OUTPUT) ,pinMode(led14, OUTPUT) ,pinMode(led15, OUTPUT);
  pinMode(led16, OUTPUT) ,pinMode(led17, OUTPUT) ,pinMode(led18, OUTPUT);
  pinMode(led19, OUTPUT) ,pinMode(led20, OUTPUT), pinMode(led21, OUTPUT), pinMode(led22, OUTPUT);
  pinMode(led23, OUTPUT), pinMode(led24, OUTPUT), pinMode(led25, OUTPUT);
}
long num=0, bin;
class PalindromicPrime
{
  public:
  void getnumber();
  void i();
  void a();
  void u();
  void ba();
  void ka();
  void da();
  void ga();
  void ha();
  long prime(long x);
  long binary(long x);
  long reverse(long x);
  int count=0;
  int rem, base;
  long rev;
};

void loop() {

  PalindromicPrime access;
  access.getnumber();
  access.prime(num);
  if(access.binary(num)==access.reverse(bin))
    {
    access.a();
    access.i();
    access.u();
    access.ba();
    access.ka();
    access.da();
    access.ga();
    access.ha();

      

  }
  else
  {
    

   
  }
}
void PalindromicPrime::a()
   {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, HIGH);
    digitalWrite(led11, HIGH);
    digitalWrite(led12, HIGH);
    digitalWrite(led17, HIGH);
    digitalWrite(led22, HIGH);
    digitalWrite(led23, HIGH);
    digitalWrite(led24, HIGH);
    digitalWrite(led25, HIGH);
    digitalWrite(led20, HIGH);
    digitalWrite(led15, HIGH);
    delay(10000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led11, LOW);
    digitalWrite(led12, LOW);
    digitalWrite(led17, LOW);
    digitalWrite(led22, LOW);
    digitalWrite(led23, LOW);
    digitalWrite(led24, LOW);
    digitalWrite(led25, LOW);
    digitalWrite(led20, LOW);
    digitalWrite(led15, LOW);
    delay(2000);
   }
void PalindromicPrime::i()
{    
digitalWrite(led6,  HIGH);
digitalWrite(led7,  HIGH);
digitalWrite(led8,  HIGH);
digitalWrite(led9,  HIGH);
digitalWrite(led10,  HIGH);
digitalWrite(led21,  HIGH);
digitalWrite(led17,  HIGH);
digitalWrite(led12,  HIGH);
digitalWrite(led18,  HIGH);
digitalWrite(led14,  HIGH);
digitalWrite(led19,  HIGH);
digitalWrite(led24,  HIGH);
digitalWrite(led22, HIGH);
digitalWrite(led25, HIGH);
delay(10000);
digitalWrite(led6,  LOW);
digitalWrite(led7,  LOW);
digitalWrite(led8,  LOW);
digitalWrite(led9,  LOW);
digitalWrite(led10,  LOW);
digitalWrite(led21,  LOW);
digitalWrite(led17,  LOW);
digitalWrite(led12,  LOW);
digitalWrite(led18,  LOW);
digitalWrite(led14,  LOW);
digitalWrite(led19,  LOW);
digitalWrite(led24,  LOW);
digitalWrite(led22, LOW);
digitalWrite(led25, LOW);
delay(2000);
}    
void PalindromicPrime::u()
{
 digitalWrite(led1,  HIGH);
  digitalWrite(led2,  HIGH);
  digitalWrite(led3,  HIGH);
  digitalWrite(led4,  HIGH);
  digitalWrite(led5,  HIGH);
  digitalWrite(led10,  HIGH);
  digitalWrite(led15,  HIGH);
    digitalWrite(led14,  HIGH);
  digitalWrite(led13,  HIGH);
  digitalWrite(led20,  HIGH);
  digitalWrite(led25,  HIGH);
  digitalWrite(led24,  HIGH);
  digitalWrite(led23,  HIGH);
  digitalWrite(led22,  HIGH);
  digitalWrite(led21,  HIGH);
  delay(10000);
  digitalWrite(led1,  LOW);
  digitalWrite(led2,  LOW);
  digitalWrite(led3,  LOW);
  digitalWrite(led4,  LOW);
  digitalWrite(led5,  LOW);
  digitalWrite(led10,  LOW);
  digitalWrite(led15,  LOW);
  digitalWrite(led13,  LOW);
  digitalWrite(led20,  LOW);
  digitalWrite(led25,  LOW);
  digitalWrite(led24,  LOW);
  digitalWrite(led23,  LOW);
  digitalWrite(led22,  LOW);
  digitalWrite(led21,  LOW);
    digitalWrite(led14,  LOW);
  delay(2000);
}
void PalindromicPrime::ba()
{
  digitalWrite(led3,  HIGH);
  digitalWrite(led7,  HIGH);
  digitalWrite(led11,  HIGH);
  digitalWrite(led9,  HIGH);
  digitalWrite(led15,  HIGH);
  digitalWrite(led16,  HIGH);
  digitalWrite(led21,  HIGH);
  digitalWrite(led22,  HIGH);
  digitalWrite(led18,  HIGH);
  digitalWrite(led24,  HIGH);
  digitalWrite(led25,  HIGH);
  digitalWrite(led20,  HIGH);
  delay(10000);
  digitalWrite(led3,  LOW);
  digitalWrite(led7,  LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led9,  LOW);
  digitalWrite(led15,  LOW);
  digitalWrite(led16,  LOW);
  digitalWrite(led21,  LOW);
  digitalWrite(led22,  LOW);
  digitalWrite(led18,  LOW);
  digitalWrite(led24,  LOW);
  digitalWrite(led25,  LOW);
  digitalWrite(led20,  LOW);
  delay(2000);
}
void PalindromicPrime::ka()
{
  digitalWrite(led5,  HIGH);
  digitalWrite(led7,  HIGH);
  digitalWrite(led8,  HIGH);
  digitalWrite(led9,  HIGH);
  digitalWrite(led11,  HIGH);
  digitalWrite(led13,  HIGH);
  digitalWrite(led17,  HIGH);
  digitalWrite(led18,  HIGH);
  digitalWrite(led19,  HIGH);
  digitalWrite(led15,  HIGH);
  digitalWrite(led21,  HIGH);
  delay(10000);
  digitalWrite(led5,  LOW);
  digitalWrite(led7,  LOW);
  digitalWrite(led8,  LOW);
  digitalWrite(led9,  LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led13, LOW);
  digitalWrite(led17,  LOW);
  digitalWrite(led18,  LOW);
  digitalWrite(led19,  LOW);
  digitalWrite(led15,  LOW);
  digitalWrite(led21,  LOW);
  delay(2000);
}
void PalindromicPrime::da()
{
   digitalWrite(led1,  HIGH);
  digitalWrite(led2,  HIGH);
  digitalWrite(led3,  HIGH);
  digitalWrite(led4,  HIGH);
  digitalWrite(led5,  HIGH);
  digitalWrite(led7,  HIGH);
  digitalWrite(led12,  HIGH);
  digitalWrite(led17,  HIGH);
  digitalWrite(led22,  HIGH);
  digitalWrite(led23,  HIGH);
  digitalWrite(led24,  HIGH);
  digitalWrite(led25,  HIGH);
  delay(10000);
  digitalWrite(led1,  LOW);
  digitalWrite(led2,  LOW);
  digitalWrite(led3,  LOW);
  digitalWrite(led4,  LOW);
  digitalWrite(led5,  LOW);
  digitalWrite(led7,  LOW);
  digitalWrite(led12,  LOW);
  digitalWrite(led17,  LOW);
  digitalWrite(led22,  LOW);
  digitalWrite(led23,  LOW);
  digitalWrite(led24,  LOW);
  digitalWrite(led25,  LOW);
  delay(2000);
}
void PalindromicPrime::ga()
{
  digitalWrite(led1,  HIGH);
  digitalWrite(led2,  HIGH);
  digitalWrite(led3,  HIGH);
  digitalWrite(led8,  HIGH);
  digitalWrite(led9,  HIGH);
  digitalWrite(led10,  HIGH);
  digitalWrite(led11,  HIGH);
  digitalWrite(led12,  HIGH);
  digitalWrite(led13,  HIGH);
  digitalWrite(led15,  HIGH);
  digitalWrite(led20,  HIGH);
  digitalWrite(led18,  HIGH);
  digitalWrite(led13,  HIGH);
  digitalWrite(led21,  HIGH);
  digitalWrite(led22,  HIGH);
  digitalWrite(led23,  HIGH);
  delay(10000);
  digitalWrite(led1,  LOW);
  digitalWrite(led2,   LOW);
  digitalWrite(led3,  LOW);
  digitalWrite(led8,  LOW);
  digitalWrite(led9,  LOW);
  digitalWrite(led10,  LOW);
  digitalWrite(led11,  LOW);
  digitalWrite(led12,  LOW);
  digitalWrite(led13,  LOW);
  digitalWrite(led15,  LOW);
  digitalWrite(led20,  LOW);
  digitalWrite(led18,  LOW);
  digitalWrite(led13,  LOW);
  digitalWrite(led21,  LOW);
  digitalWrite(led22,  LOW);
  digitalWrite(led23,  LOW);
  delay(2000);
  
  
}
void PalindromicPrime::ha()
{
   digitalWrite(led16,  HIGH);
   digitalWrite(led12,  HIGH);
   digitalWrite(led13,  HIGH);
   digitalWrite(led14,  HIGH);
   digitalWrite(led10,  HIGH);
   delay(10000);
   digitalWrite(led16,  LOW);
   digitalWrite(led12,  LOW);
   digitalWrite(led13,  LOW);
   digitalWrite(led14,  LOW);
   digitalWrite(led10,  LOW);
   delay(2000);
}
void PalindromicPrime::getnumber()
{ 

char key = keypad.getKey(); 
if(key =='0'){  
Serial.println(key);
digitalWrite(led25, HIGH);
num=(num*10)+0; 

}

if(key=='1'){ 
Serial.println(key); 
digitalWrite(led1,HIGH); 
num=(num*10)+1; 

 } 
if(key=='2'){ 
Serial.println(key); 
digitalWrite(led2,HIGH);
num=(num*10)+2; 

} 
if(key=='3'){ 
Serial.println(key);
digitalWrite(led3,HIGH); 
num=(num*10)+3; 

} 
if(key=='4'){ 
Serial.println(key); 
digitalWrite(led4,HIGH); 
num=(num*10)+4; 

} 
if(key=='5'){ 
Serial.println(key); 
digitalWrite(led5,HIGH); 
num=(num*10)+5; 

}
if(key=='6'){ 
Serial.println(key);
num=(num*10)+6; 
digitalWrite(led6, HIGH);
 
} 
if(key=='7'){ 
Serial.println(key); 
num=(num*10)+7; 
digitalWrite(led7, HIGH);

} 
if(key=='8'){ 
Serial.println(key); 
num=(num*10)+8; 
digitalWrite(led8, HIGH);

} 
if(key=='9'){
Serial.println(key); 
num=(num*10)+9; 
digitalWrite(led9, HIGH);

}
if(key=='A')
{ 
Serial.println(num); 

}
if(key=='C'){ 
Serial.println("INVALID");


}
if(key=='D'){ 
Serial.println("INVALID");
Serial.println(key);

}
if(key=='*'){ 
Serial.println(key);
}
if(key=='#'){ 
Serial.println(key); 
}
}
    
long PalindromicPrime::prime(long num1)
{
  PalindromicPrime access;
  for(int j=2; j<=num1; j++)
    {
      if(num1%j==0)
        {
          count++; 
        }
    }
   if(count<2)
     {
      access.binary(num);
     }
   else
    {
          Serial.println("COMPOSITE");
       digitalWrite(led2, HIGH);
       digitalWrite(led3, HIGH);
       digitalWrite(led4, HIGH);
       digitalWrite(led5, HIGH);  
       digitalWrite(led6, HIGH);
       digitalWrite(led11, HIGH);
       digitalWrite(led16, HIGH);
       digitalWrite(led25, HIGH);
       digitalWrite(led22, HIGH);
       digitalWrite(led23, HIGH);
       digitalWrite(led24, HIGH);
       delay(2000);
       digitalWrite(led2, LOW);
       digitalWrite(led3, LOW);
       digitalWrite(led4, LOW);
       digitalWrite(led5, LOW);  
       digitalWrite(led6, LOW);
       digitalWrite(led11, LOW);
       digitalWrite(led16, LOW);
       digitalWrite(led25, LOW);
       digitalWrite(led22, LOW);
       digitalWrite(led23, LOW);
       digitalWrite(led24, LOW);
       delay(2000);
    }
}
long PalindromicPrime::binary(long num2)
{
  bin=0;
  rem=0;
  base=1;
  while(num2!=0)
    {
      rem=num2%2;
      bin=bin+rem*base;
      base=base*10;
      num2=num2/2;
    }
   return bin;
}
long PalindromicPrime::reverse(long num3)
{
  rev=0;
  while(num3!=0)
    {
      rev=(rev*10)+num3%10;
      num3=num3/10;
    }
   return rev;
}
