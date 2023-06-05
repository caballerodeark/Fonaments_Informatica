#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
using namespace std;

int existeix(int nent,vector<int> validos)
{
    for(int k=0;k<validos.size();k++)
    {
        if(validos[k]==nent) return k;
    }
    return -1;
}

int main()
{
    ifstream f("entrades.txt");
    ofstream o("valides.txt");
    string dni;
    int nent,invalidos=0;
    vector<string> dnis;
    vector<int> validos;

    while(f>>dni>>nent)
    {
        if(existeix(nent,validos)==-1)
        {
            dnis.push_back(dni);
            validos.push_back(nent);
        }
        else invalidos++;
    }
    cout<<"Se han detectado un total de "<<invalidos<<" entradas invalidas en el fichero."<<endl;
    for(int k=0;k<validos.size();k++)
    {
        o<<validos[k]<<" "<<dnis[k]<<endl;
    }
}
