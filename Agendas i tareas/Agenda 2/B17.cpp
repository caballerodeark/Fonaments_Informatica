/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        25/09/22                                          **/
/** Descripci�:  B17                                                  **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    // DECLARACIO DE VARIABLES

    int mesos,dies;
    double graus;
    char gana;

    //SENT�NCIES

    cout<<"Temperatura del nado (en centigrads, entre 36.1 i 41.0): "; cin>>graus;
    cout<<"Mesos del nado (0 a 36 mesos): "; cin>>mesos;
    cout<<"Dies amb febre (0 a 10 dies): "; cin>>dies;
    cout<<"¿El nado ha perdut la gana? ('s' per si, 'n' per no): "; cin>>gana;

    if ((graus>41.0 || graus<36.1) || (mesos<0 || mesos>36) || (dies<0 || dies>10) || (gana!='s' || gana!='n')) cout<<"error a la introducció de dades, torni a començar";
    else if(graus>40.5 && graus<=41.0) cout<<"vagi a urgències amb el nadó";
    else if(graus<=40.5 && graus>39.5) 
    {
        if(mesos>=0 && mesos<=18) cout<<"vagi a urgències amb el nadó";
        else if((mesos>=19 && mesos<=36) && gana=='s') cout<<"vagi a urgències amb el nadó";
        else if(dies>2 && dies<=10) cout<<"vagi a urgències amb el nadó";
        else cout<<"que el nadó no surti de casa i begui molts líquids";
    }
    else if(graus<=39.4 && graus>=38.5)
    {
        if((mesos>=0 && mesos<=18) && (dies>3 && dies<=10)) cout<<"vagi a urgències amb el nadó";
        else if((mesos>=19 && mesos<=36) && (dies>4 && dies<=10)) cout<<"no es urgent, però demani cita al seu pediatra";
        else cout<<"que el nadó no surti de casa i begui molts líquids";
    }
    else if((graus>=36.1 && graus<38.5) && (dies>7 && dies<=10)) cout<<"no es urgent, però demani cita al seu pediatra";
    else cout<<"que el nadó no surti de casa i begui molts líquids";
    
    return 0;
}

//#1:"vagi a urgències amb el nadó"
//#2:"no es urgent, però demani cita al seu pediatra"
//#3:"que el nadó no surti de casa i begui molts líquids"
//#4:"error a la introducció de dades, torni a començar"