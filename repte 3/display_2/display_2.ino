/**********************************************************************************
**                                                                               **
**                              Entrades i sortides                              **
**                                                                               **
**  Jordi Pujolreu SALA                                              6/3/17      **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led0 = 5;          // donar nom al pin 5 de l’Arduino
const int led1 = 6;          // donar nom al pin 6 de l’Arduino
const int led2 = 7;          // donar nom al pin 7 de l’Arduino
const int led3 = 8;          // donar nom al pin 8 de l’Arduino
const int led4 = 9;          // donar nom al pin 9 de l’Arduino
const int led5 = 10;         // donar nom al pin 10 de l’Arduino
const int led6 = 11;         // donar nom al pin 11 de l’Arduino

const int polsador =2 ;

int a = 500;
int num = 0 ;

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led6, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(polsador, INPUT);
 
}

//********** Loop *****************************************************************
void loop()
{
   
  if(digitalRead(2)){

   num= num + 1 ;

  if(num == 10) {
    num = 0 ;
   }
  

   

  if(num == 1 ) {
  digitalWrite(led0, LOW);  // donem corrent a les seguuents sortides o no
  digitalWrite(led1, HIGH);  
  digitalWrite(led2, HIGH);   
  digitalWrite(led3, LOW);    
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);   
 
  
  delay(a);  //espera mig segon
  }

  
   if(num == 2 ) {              
  digitalWrite(led0, HIGH);    // les segunts sortides no tenen corrent o si
  digitalWrite(led1, HIGH);     
  digitalWrite(led2, LOW);     
  digitalWrite(led3, HIGH);    
  digitalWrite(led4, HIGH);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, HIGH);     
 
  
  delay(a);     // espera 
   }
   
   if(num == 3 )  {   
  digitalWrite(led0, HIGH);    // les segunts sortides no tenen corrent o si
  digitalWrite(led1, HIGH);     
  digitalWrite(led2, HIGH);     
  digitalWrite(led3, HIGH);    
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, HIGH);     

  
 
  
  delay(a);     // espera  
   }
   if(num == 4 ) {
  digitalWrite(led0, LOW);    // les segunts sortides no tenen corrent o si
  digitalWrite(led1, HIGH);     
  digitalWrite(led2, HIGH);     
  digitalWrite(led3, LOW);    
  digitalWrite(led4, LOW);    
  digitalWrite(led5, HIGH);    
  digitalWrite(led6, HIGH);     
 
  
  delay(a);     // espera 
   }
  if(num == 5 ) {
  digitalWrite(led0, HIGH);    // les segunts sortides no tenen corrent o si
  digitalWrite(led1, LOW);     
  digitalWrite(led2, HIGH);     
  digitalWrite(led3, HIGH);    
  digitalWrite(led4, LOW);    
  digitalWrite(led5, HIGH);    
  digitalWrite(led6, HIGH);     
 
  
  delay(a);     // espera 
  } 
  if(num == 6 ) {
  digitalWrite(led0, LOW);    // les segunts sortides no tenen corrent o si
  digitalWrite(led1, LOW);     
  digitalWrite(led2, HIGH);     
  digitalWrite(led3, HIGH);    
  digitalWrite(led4, HIGH);    
  digitalWrite(led5, HIGH);    
  digitalWrite(led6, HIGH);     
 
  
  delay(a);     // espera   
  }  
  if(num == 7 ) {
  digitalWrite(led0, HIGH);    // les segunts sortides no tenen corrent o si
  digitalWrite(led1, HIGH);     
  digitalWrite(led2, HIGH);     
  digitalWrite(led3, LOW);    
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);     
 
  
  delay(a);     // espera  
  }
  if(num == 8) {
  digitalWrite(led0, HIGH);    // les segunts sortides no tenen corrent o si
  digitalWrite(led1, HIGH);     
  digitalWrite(led2, HIGH);     
  digitalWrite(led3, HIGH);    
  digitalWrite(led4, HIGH);    
  digitalWrite(led5, HIGH);    
  digitalWrite(led6, HIGH);     
 
  
  delay(a);     // espera
  }    
  if(num == 9 ) {
  digitalWrite(led0, HIGH);    // les segunts sortides no tenen corrent o si
  digitalWrite(led1, HIGH);     
  digitalWrite(led2, HIGH);     
  digitalWrite(led3, LOW);    
  digitalWrite(led4, LOW);    
  digitalWrite(led5, HIGH);    
  digitalWrite(led6, HIGH);     
 
  
  delay(a);     // espera  
  }        
}
}

//********** Funcions *************************************************************

