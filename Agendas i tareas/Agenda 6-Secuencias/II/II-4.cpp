/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        17-11-22                                          **/
/** Descripcio:  II-Guio Lab. Seq.-Ap. 4                           **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

/**
int main ()
{
    float p,ac;
    cin >> p;
    ac = p;
    while(p!=0.0) 
    {
        if(p>ac) ac=p;
        cin >> p;
    }
    if(ac!=0.0) cout << ac;
}
**/

//Este programa parte de recibir una secuencia de numeros reales (temperaturas) terminada en 0.0 y devuelve el numero mas alto de toda esta (temp. mas alta) a menos que sea 0.0. Por lo tanto su esquema es el de recorrido.

int main()
{
    ifstream bcn("bcn_temp.txt");
    float temp,MAX_temp;
    string ciutat,MAX_ciutat;

    bcn>>temp>>ciutat;
    MAX_ciutat=ciutat;
    MAX_temp=temp;
    while(bcn>>temp>>ciutat)
    {
        if(MAX_temp<temp)
        {
            MAX_temp=temp;
            MAX_ciutat=ciutat;
        }
    }
    cout<<MAX_temp<<" "<<MAX_ciutat<<endl;
}

//La temperatura mes alta la te Bellpuig, amb una marca de 28.