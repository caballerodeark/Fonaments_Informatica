/********************************************************/
/* Nom autor:       Departament LSI                     */
/* Descripcio:      Exercici A                          */
/* Es demana un valor parell entre 20 i 50 i un altre   */
/* valor entre 80 i 100. El programa visualitza tots els*/
/* parells que estan entre aquest limits i mostra la    */
/* suma d'aquest parells i el total de valors visualitzats. */
/*                                                      */
/********************************************************/
/*********************** BIBLIOTEQUES *******************/
#include <iostream>
#include <cstdlib>

using namespace std;
/******************* PROGRAMA PRINCIPAL *****************/
int main(void)
{
/**************** DECLARACIO DE VARIABLES ***************/
   int termes, suma, num1,num2;

/*********************** SENTÈNCIES *********************/ 
   cout<<"Introduieix un valor parell entre 20 i 50"<<endl; 
   cin>>num1;
   while // FER: iterar si no s'introdueix un valor parell entre 20 i 50
   {     
         cout<<"Error el valor ha de ser parell entre 20 i 50"<<endl; 
         cin>>num1;
   }
   cout<<"Introduieix un valor entre 80 i 100"<<endl;
   cin>>num2;
   while // FER: iterar si no s'introdueix un valor entre 80 i 100
   {
         cout<<"Error el valor ha d'estar entre 80 i 100"<<endl; 
         cin>>num2;
   }        
   suma = 0; 
   termes=0;          
   while (num1 <= num2)            
   {
      //FER: TractarElement: llegir enunciat.
      num1=num1+2;
   }
   cout<<"Total de nombres parells: "<<termes<<endl;
   cout<<"Suma de tots els parells del rang: "<<suma<<endl;
   system ("pause");
   return 0;
}
