/********************************************************/
/* Nom autor:       Departament LSI                     */
/* Descripcio:      Exercici D                          */
// Dir si en una compra s'han comprat més de 1000 unitats d'algun producte,
// si no és així mostrar el total de la compra.
// L'usuari introdueix el codi de producte, el preu del producte i les unitats comprades i
// es visualitza el total per aquell producte. El programa 
// finalitza quan es troba algun producte amb més 1000 unitats o 
// quan l'usuari introdueixi un codi de producte negatiu.

                   
/********************************************************/
/*********************** BIBLIOTEQUES *******************/
#include <iostream>
#include <cstdlib>

using namespace std;
/******************* PROGRAMA PRINCIPAL *****************/
int main(void)
{
/**************** DECLARACIO DE VARIABLES ***************/
   int suma_par,suma_tot,codi,preu,unitats;
   bool trobat;
/*********************** SENTÈNCIES *********************/ 
   cout<<"Introduieix el codi del producte"<<endl;
   cin>>codi;       
   trobat=false;      
   while ((codi>=0) || (!trobat))
   {
      cout<<"Introdueix el preu del producte"<<endl;
      cin>>preu; 
      while (preu<0)
         cout<<"Error el preu ha de ser positiu"<<endl; 
         cin>>preu;
      cout<<"Introdueix les unitats del producte"<<endl;
      cin>>unitats; 
      while (unitats<0)
         cout<<"Error les unitats han de ser positives"<<endl; 
      suma_par=unitats*preu;
      cout<<"Total del producte "<<codi<<": "<<suma_par<<endl;
      if (unitats > 1000)
      {
         trobat=true;
      }
      else
      {
         suma_tot=suma_tot+suma_par;
         cout<<"Introduieix el codi del producte"<<endl;
         cin>>codi;
      }   
   }
   if (trobat=false)
   {
      cout<<"Total de la compra: "<<suma_tot<<endl;
   }
   else
   {
      cout<<"Hi ha un producte amb més de 1000 unitats"<<endl;
   }
   system ("pause");
   return 0;
}
