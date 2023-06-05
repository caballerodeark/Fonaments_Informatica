#include <iostream>
#include <fstream>
#include <vector>
#include <stdlib.h>
using namespace std;

const int A=10000,S=30;

struct Aposta
{
    int data; //format aaaammdd
    string dni;
    float teupremi;
    int bid[5]; //aposta de numeros entre 1 i 50;
};
typedef Aposta LApostes[A];

struct Sorteig
{
    int data;
    int ComboWin[5]; //combinacio guanyadora
    float p3,p4,p5; //premi per als encerts de 3,4 o 5 numeros
};
typedef Sorteig LSorteig[S];

//A

bool numguany(int num,Sorteig as)
{
    for(int k=0;k<5;k++)
    {
        if(as.ComboWin[k]==num) return true;
    }
    return false;
}

//B

void premiono(Aposta& a,LSorteig as)
{
    bool xd=false;
    Sorteig g;
    for(int k=0;k<S && !xd;k++)
    {
        if(as[k].data==a.data)
        {
            g=as[k];
            xd=true;
        }
    }
    if(xd)
    {
        int cant=0;
        for(int k=0;k<5;k++)
        {
            if(numguany(a.bid[k],g)) cant++;
        }
        if(cant<3) a.teupremi=0;
        else
        {
            if(cant==5) a.teupremi=g.p5;
            else
            {
                if(cant==4) a.teupremi=g.p4;
                else a.teupremi=g.p3;
            }
        }
    }
    else cout<<"No hi ha sorteig per a la data"<<endl;
}