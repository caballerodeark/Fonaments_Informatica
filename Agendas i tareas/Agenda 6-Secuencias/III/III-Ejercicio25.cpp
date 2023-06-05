/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        16-11-2022                                        **/
/** Descripcio:  Agenda 6-III-Ejercicio 25                         **/
/********************************************************************/

// 25) Donada una seqüència de zeros i uns acabada en -1, dir quin és la sèrie més llarga (zeros o uns).

#include <iostream>
#include <stdlib.h>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    // DECLARACIO DE VARIABLES

    int lect,cont_1=0,cont_0=0,cont_0_MAX=0,cont_1_MAX=0,pos=0,pos_1_MAX,pos_0_MAX,nums;

    //SENTENCIES

    while(cin>>lect)
    {
        if(lect!=-1)
        {
            if(lect==0)
            {
                if(nums!=0)
                {
                    if(cont_1>cont_1_MAX)
                    {
                        cont_1_MAX=cont_1;
                        pos_1_MAX=pos;
                    }
                    pos++;
                    cont_1=0;
                    nums=0;
                }
                cont_0++;
            }
            else
            {
                if(nums!=1)
                {
                    if(cont_0>cont_0_MAX)
                    {
                        cont_0_MAX=cont_0;
                        pos_0_MAX=pos;
                    }
                    pos++;
                    cont_0=0;
                    nums=1;
                }
                cont_1++;
            }
        }
        else
        {
            if(cont_0_MAX>cont_1_MAX)
            {
                cout<<"La serie de numeros iguales mas larga es la numero "<<pos_0_MAX<<" compuesta por "<<cont_0_MAX<<" ceros seguidos."<<endl;
            }
            else
            {
                cout<<"La serie de numeros iguales mas larga es la numero "<<pos_1_MAX<<" compuesta por "<<cont_1_MAX<<" unos seguidos."<<endl;
            }
        }
    }

    return 0;
}