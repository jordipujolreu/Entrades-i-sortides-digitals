/**********************************************************************************
**                                                                               **
**                      Entrades i sortides digitals                             **
**                          Nom del programa                                     **
**  NOM : Jordi Pujlreu Sala                                   DATA: 17/04/17    **
**********************************************************************************/
void setup() {                
  // initialize the digital pin as an output.
  pinMode(0, OUTPUT); 
  pinMode(1, OUTPUT); 
  pinMode(2, OUTPUT); 
  pinMode(3, OUTPUT); 
  pinMode(4, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT); 
  pinMode(7, OUTPUT); 
  pinMode(8, OUTPUT); 
  pinMode(9, OUTPUT);  // Level 1
  pinMode(10, OUTPUT); // Level 2
  pinMode(11, OUTPUT); // Level 3

} 

void loop() {
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
 
  for (int i=0; i <= 3; i++)  // run loop 4 times
  {
  // all on
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
    delay(500);

  // all off
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
    delay(500);
  }
  
// wipe
for (int i=0; i <= 5; i++)  // run loop 6 times
  {
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
    delay(200);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
    delay(200);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
    delay(200);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
    delay(200);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW); 
  }
  
// rotate
for (int i=0; i <= 5; i++)  // run loop 6 times
  {
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
    delay(100);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(6, HIGH);
    delay(100);
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(7, HIGH);
    delay(100);
  digitalWrite(1, LOW);
  digitalWrite(7, LOW);
  digitalWrite(0, HIGH);
  digitalWrite(8, HIGH);
    delay(100);
  digitalWrite(0, LOW);
  digitalWrite(8, LOW);
  }
digitalWrite(4, LOW);
delay(1000);

// sequential

byte pin[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
// above array of 9
  {
  for (int i=0; i <= 3; i++)  // run loop 4 times
    {
    for(int i=0; i<=8; i++) // loop equals number
      { // of values in array - 1
      digitalWrite(pin[i], HIGH); // write index value
      delay(100); // pause 200ms
      digitalWrite(pin[i], LOW); // write index value
      }
    }
  }

 // all on
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
    delay(500);

  // all off
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
    delay(500);

// random

  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);

  for (int i=0; i <= 50; i++)  // run loop 50 times
    {
    int randNumber;
    int randLevel;
    { 
      randNumber = random(0,8);
      randLevel = random(9,11);
      digitalWrite(randNumber, HIGH); // write index value
      digitalWrite(randLevel, HIGH); // write index value
        delay(100); // pause 100ms
      digitalWrite(randNumber, LOW); // write index value
      digitalWrite(randLevel, LOW); // write index value
        delay(10);
      }
    }

// squares

  digitalWrite(9, HIGH); // bottom layer on
  digitalWrite(10, HIGH); // middle layer on
  digitalWrite(11, HIGH); // top layer on
 

for (int i=0; i <= 2; i++)  // run loop 2 times
  {
  digitalWrite(11, LOW); // top layer off
  digitalWrite(9, HIGH); // bottom layer on
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
    delay(200);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
    delay(200);
  digitalWrite(3, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(8, HIGH);
    delay(200);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
    delay(200);
  digitalWrite(11, HIGH); // top layer on
  digitalWrite(9, LOW); // bottom layer off
  
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);

  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
    delay(200);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
    delay(200);
  digitalWrite(3, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(8, HIGH);
    delay(200);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
    delay(200);

 }

  digitalWrite(9, HIGH); // turn bottom layer on

// all off
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
    delay(100);

// walls
for (int i=0; i <= 4; i++)  // run loop 4 times
  {  
  digitalWrite(5, LOW);
  digitalWrite(8, LOW);

  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
    delay(300);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
    delay(300);
  digitalWrite(3, LOW);
  digitalWrite(0, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
    delay(300);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
    delay(300);
  }

  // all on
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
    delay(500);

  // all off
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
    delay(500);
  
  
  // trampoline
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  
  for (int i=0; i <= 5; i++)  // run loop 5 times
  { 
  digitalWrite(11, HIGH);
    delay(100);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
    delay(100);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
    delay(100);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
    delay(100);
  digitalWrite(10, LOW);
  }

// all off
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
    delay(500);
  
// spiral down

byte pins[] = {0, 1, 2, 5, 8, 7, 6, 3};
// above array of 8
  {
  for (int i=0; i <= 3; i++)  // run loop 3 times
    {
    byte level[] = {11, 10, 9};
      for(int i=0; i<=2; i++) // loop equals number
        { // of values in array
        digitalWrite(level[i], HIGH); // write index value
        
        for(int i=0; i<=7; i++) // loop equals number
          { // of values in array
          digitalWrite(pins[i], HIGH); // write index value
            delay(50); // pause 200ms
          digitalWrite(pins[i], LOW); // write index value
          }
        digitalWrite(level[i], LOW); // write index value
        
        }
    }
  }

// explode
for (int i=0; i <= 3; i++)  // run loop 5 times
 { 
 digitalWrite(9, LOW);
 digitalWrite(10, HIGH);
 digitalWrite(11, LOW);
 
 digitalWrite(4, HIGH);
   delay(500); 
 digitalWrite(1, HIGH);
 digitalWrite(3, HIGH);
 digitalWrite(5, HIGH);
 digitalWrite(7, HIGH);
   delay(200);
 digitalWrite(9, HIGH);
 digitalWrite(11, HIGH);
   delay(200);
 digitalWrite(0, HIGH);
 digitalWrite(2, HIGH);
 digitalWrite(6, HIGH);
 digitalWrite(8, HIGH);
   delay(500);
  // all off
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  }


// growing boxes
for (int i=0; i <= 3; i++)  // run loop 5 times
 { 
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
    delay(500);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  
  digitalWrite(4, LOW);
  digitalWrite(1, LOW);
  digitalWrite(3, LOW);
  
  digitalWrite(11, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
    delay(500);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  } 


}

