/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        Agenda 5 (20/10/22)                               **/
/** Descripcio:  Preparacion 1er Parcial 2                         **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

// DECLARACIO DE CONSTANTS

/************************ PROGRAMA PRINCIPAL ************************/

void nums(int a,int b,int& ab,int& def,int& perf)
{
    ab=0;
    def=0;
    perf=0;
    for(int k=a;k<=b;k++)
    {
        int sum=0;
        for(int j=1;j<=(k/2);k++)
        {
            if(k%j==0) sum+=j;
            else;
        }
        if(sum==k) perf++;
        else
        {
            if(sum<k) def++;
            else ab++;
        }
    }
}

int main()
{
    // DECLARACIO DE VARIABLES

    int a,b,ab,def,perf;

    //SENTENCIES

    cout<<"Define intervalo de enteros positivos [a,b]:"<<endl;
    cout<<"a: "; cin>>a;
    cout<<"b: "; cin>>b;
    nums(a,b,ab,def,perf);
    cout<<"Abundantes: "<<ab<<endl;
    cout<<"Deficientes: "<<def<<endl;
    cout<<"Perfectos: "<<perf<<endl;

    return 0;
}