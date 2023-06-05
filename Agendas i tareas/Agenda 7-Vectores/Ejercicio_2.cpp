/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Descripcio:  Agenda 7-Ejercicio 2                              **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <vector>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int dateado(int d,int m,int a)
{
    return d+(m*100)+(a*10000);
}

int main ()
{
    // DECLARACIO DE VARIABLES

    ifstream T("opos.txt");
    ofstream P("IDs.txt");
    string DNI;
    int data,cant=0,d,m,a,dataesc;
    vector<string> dnis;

    //SENTENCIES

    cout<<"Data(dia,mes i any per separat): "; cin>>d>>m>>a;
    dataesc=dateado(d,m,a);
    while(T>>data>>DNI)
    {
        if(data>dataesc)
        {
            dnis.push_back(DNI);
        }
    }
    cout<<"S'han pogut guardar "<<dnis.size()<<" opositors al fitxer."<<endl;
    while(dnis.size()!=0)
    {
        int k;
        k=dnis.size();
        k--;
        P<<dnis[k]<<endl;
        dnis.pop_back();
    }


    return 0;
}