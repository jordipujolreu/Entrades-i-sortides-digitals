/**********************************************************************************
**                                                                               **
**                              Entrades i sortides                              **
**                                                                               **
**  Jordi Pujolreu SALA                                              6/3/17      **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int AR = 12;          // donar nom al pin 5 de l’Arduino
const int AC = 11;          // donar nom al pin 6 de l’Arduino
const int AV = 10;          // donar nom al pin 7 de l’Arduino
const int BR = 7;         // donar nom al pin 10 de l’Arduino
const int BC = 6;         // donar nom al pin 11 de l’Arduino
const int BV = 5;         // donar nom al pin 12 de l’Arduino
int a = 500 ;

//********** Setup ****************************************************************
void setup()
{
  pinMode(AR, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(AC, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(AV, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(BR, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(BC, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(BV, OUTPUT);     // definir el pin 12 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(AR, HIGH);  // donem corrent a les seguuents sortides o no
  digitalWrite(AC, LOW);  
  digitalWrite(AV, LOW);   
  digitalWrite(BR, HIGH);    
  digitalWrite(BC, LOW);   
  digitalWrite(BV, LOW);   
  
  delay(a);  //espera un segon
                  
  digitalWrite(AR, HIGH);    // les segunts sortides no tenen corrent o si
  digitalWrite(AC, LOW);     
  digitalWrite(AV, LOW);     
  digitalWrite(BR, LOW);    
  digitalWrite(BC, LOW);     
  digitalWrite(BV, HIGH);    
  
  delay(a);     // espera   

   digitalWrite(AR, HIGH);    // les segunts sortides no tenen corrent o si
  digitalWrite(AC, LOW);     
  digitalWrite(AV, LOW);     
  digitalWrite(BR, LOW);    
  digitalWrite(BC, LOW);     
  digitalWrite(BV, HIGH);    
  
  delay(a);     // espera   

   digitalWrite(AR, HIGH);    // les segunts sortides no tenen corrent o si
  digitalWrite(AC, LOW);     
  digitalWrite(AV, LOW);     
  digitalWrite(BR, LOW);    
  digitalWrite(BC, LOW);     
  digitalWrite(BV, HIGH);    
  
  delay(a);     // espera   

   digitalWrite(AR, HIGH);    // les segunts sortides no tenen corrent o si
  digitalWrite(AC, LOW);     
  digitalWrite(AV, LOW);     
  digitalWrite(BR, LOW);    
  digitalWrite(BC, LOW);     
  digitalWrite(BV, HIGH);    
  
  delay(a);     // espera   

  digitalWrite(AR, HIGH);  // donem corrent a les seguuents sortides o no
  digitalWrite(AC, LOW);  
  digitalWrite(AV, LOW);   
  digitalWrite(BR, LOW);    
  digitalWrite(BC, HIGH);   
  digitalWrite(BV, LOW);   
  
  delay(a);  //espera un segon

  digitalWrite(AR, HIGH);  // donem corrent a les seguuents sortides o no
  digitalWrite(AC, LOW);  
  digitalWrite(AV, LOW);   
  digitalWrite(BR, HIGH);    
  digitalWrite(BC, LOW);   
  digitalWrite(BV, LOW);   
  
  delay(a);  //espera un segon

  digitalWrite(AR, LOW);  // donem corrent a les seguuents sortides o no
  digitalWrite(AC, LOW);  
  digitalWrite(AV, HIGH);   
  digitalWrite(BR, HIGH);    
  digitalWrite(BC, LOW);   
  digitalWrite(BV, LOW);   
  
  delay(a);  //espera un segon

  digitalWrite(AR, LOW);  // donem corrent a les seguuents sortides o no
  digitalWrite(AC, LOW);  
  digitalWrite(AV, HIGH);   
  digitalWrite(BR, HIGH);    
  digitalWrite(BC, LOW);   
  digitalWrite(BV, LOW);   
  
  delay(a);  //espera un segon

  digitalWrite(AR, LOW);  // donem corrent a les seguuents sortides o no
  digitalWrite(AC, LOW);  
  digitalWrite(AV, HIGH);   
  digitalWrite(BR, HIGH);    
  digitalWrite(BC, LOW);   
  digitalWrite(BV, LOW);   
  
  delay(a);  //espera un segon

  digitalWrite(AR, LOW);  // donem corrent a les seguuents sortides o no
  digitalWrite(AC, LOW);  
  digitalWrite(AV, HIGH);   
  digitalWrite(BR, HIGH);    
  digitalWrite(BC, LOW);   
  digitalWrite(BV, LOW);   
  
  delay(a);  //espera un segon

  digitalWrite(AR, LOW);  // donem corrent a les seguuents sortides o no
  digitalWrite(AC, HIGH);  
  digitalWrite(AV, LOW);   
  digitalWrite(BR, HIGH);    
  digitalWrite(BC, LOW);   
  digitalWrite(BV, LOW);   
  
  delay(a);  //espera un segon

  digitalWrite(AR, HIGH);  // donem corrent a les seguuents sortides o no
  digitalWrite(AC, LOW);  
  digitalWrite(AV, LOW);   
  digitalWrite(BR, HIGH);    
  digitalWrite(BC, LOW);   
  digitalWrite(BV, LOW);   
  
  delay(a);  //espera un segon
}

//********** Funcions *************************************************************

