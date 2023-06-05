/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        Agenda 5 (20/10/22)                               **/
/** Descripcio:  Problema J                                        **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

//a)

void xifres(int n,int& nxifres)
{
    nxifres=0;
    while(n!=0)
    {
        nxifres++;
        n/=10;
    }
}

//b)

int factorial(int nxifres)
{
    int aux;
    aux=1;
    for(int k=1; k<=nxifres; k++)
    {
        aux*=k;
    }
    return aux;
}

//c)

bool espodsitiu(int n)
{
    if(n>=0) return true;
    else return false;
}

int main()
{
    // DECLARACIO DE VARIABLES

    ifstream entrada3("entrada3.txt");
    int n,nxifres;

    //SENTENCIES

    while(entrada3>>n)
    {
        xifres(n,nxifres);
        cout<<n<<" te "<<nxifres<<" xifres."<<endl;
        cout<<"El factorial del numero de xifres es: "<<factorial(nxifres)<<endl;
        if(espodsitiu(n)) cout<<n<<" es positiu."<<endl;
        else cout<<n<<" es negatiu."<<endl;
    }

    return 0;
}