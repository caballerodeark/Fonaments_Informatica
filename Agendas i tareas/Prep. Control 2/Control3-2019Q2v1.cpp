/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Descripcio:  Control3-2019Q2v1                                 **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <vector>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int retorna_data(int data_actual,int periode)
{
    int k=0;
    while(periode%30==0)
    {
        periode-=30;
        data_actual-=100;
    }
    data_actual-=periode;
    return data_actual;
}

int main ()
{
    // DECLARACIO DE VARIABLES

    ifstream v("vendes.txt");
    int data_actual,codi,q_min,periode,d,c,q;
    bool sup=false;

    //SENTENCIES

    cout<<"Data actual(mmdd): "; cin>>data_actual;
    cout<<"Codi de producte a descatalogar/no descatalogar: "; cin>>codi;
    cout<<"Quantitat minima: "; cin>>q_min;
    cout<<"Periode en dies: "; cin>>periode;
    while(v>>d>>c>>q && !sup)
    {
        int data=retorna_data(data_actual,periode);
        if(d>=data)
        {
            if(c==codi)
            {
                q_min-=q;
            }
        }
        else sup=true;
    }
    if(q_min<0) cout<<codi<<" no descatalogat"<<endl;
    else cout<<codi<<" descatalogat"<<endl;
    
}