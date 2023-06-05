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

    ifstream f("entradesLliures.txt");
    char t_eleg,tipus;
    int n_eleg,num;
    vector<int> ent;

    //SENTENCIES

    cout<<"Tipo de entrada: "; cin>>t_eleg;
    cout<<"Numero de entradas: "; cin>>n_eleg;
    
    int k=0;
    while(f>>num>>tipus && k<=n_eleg)
    {
        if(tipus==t_eleg)
        {
            ent.push_back(num);
            k++;
        }
    }
    if(k==n_eleg)
    {
        for(int j=0;j<ent.size();j++)
        {
            cout<<ent[j]<<endl;
        }
    }
    else
    {
        cout<<"No ha sigut possible:"<<endl;
        for(int j=0;j<ent.size();j++)
        {
            cout<<ent[j]<<endl;
        }
        cout<<"Han quedat pendents "<<n_eleg-k<<" entrades."<<endl;
    }

}