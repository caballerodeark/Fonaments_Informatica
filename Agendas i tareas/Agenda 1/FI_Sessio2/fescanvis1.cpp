/******************************************************/ 
/* Nom autor:     Guillem Perez Sanchez               */ 
/* Data:          Sessio 2 (14/09/22)                 */ 
/* Descripcio:    Fes canvis: divisió sencera         */
/******************************************************/ 
 
#include <iostream> 
using namespace std; 
  
/******************* PROGRAMA PRINCIPAL ***************/ 
int main ()
{  
  
    int num1; 
    int num2; 
//********************** A partir d’aqui es pot modificar 
    int unitat; 
    
    cout<<"Numero sencer: "; cin>>num1; 
    cout<<"Divisor sencer: "; cin>>num2;
    unitat=num1/num2; 
    cout<<"Resultat: "<<unitat<<endl;                        
    return 0;           
}