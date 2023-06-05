/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        Sessio 2 (14/09/22)                               **/
/** Descripci�:  Agenda 1 exercici b)                              **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    // DECLARACIO DE VARIABLES
    float rad;
    float g,s,m,res;
    int k;
    
    //SENTENCIES

    cout<<"Radians: "; cin>>rad;

    g=rad*(180.00/(M_PI));
    k=rad*(180.00/(M_PI));
    m=(g-k)*60;
    res=g-k;
    k=float(g-k)*60;
    g-=res;
    s=(m-k)*60;
    res=m-k;
    m-=res;
    
    
    

    cout<<"Graus: "<<g<<endl<<"Minuts: "<<m<<endl<<"Segons: "<<s;

    return 0;
}