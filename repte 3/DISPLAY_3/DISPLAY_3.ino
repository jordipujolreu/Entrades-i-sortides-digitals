/**********************************************************************************
**                                                                               **
**                              Entrades i sortides                              **
**                                                                               **
**  Jordi Pujolreu SALA                                              6/3/17      **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int A = 5;          // donar nom al pin 5 de l’Arduino
const int B = 6;          // donar nom al pin 6 de l’Arduino
const int C = 7;          // donar nom al pin 7 de l’Arduino
const int D = 8;          // donar nom al pin 8 de l’Arduino
const int E = 9;          // donar nom al pin 9 de l’Arduino
const int F = 10;         // donar nom al pin 10 de l’Arduino
const int G = 11;         // donar nom al pin 11 de l’Arduino

int a = 500;

//********** Setup ****************************************************************
void setup()
{
  pinMode(A, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(B, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(C, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(D, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(E, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(F, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(G, OUTPUT);     // definir el pin 11 com una sortida
 
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(A, LOW);  // donem corrent a les seguuents sortides o no
  digitalWrite(B, HIGH);  
  digitalWrite(C, HIGH);   
  digitalWrite(D, HIGH);    
  digitalWrite(E, HIGH);    
  digitalWrite(F, LOW);    
  digitalWrite(G, LOW);   
 
  
  delay(a);  //espera mig segon
                  
  digitalWrite(A, HIGH);  // donem corrent a les seguuents sortides o no
  digitalWrite(B, HIGH);  
  digitalWrite(C, HIGH);   
  digitalWrite(D, HIGH);    
  digitalWrite(E, HIGH);    
  digitalWrite(F, HIGH);    
  digitalWrite(G, LOW);    
 
  
  delay(a);     // espera   
           
  digitalWrite(A, LOW);  // donem corrent a les seguuents sortides o no
  digitalWrite(B, LOW);  
  digitalWrite(C, LOW);   
  digitalWrite(D, LOW);    
  digitalWrite(E, HIGH);    
  digitalWrite(F, LOW);    
  digitalWrite(G, HIGH);   

  
 
  
  delay(a);     // espera        

  digitalWrite(A, LOW);  // donem corrent a les seguuents sortides o no
  digitalWrite(B, HIGH);  
  digitalWrite(C, HIGH);   
  digitalWrite(D, HIGH);    
  digitalWrite(E, HIGH);    
  digitalWrite(F, LOW);    
  digitalWrite(G, HIGH);     
 
  
  delay(a);     // espera 

 
  digitalWrite(A, LOW);  // donem corrent a les seguuents sortides o no
  digitalWrite(B, HIGH);  
  digitalWrite(C, HIGH);   
  digitalWrite(D, LOW);    
  digitalWrite(E, LOW);    
  digitalWrite(F, LOW);    
  digitalWrite(G, LOW);      
 
  
  delay(a);     // espera  

  digitalWrite(A, LOW);  // donem corrent a les seguuents sortides o no
  digitalWrite(B, LOW);  
  digitalWrite(C, LOW);   
  digitalWrite(D, LOW);    
  digitalWrite(E, LOW);    
  digitalWrite(F, LOW);    
  digitalWrite(G, LOW);   

   delay(a);     // espera  

  
}

//********** Funcions *************************************************************
