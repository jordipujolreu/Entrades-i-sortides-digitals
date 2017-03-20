/**********************************************************************************
**                                                                               **
**                              Entrades i sortides                              **
**                                                                               **
**  Jordi Pujolreu SALA                                              6/3/17      **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led0 = 8;          // donar nom al pin 5 de l’Arduino
const int led1 = 6;          // donar nom al pin 6 de l’Arduino
const int led2 = 7;          // donar nom al pin 7 de l’Arduino
const int led3 = 5;          // donar nom al pin 8 de l’Arduino

int a = 500;

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
  
 
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(led0, HIGH);  // donem corrent a les seguuents sortides o no
  digitalWrite(led1, LOW);  
  digitalWrite(led2, LOW);   
  digitalWrite(led3, LOW);    
 
  delay(a);  //espera mig segon
                  
  digitalWrite(led0, LOW);    // les segunts sortides no tenen corrent o si
  digitalWrite(led1, HIGH);     
  digitalWrite(led2, LOW);     
  digitalWrite(led3, LOW);    
 
 
  
  delay(a);     // espera   
           
  digitalWrite(led0, HIGH);    // les segunts sortides no tenen corrent o si
  digitalWrite(led1, LOW);     
  digitalWrite(led2, HIGH);     
  digitalWrite(led3, LOW);    
 

  
 
  
  delay(a);     // espera        

  digitalWrite(led0, LOW);    // les segunts sortides no tenen corrent o si
  digitalWrite(led1, HIGH);     
  digitalWrite(led2, HIGH);     
  digitalWrite(led3, LOW);    
 
  
 
  delay(a);     // espera  

  digitalWrite(led0, HIGH);    // les segunts sortides no tenen corrent o si
  digitalWrite(led1, HIGH);     
  digitalWrite(led2, HIGH);     
  digitalWrite(led3, LOW);    
 
  delay(a);     // espera          

  digitalWrite(led0, LOW);    // les segunts sortides no tenen corrent o si
  digitalWrite(led1, HIGH);     
  digitalWrite(led2, HIGH);     
  digitalWrite(led3, HIGH);    
 
 
  
  delay(a);     // espera            

      
}

//********** Funcions *************************************************************

