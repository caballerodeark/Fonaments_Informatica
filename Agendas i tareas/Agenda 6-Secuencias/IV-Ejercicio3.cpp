/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        16-11-2022                                        **/
/** Descripcio:  Agenda 6-IV-Ejercicio 3                           **/
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

    ifstream carrera("carrera.txt");
    int h,h_MAX=235959,h_MIN=0;
    string nom,nom_MAX;

    //SENTENCIES

    while(carrera>>nom>>h)
    {
        if(nom!="FI" && h!=0)
        {
            if(h<h_MAX)
            {
                h_MAX=h;
                nom_MAX=nom;
            }
            else
            {
                if(h>h_MIN)
                {
                    h_MIN=h;
                }
            }
        }
    }
    cout<<"El ganador es "<<nom_MAX<<" quien ha llegado a las "<<h_MAX<<endl;
    cout<<"La hora de llegada del ultimo corredor es a las "<<h_MIN<<endl;

}