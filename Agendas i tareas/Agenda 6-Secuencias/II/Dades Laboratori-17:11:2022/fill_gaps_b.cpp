/********************************************************/
/* Nom autor:       Departament LSI                     */
/* Descripcio:      Exercici B                          */
// Calculadora senzilla. Donat un menú, és demana una  
// opció a l'usuari i es permet sumar, restar o multiplicar 
// sobre el resultat previ. Per cada calcul es va donant el      
// resultat fins a aquell moment. El programa finalitza 
// quan s'escull l'opció de sortir.  
                   
/********************************************************/
/*********************** BIBLIOTEQUES *******************/
#include <iostream>
#include <cstdlib>

using namespace std;
/******************* PROGRAMA PRINCIPAL *****************/
int main(void)
{
/**************** DECLARACIO DE VARIABLES ***************/
   int terme, total=0;
   char opcio;
/*********************** SENTÈNCIES *********************/ 
   cout<<"A. Suma un valor a l'acumulat"<<endl;
   cout<<"B. Resta un valor a l'acumulat"<<endl;
   cout<<"C. Multiplica un valor a l'acumulat"<<endl;
   cout<<"D. Sortir"<<endl;   
   cout<<"Introduieix l'opcio escollida: "<<endl; 
   cin>>opcio;
   while // FER: iterar si no s'introdueix un valor A,B,C,D,a,b,c o d
   {
         cout<<"Error, les opcions son A, B, C i D o a, b, c, i d"<<endl;
         cin>>opcio;
   }        
   total = 0;          
   while (opcio!='D')
   {
      //FER: TractarElement: llegir enunciat.
      
      cout<<"El resultat actual es: "<<total<<endl<<endl;
      cout<<"A. Suma un valor a l'acumulat"<<endl;
      cout<<"B. Resta un valor a l'acumulat"<<endl;
      cout<<"C. Multiplica un valor a l'acumulat"<<endl;
      cout<<"D. Sortir"<<endl;   
      cout<<"Introduieix l'opcio escollida: "<<endl; 
      cin>>opcio;
      while // FER: iterar si no s'introdueix un valor A,B,C,D,a,b,c o d
      {
         cout<<"Error, les opcions son A, B, C i D o a, b, c, i d"<<endl;
         cin>>opcio;
      }    
   }
   system ("pause");
   return 0;
}
