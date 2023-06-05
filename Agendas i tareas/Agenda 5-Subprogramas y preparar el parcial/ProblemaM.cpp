/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        Agenda 5 (20/10/22)                               **/
/** Descripcio:  Problema L                                        **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

//a)

int dcent(int n)
{
    int dig=0,aux=n;
    while(aux==0)
    {
        dig++;
        aux/=10;
    }
    if(dig%2==0) return 0;
    else
    {
        return (n/(10^(dig/2)))%10;
    }
}

//b)

int main()
{
    // DECLARACIO DE VARIABLES

    int n,suma;
    bool stop;
    

    //SENTENCIES

    while(cin>>n && !stop)
    {
        if(n==0) stop=true;
        else suma+=dcent(n);
        cout<<suma<<endl;
    }

}