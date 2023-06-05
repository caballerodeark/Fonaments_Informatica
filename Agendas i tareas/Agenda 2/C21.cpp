/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        25/09/22                                          **/
/** Descripci�:  C19                                               **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    // DECLARACIO DE VARIABLES

    float r1,r2,r3;

    //SENT�NCIES

    cout<<"Numero r1 (entre -999 y 999): "; cin>>r1;
    cout<<"Numero r2 (entre -999 y 999): "; cin>>r2;
    cout<<"Numero r3 (entre -999 y 999): "; cin>>r3;

    if((r1<-999 || r1>999) || (r2<-999 || r2>999) || (r3<-999 || r3>999)) cout<<"Parametros fuera de rango, vuelva a intentar..."<<endl;
    else
    {
        if(r1>r2 && r1>r3)
        {
            int R1=int(r1);
            cout<<"El entero de r1 es "<<R1;
            if(R1%2==0)
            {
                cout<<" y es par."<<endl;
            }
            else cout<<" y es impar."<<endl;
        }
        else if(r2>r1 && r2>r3)
        {
            r2=r2/r1;
            cout<<"El r2 es ahora el cociente entre el mismo y r1, que es "<<r2<<endl;
        }
        else if(r3>r1 && r3>r2)
        {
            if((int(r3)/int(r1))%3==0) cout<<"El valor de la division entera de r3 entre r1 es multiple de 3."<<endl;
            else cout<<"El valor de la division entera de r3 entre r1 no es multiple de 3."<<endl;
        }
        else cout<<"Igualdad de numeros"<<endl;
        if(r1>=0 && r2>=0 && r3>=0) cout<<"El producto de los tres es "<<r1*r2*r3<<endl;
    }
    
    return 0;
}