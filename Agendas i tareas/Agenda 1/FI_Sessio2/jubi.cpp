/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        Sessio 2 (14/09/22)                               **/
/** Descripci�:  Jubilacio                                         **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    // DECLARACIO DE VARIABLES

    const int anyj=65;
    int anys;

    //SENTENCIES

    cout<<"Edat: "; cin>>anys;
    cout<<"Anys per jubilacio: "<<(anyj-anys)<<" anys";

    return 0;
}