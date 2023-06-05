/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        Sessio 2 (14/09/22)                               **/
/** Descripci�:  Conversor hores-minuts                            **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    // DECLARACIO DE VARIABLES

    float h,m;

    //SENTENCIES

    cout<<"Hores (Pot ser nombre real): "; cin>>h;
    m=h*60.0;
    cout<<"Minuts: "<<m;

    return 0;
}