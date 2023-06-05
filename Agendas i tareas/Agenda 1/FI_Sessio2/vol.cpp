/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        Sessio 2 (14/09/22)                               **/
/** Descripci�:  Arribada vol                                      **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    // DECLARACIO DE VARIABLES

    int h,m,hd,md,hf,mf,numd,numh;

    //SENTENCIES

    cout<<"Hora inicial: "; cin>>h;
    cout<<"Minuts inicials: "; cin>>m;
    cout<<"Hora del vol: "<<h<<":"<<m<<endl;
    cout<<"Hores de duracio: "; cin>>hd;
    cout<<"Minuts de duracio: "; cin>>md;

    hf=h+hd;
    mf=m+md;
    
    numh=mf/60;
    hf+=numh;
    mf-=60*numh;
    numd=hf/24;
    hf-=numd*24;
    
    cout<<"Hora arribada: "<<hf<<":"<<mf<<endl;


    return 0;
}