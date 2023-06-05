#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

const int N;

typedef int mat[N][N];

int matriu_magica(mat m)
{
    int val_mag=0,val=0;
    for(int k=0;k<N;k++)
    {
        val_mag+=m[0][k];
    }
    for(int k=1;k<N;k++)
    {
        val=0;
        for(int l=0;l<N;l++)
        {
            val+=m[k][l];
        }
        if(val!=val_mag) return 0;
    }
    for(int k=0;k<N;k++)
    {
        val=0;
        for(int l=0;l<N;l++)
        {
            val+=m[l][k];
        }
        if(val!=val_mag) return 0;
    }
    return val_mag;
}