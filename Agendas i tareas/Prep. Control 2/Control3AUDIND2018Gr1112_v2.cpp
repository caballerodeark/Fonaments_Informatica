/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Descripcio:  Control3-2019Q2v2                                 **/
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

    ifstream l("lorzas.txt");
    int DNI,p,cant=0,dones=0,dones_90=0;
    char g;
    vector<int> dnis;

    //SENTENCIES

    while(l>>DNI>>g>>p)
    {
        cant++;
        if(g=='F')
        {
            dones++;
            if(p>90)
            {
                dones_90++;
                dnis.push_back(DNI);
            }
        }
    }
    if(dones>(cant-dones))
    {
        for(int k=0;k<dnis.size();k++)
        {
            cout<<dnis[k]<<endl;
        }
        if((dones_90%dones)>10) cout<<"Supera el 10% de dones."<<endl;
        else cout<<"No supera el 10% de dones."<<endl;
    }
    else cout<<"La mostra de pacients no reflecteix adequadament la poblaciò."<<endl;

}