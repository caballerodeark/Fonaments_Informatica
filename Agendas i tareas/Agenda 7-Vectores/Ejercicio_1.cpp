/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Descripcio:  Agenda 7-Ejercicio 1                              **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <vector>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

void busca_edades(ifstream& P,int c,string& nom,vector<int>& muj,vector<int>& hom,vector<int>& tot)
{
    int cod,m,h,t,ed;
    string n,a,b,re,d,e,f;
    P>>a>>b>>re>>d>>e>>f;
    while(P>>cod>>n>>ed>>h>>m>>t)
    {
        if(cod==c)
        {
            hom.push_back(h);
            muj.push_back(m);
            tot.push_back(t);
        }
    }
    nom=n;
}

void Reporte1(int c,string nom,ofstream& T,vector<int> muj,vector<int> hom,vector<int> tot)
{
    T<<"Codigo: "<<c<<endl<<"Municipio: "<<nom<<endl;
    int to=0,m=0,h=0,ed,dif,dif_max=0;
    for(int k=0;k<tot.size();k++)
    {
        to+=tot[k];
        h+=hom[k];
        m+=muj[k];
        dif=muj[k]-hom[k];
        if(dif<0) dif*=-1;
        if(dif>dif_max)
        {
            dif_max=dif;
            ed=k+1;
        }
        T<<hom[k]<<" "<<muj[k]<<" "<<tot[k]<<endl;
    }
    cout<<"Total de habitantes del municipio Barcelona: 1620809, hombres "<<100*(float(h)/to)<<"% y mujeres "<<100*(float(m)/to)<<"%"<<endl;
    cout<<"En la edad de "<<ed<<" anyos existe la mayor diferencia. Hay "<<dif_max;
    if(muj[ed--]>hom[ed--]) cout<<" mujeres mas que hombres."<<endl;
    else cout<<" hombres mas que hombres."<<endl;
    
}

void Reporte2(int a,int b,vector<int> muj,vector<int> hom,vector<int> tot)
{
    int m=0,h=0,t=0,aux=a;
    while(aux<=b)
    {
        if(hom[a--]>muj[a--])
        {
            cout<<"Edad: "<<aux<<", hay "<<hom[aux--]-muj[aux--]<<" hombres mas que mujeres"<<endl;
        }
        h+=hom[a--];
        m+=muj[a--];
        t+=tot[a--];
        aux++;
    }
    if(t==0)
    {
        cout<<"No hay habitantes en el rango solicitado."<<endl;
    }
    else
    {
        cout<<"Habitantes en el rango de edades solicitado: "<<t<<endl;
        cout<<"--> % dones "<<(float(m)/t)*100<<endl;
        cout<<"--> % homes "<<(float(h)/t)*100<<endl;
    }
    
}

int main ()
{
    // DECLARACIO DE VARIABLES

    ifstream P("PoblacionCatalunyaEdades.txt");
    ofstream T("MunicipioBuscado.txt");
    vector<int> muj,hom,tot;
    int c,a,b;
    string nom;

    //SENTENCIES

    cout<<"Codigo Municipio ? "; cin>>c;
    busca_edades(P,c,nom,muj,hom,tot);
    Reporte1(c,nom,T,muj,hom,tot);
    cout<<"Rango de edades ? "; cin>>a>>b;
    Reporte2(a,b,muj,hom,tot);

    return 0;
}