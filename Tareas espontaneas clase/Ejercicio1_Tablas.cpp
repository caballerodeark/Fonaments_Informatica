#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    const int N=500;
    int A=1,B=2,Copias_Imp[N],C=3,D=4;
    for(int k=0; k<N; ++k)
    {
        if(k==0) Copias_Imp[k]=500;
        else Copias_Imp[k]=Copias_Imp[k-1]-1;
    }
//Comprobar mediante
    for(int k=0;k<N;++k)
    {
        cout<<k+1<<"--> "<<Copias_Imp[k]<<endl;
    }

}