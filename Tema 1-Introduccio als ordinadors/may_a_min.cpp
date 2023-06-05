/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        Sessi� 3 (21/09/22)                               **/
/** Descripci�:  Mayusculas a minusculas                           **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    // DECLARACIO DE VARIABLES

    char x;

    //SENT�NCIES

    cout<<"Mayuscula --> "; cin>>x;
    x+=char('a'-'A');
    cout<<"Minuscula --> "<<x;

    return 0;
}