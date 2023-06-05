/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        Sessio 2 (14/09/22)                               **/
/** Descripcio:  Area i perimetre                                  **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    // DECLARACIO DE VARIABLES

    float longc,per,area;

    //SENTENCIES

    cout<<"Longitud del costat del quadrat: "; cin>>longc;
    per=longc*4.0;
    area=longc*longc;
    cout<<"Area: "<<area<<endl<<"Perimetre: "<<per;

    return 0;
}