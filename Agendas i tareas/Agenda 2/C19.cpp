/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        25/09/22                                          **/
/** Descripci�:  C19                                               **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    // DECLARACIO DE VARIABLES

    int e1,e2,aux;

    //SENT�NCIES

    cout<<"e1 (entre 0 i 1000): "; cin>>e1;
    cout<<"e2 (entre 0 i 1000): "; cin>>e2;

    if((e1>1000 || e1<0) || (e2>1000 || e2<0)) cout<<"valores fuera de sus rangos vuelva a empezar";
    else 
    {
        if(e1%3==0 && e1%5==0)
        {
            aux=e1;
            e1=e2;
            e2=aux;
            cout<<"Residuo de e1 i e2 de valores intercambiados: "<<e1%e2<<endl;
        }
        else if(e1%7==0)
        {
            e1=e1/e2;
            cout<<"Recalculado de e1 como division entera del mismo con e2: "<<e1<<endl;
        }
        else if(e1%11==0 && e2%5==0)
        {
            if(e1>e2) cout<<"Producto: "<<e1*e2<<endl;
            else if(e2>e1) cout<<"Division real e2 entre e1: "<<float(e2/e1)<<endl;
            else cout<<"Cuadrado de la diferencia: "<<(e1-e2)*(e1-e2)<<endl;
        }
        else cout<<"Cuadrado de la diferencia: "<<(e1-e2)*(e1-e2)<<endl; 
    }
    if(e1%2==0 && e2%2==0) 
    {
        while((e1/10)>1)
        {
            e1=e1/10;
        }
        cout<<"Primer digito de e1: "<<e1<<endl;
    }

    return 0;
}