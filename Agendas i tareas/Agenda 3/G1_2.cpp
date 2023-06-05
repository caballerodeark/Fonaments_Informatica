/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        30/09/22                                          **/
/** Descripcio:  Grup 1 - 2.                                       **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    // DECLARACIO DE VARIABLES

    int n,count=1;

    //SENTENCIES

    cin>>n;
    while(count<=n)
    {
        for(int k=0; k<count; k++)
        {
            cout<<count;
        }
        cout<<endl;
        count++;
    }

    return 0;
}