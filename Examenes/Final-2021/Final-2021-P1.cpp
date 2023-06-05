#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>

using namespace std;

//1

typedef int seients[32][4];

struct bus
{
    string matricula,destino;
    seients asientos;
};

struct passtgers
{
    int dni;
    string nom,matricula;
};

//2

int ciutat(string ciudad,vector<bus> buses)
{
    for(int k=0;k<buses.size();k++)
    {
        if(ciudad==buses[k].destino) return k;
    }
    return -1;
}

//3

struct info
{
    int p1,p2;
    string mat;
};

info seient(int dni,bus& b)
{
    bool encontrado=false;
    for(int k=0;k<32 && !encontrado;k++)
    {
        for(int l=0;l<4 && !encontrado;l++)
        {
            if(b.asientos[k][l]==0)
            {
                b.asientos[k][l]=dni;
                encontrado=true;
                return {k,l,b.matricula};
            }
        }
    }
    return {-1,-1,"-1"};
}

//4

info viatje(int dni,string ciudad,vector<bus>& buses)
{
    if(ciutat(ciudad,buses)!=-1)
    {
        if(seient(dni,buses[ciutat(ciudad,buses)])!={-1,-1,"-1"}) 
    }
}