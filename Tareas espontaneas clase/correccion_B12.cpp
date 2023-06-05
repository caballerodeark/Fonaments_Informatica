/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        Session 5 (26/09/22)                              **/
/** Descripcio:  Correccion B12                                    **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    // DECLARACIO DE VARIABLES

    int pis,pisA,pisB,personesA,personesB;
    bool A=false,B=false,puja;

    //SENT�NCIES

    cout<<"Ascensor A (pis i ocupants): "; cin>>pisA>>personesA;
    cout<<"Ascensor B (pis i ocupants): "; cin>>pisB>>personesB;
    cout<<"Ets al pis?"; cin>>pis;
    if(personesA>0 && personesB>0) cout<<"res a fer"<<endl;
    else
    {
        
    }

    return 0;
}