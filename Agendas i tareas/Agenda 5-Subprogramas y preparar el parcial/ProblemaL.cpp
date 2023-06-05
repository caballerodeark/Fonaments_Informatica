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

char rotar(char c, int k)
{
    if((c+k)>'z')
    {
        k-='z'-c;
        c='a'+k;
    }
    else c+=k;
    return c;
}

//b)

int main()
{
    // DECLARACIO DE VARIABLES

    int k;
    char c;
    bool punto=false;

    //SENTENCIES

    cout<<"k: "; cin>>k;
    while(cin>>c && !punto)
    {
        if(c=='.') punto=true;
        else
        {
            if(!(c>='a' && c<='z')) cout<<"No es una letra minuscula."<<endl;
            else cout<<rotar(c,k)<<endl;
        }
    }

}