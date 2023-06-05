/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        25/09/22                                          **/
/** Descripci�:  A9                                                **/
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

    float base, altura, radio;
    char ToC;

    //SENT�NCIES

    cout<<"Calculo de areas - Elige una figura geometrica:"<<endl;
    cout<<"a - Triangulo"<<endl<<"b - Circulo"<<endl;
    cout<<"¿Que figura quieres calcular (escribe T o C)?"; cin>>ToC;
    if(ToC=='T')
    {
        cout<<"Escribe la base: "; cin>>base;
        cout<<"Escribe la altura: "; cin>>altura;
        cout<<"Un triangulo de base "<<base<<" y altura "<<altura<<" tiene un area de "<<(base*altura)/2.00<<endl;
    }
    else if(ToC=='C')
    {
        cout<<"Escribe el radio: "; cin>>radio;
        cout<<"Un circulo de radio "<<radio<<" tiene un area "<<M_PI*(radio*radio)<<endl;
    }
    else cout<<"Error al elegir, reintente..."<<endl;

    return 0;
}