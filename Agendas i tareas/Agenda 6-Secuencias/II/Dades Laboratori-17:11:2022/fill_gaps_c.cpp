/********************************************************/
/* Nom autor:       Departament LSI                     */
/* Descripcio:      Exercici C                          */
// Determina si un any es de trasp�s o no.  
// L'usuari introdueix l'any i el programa visualitza 
// un  missatge indicant si es de trasp�s o no. Per cada 
// valor es pregunta a l'usuari si desitja continuar, el  
// programa finalitza quan l'usuari indiqui que no vol continuar.
// Al final el programa visualitza el nombre total d'anys
// de tras�s que s'han introduit.

// Un any �s de trasp�s si es divisible per 4, amb l'excepci�
// dels anys de fi de segle que ser�n de trasp�s nom�s si son
// divisibles per 400.
                   
/********************************************************/
/*********************** BIBLIOTEQUES *******************/
#include <iostream>
#include <cstdlib>

using namespace std;
/******************* PROGRAMA PRINCIPAL *****************/
int main(void)
{
/**************** DECLARACIO DE VARIABLES ***************/
   int any,tot;
   char opcio,lletra;
/*********************** SENT�NCIES *********************/ 
   tot=0;
   lletra='S';        
   while (lletra!='N')
   {
      cout<<"Introdueix l'any que vols consultar"<<endl;
      cin>>any; 
      if (any%4==0)
          if (any%100==0)
          {
              if (any%400!=0)   
                  cout<<"No es de traspas"<<endl; 
              else
                  cout<<"Es de traspas"<<endl;
                  tot=tot+1;
          }
          else
          {
              cout<<"Es de traspas"<<endl;
              tot=tot+1;
          }
      else
          cout<<"No es de traspas"<<endl;   
      cout<<"Desitja continuar (S/N)? "<<endl; 
      cin>>opcio;
      opcio=toupper(opcio);
      while ((opcio!='S') || (opcio !='N'))
      {
         cout<<"Error, les opcions son S, s, N o n"<<endl;
         cin>>opcio;
         opcio=toupper(opcio);
      }    
   }
   cout<<"Total anys de traspas: "<<tot<<endl;
   system ("pause");
   return 0;
}
