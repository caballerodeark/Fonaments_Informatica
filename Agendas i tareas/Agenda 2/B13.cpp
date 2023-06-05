/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        25/09/22                                          **/
/** Descripci�:  B13                                               **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    // DECLARACIO DE VARIABLES
    
    char cat;
    float alt;
    int punts;

    //SENT�NCIES

    cout<<"Categoria (B per Benjamins, A per Alevins, I per Infantils): "; cin>>cat;
    cout<<"Altura assolida al salt: "; cin>>alt;

    if(cat=='B')
    {
        if(alt<1.80) punts=1;
        else if(alt>=1.80 && alt<=2.30) punts=2;
        else punts=3;
        cout<<"Puntuacio: "<<punts<<" punts"<<endl;
    }
    else if(cat=='A')
    {
        if(alt<2.70) punts=1;
        else if(alt>=2.70 && alt<=3.40) punts=2;
        else punts=3;
        cout<<"Puntuacio: "<<punts<<" punts"<<endl;
    }
    else if(cat=='I')
    {
        if(alt<3.70) punts=1;
        else if(alt>=3.70 && alt<=4.10) punts=2;
        else punts=3;
        cout<<"Puntuacio: "<<punts<<" punts"<<endl;
    }
    else cout<<"Error al seleccionar categoria, torni a fer-ho..."<<endl;

    
    return 0;
}