/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        17-11-22                                          **/
/** Descripcio:  II-Guio Lab. Seq.-Ap. 3                           **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    // DECLARACIO DE VARIABLES

    int n,k=1,sum=0,aux;

    //SENTENCIES

    cin>>n;
    while(k<=n)
    {
        if(k==1)
        {
            aux=1;
            cout<<aux<<" ";
        }
        else 
        {
            sum+=aux;
            aux=sum;
            cout<<sum<<" ";
        }
        k++;
    }
    
}