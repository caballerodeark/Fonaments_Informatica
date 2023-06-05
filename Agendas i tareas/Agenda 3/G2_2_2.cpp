/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        30/09/22                                          **/
/** Descripcio:  Grup 2 - 2.2                                      **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    // DECLARACIO DE VARIABLES

    int ISBN,res;
    bool valid;

    //SENTENCIES

    ISBN=201103311;
    res=9*(ISBN/100000000)+8*((ISBN/10000000)%10)+7*((ISBN/1000000)%10)+6*((ISBN/100000)%10)+5*((ISBN/10000)%10)+4*((ISBN/1000)%10)+3*((ISBN/100)%10)+2*((ISBN/10)%10)+(ISBN%10);
    if(res%11==0) valid=true;
    else valid=false;
    cout<<valid;

    return 0;
}