/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        Agenda 5 (20/10/22)                               **/
/** Descripcio:  Problema K                                        **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

string provincia(int CP)
{
    CP/=1000;
    if(CP==8) return "Barcelona";
    else if(CP==17) return "Girona";
    else if(CP==25) return "Lleida";
    else if(CP==43) return "Tarragona";
    else return "ERROR";
}

int main()
{
    // DECLARACIO DE VARIABLES

    ifstream cp("CP.txt");
    int CP;

    //SENTENCIES

    while(cp>>CP)
    {
        cout<<CP<<":"<<provincia(CP)<<endl;
    }

    return 0;
}