/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        Agenda 3 (03/10/22)                               **/
/** Descripcio:  Ejemplo 3 Control 1                               **/
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
    ofstream resultado("resultado.txt");
    char ID;
    string nom;
    int temps,tempd,h,m,numA,numB,numC,sin,num;
    float km,minA,minB,minC,prom;

    //SENTENCIES

    while(carrera>>ID>>nom>>temps>>km>>tempd) //Operar con fichero para posteriormente obtener resultados
    {
        num++;
        h=(temps/100);
        temps=(temps-(h*100)+(60*h))-tempd;
        m=100/(km/temps);
        h=m/60;
        m-=(h*60)+(h*100);
        cout<<m<<" "<<nom<<endl;
        if(ID>='a' && ID<='z')
        {
            if(ID>='a' && ID<='s') //Categoria A i B
            {
                if(ID>='a' && ID<='h') //Categoria A
                {
                    minA+=m;
                    numA++;
                }
                else //Categoria B
                {
                    minB+=m;
                    numB++;
                }
            }
            else //Categoria C
            {
                minC+=m;
                numC++;
            }
        }
        else sin++; //Sense categoria
    }

    //Calcular promedios de grupos, fichero ofstream i porcentaje sin categoria

    minA=minA/numA;
    h=minA/60;
    m=minA-(60*h);
    cout<<"Promedi temps categoria A: "<<h<<" hores i "<<m<<" minuts"<<endl;
    resultado<<"Promedi temps categoria A: "<<h<<" hores i "<<m<<" minuts"<<endl;

    minB=minB/numB;
    h=minB/60;
    m=minB-(60*h);
    cout<<"Promedi temps categoria B: "<<h<<" hores i "<<m<<" minuts"<<endl;
    resultado<<"Promedi temps categoria B: "<<h<<" hores i "<<m<<" minuts"<<endl;

    minC=minC/numC;
    h=minC/60;
    m=minC-(60*h);
    cout<<"Promedi temps categoria C: "<<h<<" hores i "<<m<<" minuts"<<endl;
    resultado<<"Promedi temps categoria C: "<<h<<" hores i "<<m<<" minuts"<<endl;

    if(minA<minB)
    {
        if(minB>minC) cout<<"Categoria B es la guanyadora."<<endl;
        else cout<<"Categoria C es la guanyadora."<<endl;
    }
    else
    {
        if(minA>minC) cout<<"Categoria A es la guanyadora."<<endl;
        else cout<<"Categoria C es la guanyadora."<<endl;
    }

    resultado<<"Porcentaje de personas sin categoria: "<<(sin/num)*100<<"%"<<endl;

    return 0;
}