/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        30/09/22                                          **/
/** Descripcio:  Grup 3 - 3.3                                      **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    // DECLARACIO DE VARIABLES

    ifstream cognoms("cognoms-2016.txt");
    string cogel,pos,cog,freq1,freq2,por1,por2;
    bool encontrado=false;

    //SENTENCIES

    cout<<"Elige apellido: "; cin>>cogel;

    cognoms>>pos>>cog>>freq1>>por1>>freq2>>por2;

    while(cognoms>>pos>>cog>>freq1>>por1>>freq2>>por2 && !encontrado)
    {
        if(cog==cogel) 
        {
            cout<<pos<<" "<<cog<<" "<<freq1<<" "<<por1<<" "<<freq2<<" "<<por2;
            encontrado=true;
        }
    }

    return 0;
}