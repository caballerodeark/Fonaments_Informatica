#include <iostream>
#include <stdlib.h>
using namespace std;

int N,M,K;

int trobataula(char S,char P)
{
    for(int k=0;k<N;k++)
    {
        for(int j=0;j<M;j++)
        {
            bool nocorrecto=true;
            for(int l=0;l<K && nocorrecto;l++)
            {
                if(S[k][j+l]!=P[l]) nocorrecto=false;
            }
            if(nocorrecto) return j;
        }
    }
}