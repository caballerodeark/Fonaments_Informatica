/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        Agenda 5 (20/10/22)                               **/
/** Descripcio:  Problema K                                        **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

// DECLARACIO DE CONSTANTS

/************************ PROGRAMA PRINCIPAL ************************/

//1)

int resta(int n, int m)
{
    int aux;
    while(n!=0 && m!=0)
    {
        if((n%10))
    }
}

//2)

int main()
{
    // DECLARACIO DE VARIABLES

    ifstream in("Mod4_Prim20.txt");
    int res,n,m,cuenta=0,par=0,div3=0;

    //SENTENCIES

    while(in>>n>>m)
    {
        res=resta(n,m);
        cout<<res<<endl;
        if(res%2==0) 
        {
            par++;
            cuenta++;
        }
        else if(res%3==0) 
        {
            div3++;
            cuenta++;
        }
        else cuenta++;
    }
    cout<<"Percentatge de parells: "<<float(par/cuenta)*100.00<<"%"<<endl;
    cout<<"Percentatge múltiples de 3: "<<float(div3/cuenta)*100.00<<"%"<<endl;

    return 0;
}