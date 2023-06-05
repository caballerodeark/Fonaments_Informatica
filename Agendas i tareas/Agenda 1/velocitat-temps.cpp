/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        Sessio 2 (14/09/22)                               **/
/** Descripci�:  Agenda 1 exercici a)                              **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    // DECLARACIO DE VARIABLES

    float vel,dist,m;
    int h,hadd;

    //SENTENCIES

    cout<<"Velocitat mitja (km/h): "; cin>>vel;
    cout<<"Distancia (m): "; cin>>dist;
    m=(dist/(vel*1000.00))*60.00;
    h=0;
    hadd=m/60;
    h+=hadd;
    m-=hadd*60;

    cout<<"Temps fins destí: "<<h<<" hores i "<<m<<" minuts";

    return 0;
}