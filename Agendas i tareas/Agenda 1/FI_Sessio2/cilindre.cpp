/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        Sessio 2 (14/09/22)                               **/
/** Descripci�:  Cilindre                                          **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    // DECLARACIO DE VARIABLES

    float radi,altura,area,volum;

    //SENTENCIES

    cout<<"Radi: "; cin>>radi;
    cout<<"Altura: "; cin>>altura;
    //El nombre Pi s'escriu a C++ com "M_PI", incloent-hi la llibreria "cmath"
    area=(2*(M_PI*(radi*radi)))+((2*M_PI*radi)*altura);
    volum=(M_PI*(radi*radi))*altura;
    cout<<"Area: "<<area<<endl<<"Volum: "<<volum;

    return 0;
}