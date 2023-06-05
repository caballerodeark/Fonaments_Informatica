/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        Sessio 4 (21/09/22)                               **/
/** Descripci�:  Valor absoluto                                    **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    //DECLARACIO DE VARIABLES

    int num,abs;

    //SENT�NCIES

    cout<<"Un numero decimal? "; cin>>num;
    if(num<0) num=-num;
    abs=num;
    cout<<"El valor absoluto del numero es: "<<abs;

    return 0;
}