/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        Sessio 4 (21/09/22)                               **/
/** Descripci�:  Valor absoluto                                    **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    //DECLARACIO DE VARIABLES

    int a,b;
    bool c1,c2,c3,c4;

    //SENT�NCIES

    cout<<"Dos enteros: "; cin>>a>>b;
    if(a%7!=0 and b%7!=0)
    {
        cout<<a*b;
        c1=true;
    }
    else if(a>b && c1==false)
    { 
        cout<<a/b;
        c2=true;
    }
    else if((a%2==0 && b%2==0) && c1==false && c2==false) 
    {
        cout<<a+b;
        c3=true;
    }
    else if((a%2!=0 && b%2!=0) && c1==false && c2==false && c3==false) 
    {
        cout<<a-b;
        c4=true;
    }
    else cout<<"ERROR";

    return 0;
}