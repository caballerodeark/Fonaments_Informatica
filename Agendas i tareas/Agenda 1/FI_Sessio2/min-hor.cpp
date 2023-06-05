/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        Sessio 2 (14/09/22)                               **/
/** Descripci�:  Conversor minuts-hores                            **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    // DECLARACIO DE VARIABLES

    float m,h;

    //SENTENCIES

    cout<<"Minuts: "; cin>>m;
    h=m/60;
    cout<<"Hores: "<<h;

    return 0;
}