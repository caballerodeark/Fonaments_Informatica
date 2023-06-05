/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        Agenda 5 (20/10/22)                               **/
/** Descripcio:  Problema N                                        **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

// DECLARACIO DE CONSTANTS

double preu(float prart,float IVA,float descompte)
{
    prart-=(descompte/100.00)*prart;
    prart+=(IVA/100.00)*prart;
    return double(prart);
}

/************************ PROGRAMA PRINCIPAL ************************/

int main()
{
    // DECLARACIO DE VARIABLES

    int N;
    double pre=0.00;
    float prart=0.00,IVA=0.00,descompte=0.00;


    //SENTENCIES

    cout<<"N: "; cin>>N;
    cout<<"Preu article: "; cin>>prart;
    cout<<"IVA: "; cin>>IVA;
    cout<<"Descompte: "; cin>>descompte;
    pre=preu(prart,IVA,descompte);
    cout<<"Total: "<<pre*N<<" EUR"<<endl;
    cout<<"Cantidad por 100 EUR: "<<int(100/pre)<<endl;

    return 0;
}