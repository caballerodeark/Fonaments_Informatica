/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        30/09/22                                          **/
/** Descripcio:  Grup 1 - 3.                                       **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    // DECLARACIO DE VARIABLES

    char N,M;
    int dist,cuenta;

    //SENTENCIES

    cout<<"N: "; cin>>N;
    cout<<"M: "; cin>>M;
    dist=M-N;
    cuenta=0;
    while(cuenta<=dist)
    {
        for(int k=0;k<=cuenta;k++)
        {
            cout<<char(N+cuenta);
        }
        cout<<endl;
        cuenta++;
    }    

    return 0;
}