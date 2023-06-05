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

    int N,M,val_cost,dist,cuenta=1;

    //SENTENCIES

    cout<<"Filas y columnas de la matriz (La resta de estas debe ser par): "; cin>>N>>M;
    if(((N-M)%2)!=0) cout<<"Parametros incorrectos. Vuelva a intentarlo."<<endl;
    else
    {
        int mat[N][M];
        if(N>M)
        {
            val_cost=M;
            dist=(N-M)/2;
            for(int k=0;k<N;k++)
            {
                for(int j=0;j<M;j++)
                {
                    if(k>dist-1 && k<=dist+val_cost-1) 
                    {
                        mat[k][j]=cuenta;
                        cuenta++;
                    }
                    else mat[k][j]=0;
                }
            }
        }
        else
        {
            val_cost=N;
            dist=(M-N)/2;
            for(int k=0;k<N;k++)
            {
                for(int j=0;j<M;j++)
                {
                    if(j>dist-1 && j<=dist+val_cost-1) 
                    {
                        mat[k][j]=cuenta;
                        cuenta++;
                    }
                    else mat[k][j]=0;
                }
            }
        }
        for(int k=0;k<N;k++)
        {
            for(int j=0;j<M;j++)
            {
                cout<<mat[k][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}