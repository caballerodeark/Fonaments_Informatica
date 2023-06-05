#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//A

struct asigres
{
    int codi;
    float nota;
};
typedef asigres llista_resultats[10];

struct alumne
{
    string dni;
    int N;
    llista_resultats llista;
};
typedef alumne alumnes[50];

struct asignaturesfi
{
    int codi;
    string nom_p;
};
typedef asignaturesfi asignatures[10];

//B

float mitjana(int codi,alumnes a)
{
    float suma=0;
    int cant=0;
    for(int k=0;k<50;k++)
    {
        bool encontrada=false;
        for(int l=0;l<a[k].N && !encontrada;l++)
        {
            if(a[k].llista[l].codi==codi)
            {
                cant++;
                suma+=a[k].llista[l].nota;
                encontrada=true;
            }
        }
    }
    return suma/cant;
}

//C

//c.1)

void fase_ini_llegeix(asignatures& as,alumnes& al);

int main()
{
    asignatures as;
    alumnes al;
    int op;

    fase_ini_llegeix(as,al);

    //c.2)

    cout<<"Escull l'opcio:"<<endl;
    cout<<"1.Nota mitjana asignatura"<<endl;
    cout<<"2.Mitjanes asignatures"<<endl;
    cin>>op;
    if(!(op==1 || op==2)) cout<<"opcio icorrecta"<<endl;
    else 
    {
        if(op==1)
        {
            int codi;
            cout<<"Codi asignatura: "; cin>>codi;
            cout<<"La mitjana de l'asignatura d'identificador "<<codi<<" es de "<<mitjana(codi,al)<<"."<<endl;
        }
        else
        {
            cout<<"Llistat asignatures:"<<endl<<endl;
            for(int k=0;k<10;k++)
            {
                cout<<"Codi: "<<as[k].codi<<endl;
                cout<<"Professor: "<<as[k].nom_p<<endl;
                cout<<"Mitjana: "<<mitjana(as[k].codi,al)<<endl;
                cout<<endl;
            }
        }
    }
}