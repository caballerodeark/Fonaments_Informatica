/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Descripcio:  Agenda F.1-Final 2 P2                              **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <vector>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    // DECLARACIO DE VARIABLES

    int N,cuenta=1;

    //SENTENCIES
    
    cout<<"Numero de filas y columnas: "; cin>>N;
    int mat[N][N];
    for(int k=0;k<N;k++)
    {
        for(int j=0;j<N;j++)
        {
            if(j!=k)
            {
                mat[j][k]=cuenta;
                cuenta++;
            }
        }
    }
    for(int k=0,j=0;k<N;k++)
    {
        int suma=0,resta=0;
        for(int j=0;j<N;j++)
        {
            if(j!=k)
            {
                if(j<k) resta+=mat[k][j];
                else suma+=mat[k][j];
            }
        }
        mat[k][k]=suma-resta;
    }
    for(int k=0,j=0;k<N;k++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<mat[k][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}