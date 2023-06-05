/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Descripcio:  Control3-2018Q2v6                                 **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <vector>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

void notifica_clasificados(const vector<string>& Noms,char sexo);

int main ()
{
    // DECLARACIO DE VARIABLES

    ifstream Mt("Mtiempos.txt");
    vector<string> clas_nom_H,clas_nom_M;
    string nom;
    int min;
    char sexe;

    //SENTENCIES

    while(Mt>>nom>>min>>sexe)
    {
        if(sexe=='H')
        {
            if(min<240)
            {
                clas_nom_H.push_back(nom);
            }
        }
        else
        {
            if(min<270)
            {
                clas_nom_M.push_back(nom);
            }
        }
    }
    notifica_clasificados(clas_nom_H,'H');
    notifica_clasificados(clas_nom_M,'M');



}