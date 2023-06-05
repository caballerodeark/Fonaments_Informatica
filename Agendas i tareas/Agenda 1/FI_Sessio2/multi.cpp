/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        Sessio 2 (14/09/22)                               **/
/** Descripci�:  Multiplicar                                       **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    // DECLARACIO DE VARIABLES

    float v1,v2;

    //SENTENCIES

    cout<<"Valor 1: "; cin>>v1;
    cout<<"Valor 2: "; cin>>v2;
    cout<<"Resultat (Valor 1 x Valor 2): "<<(v1*v2);

    return 0;
}

// Al ser numeros de muchos digitos, la memoria es incapaz de plasmarlos i lo da en notacion cientifica