/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        Sessio 2 (14/09/22)                               **/
/** Descripci�:  Expressions senzilles 2                           **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    // DECLARACIO DE VARIABLES

    float m1, km;

    //SENTENCIES

    cout<<"Kilometres? "; cin>>km;
    m1 = km / 1.609;
    cout<<"Son "<<m1<<" milles"<<endl;

    return 0;
}