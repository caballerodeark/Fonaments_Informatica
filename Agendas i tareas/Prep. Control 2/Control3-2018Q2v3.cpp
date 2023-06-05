/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Descripcio:  Control3-2018Q2v3                                 **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <vector>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

void notifica_ganadores(const vector<string> dnis);

int main ()
{
    // DECLARACIO DE VARIABLES

    ifstream R("resultados.txt");
    vector<string> dnis,disc;
    vector<int> plazas;
    string DNI,as;
    int num;
    float n,nota;

    //SENTENCIES

    cout<<"Numero de plazas para cada disciplina: "; cin>>n;
    n--;
    while(R>>DNI>>nota>>as)
    {
        bool nueva=true;
        if(nota>=7)
        {
            for(int k=0;k<disc.size();k++)
            {
                if(as==disc[k])
                {
                    if(plazas[k]!=0) 
                    {
                        dnis.push_back(DNI);
                        plazas[k]--;
                    }
                    nueva=false;
                }
            }
            if(nueva)
            {
                disc.push_back(as);
                plazas.push_back(n);
                dnis.push_back(DNI);
            }
        }
    }
    notifica_ganadores(dnis);
}