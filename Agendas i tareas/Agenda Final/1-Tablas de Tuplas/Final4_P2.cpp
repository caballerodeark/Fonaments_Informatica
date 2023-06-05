/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Descripcio:  Agenda F.1-Final 4 P2                             **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <vector>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

struct prov
{
    int provincia,hombres,mujeres;
};

int main ()
{
    // DECLARACIO DE VARIABLES

    ifstream f("DiasEstanciaHospitales.txt");
    ofstream o("ResumenProvicias.txt");
    vector<prov> provincias;
    string x1,x2,x3,x4;
    int provi,enf,cant;
    char g;

    //SENTENCIES

    f>>x1>>x2>>x3>>x4;
    while(f>>provi>>enf>>cant>>g)
    {
        bool encontrado=false;
        for(int k=0;k<provincias.size() && !encontrado;k++)
        {
            if(provincias[k].provincia==provi)
            {
                if(cant!=-99)
                {
                    if(g=='H') provincias[k].hombres+=cant;
                    else provincias[k].mujeres+=cant;
                }
                encontrado=true;
            }
        }
        if(!encontrado)
        {
            prov provincia;
            provincia.provincia=provi;
            provincia.hombres=0;
            provincia.mujeres=0;
            if(cant!=-99)
            {
                if(g=='H') provincia.hombres+=cant;
                else provincia.mujeres+=cant;
            }
            provincias.push_back(provincia);
        }
    }
    for(int k=0;k<provincias.size();k++)
    {
        o<<provincias[k].provincia<<" "<<provincias[k].hombres<<" "<<provincias[k].mujeres<<endl;
    }
    cout<<"Se han agregado "<<provincias.size()<<" filas al fichero."<<endl;

    return 0;
}