/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Descripcio:  Agenda F.1-Final 4 P1                              **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <vector>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int transforma(int A,int i,int j)
{
    int B[i][j];
    for(int k=0;k<i;k++)
    {
        for(int l=0;l<j;l++)
        {
            B[k][l]=0;
            for(int a=0;a<i;a++)
            {
                if(a!=k)
                {
                    B[k][l]+=A[a][l];
                }
            }
            for(int a=0;a<j;a++)
            {
                if(a!=l)
                {
                    B[k][l]+=A[k][a];
                }
            }
        }
    }
    return B;
}

int main ()
{
    // DECLARACIO DE VARIABLES

    //SENTENCIES

    return 0;
}