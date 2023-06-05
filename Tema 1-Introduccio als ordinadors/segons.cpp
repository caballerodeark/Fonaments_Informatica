/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        Sessi� 4 (21/09/22)                               **/
/** Descripci�:  Segundos a h,m,s                                  **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    // DECLARACIO DE VARIABLES

    int S,h,m,s;

    //SENT�NCIES

    cout<<"SEGONS --> "; cin>>S;

    h=S/3600;
    m=(S-(h*3600))/60;
    s=S-(3600*h)-(m*60);

    cout<<"Hores: "<<h<<endl<<"Minuts: "<<m<<endl<<"Segons: "<<s;


    return 0;
}