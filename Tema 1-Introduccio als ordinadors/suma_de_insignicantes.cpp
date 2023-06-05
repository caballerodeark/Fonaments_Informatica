/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        Sessio 4 (21/09/22)                               **/
/** Descripci�:  Suma de insignificantes                           **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    // DECLARACIO DE VARIABLES

    int num,suma;

    //SENT�NCIES

    cout<<"Entero de mas de 3 cifras: "; cin>>num;
    suma=(num%10)+(((num%100)-(num%10))/10)+(((num%1000)-(num%100))/100);
    cout<<"Suma: "<<suma;

    return 0;
}