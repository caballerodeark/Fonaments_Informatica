/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        17-11-22                                          **/
/** Descripcio:  II-Guio Lab. Seq.-Ap. 2                           **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    // DECLARACIO DE VARIABLES

    bool trobat=false;
    int n,seq;

    //SENTENCIES

    cin>>n; 

    while(cin>>seq && seq!=-1)
    {
        if(seq==n) trobat=true;
    }
    if(trobat) cout<<"Encontrado"<<endl;
    else cout<<"No encontrado"<<endl;

    return 0;
}