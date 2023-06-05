/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        25/09/22                                          **/
/** Descripci�:  A1                                                **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    // DECLARACIO DE VARIABLES

    int any,ANY,transcurs;

    //SENT�NCIES

    cout<<"¿En que año estamos?: "; cin>>any;
    cout<<"Escribe un año cualquiera: "; cin>>ANY;
    if(ANY<0)
    {
        transcurs=(ANY*-1)+any;
    }
    else transcurs=any-ANY;
    cout<<"Desde el año "<<ANY<<" han pasado "<<transcurs<<" años.";

    return 0;
}