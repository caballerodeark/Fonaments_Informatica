/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        Agenda 3                                          **/
/** Descripcio:  Ejercicio 0                                       **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

int main ()
{
    // DECLARACIO DE VARIABLES

    int okupa;
    char icog;
    int aux=0,dig=0;
    bool digcor=false,letrcor=false;

    //SENTENCIES

    cout<<"Num okupa: "; cin>>okupa;
    cout<<"Caracter icog: "; cin>>icog;

    aux=okupa; //igualar int auxiliar de okupa para cuenta de digitos

    while(aux!=0) //cuenta de digitos
    {
        dig++;
        aux/=10;
    }

    if(dig==4) digcor=true;
    else digcor=false; //comptobacion num de digitos correctos

    if(!((icog>='a' && icog<='z') || (icog>='A' && icog<='Z'))) letrcor=false;
    else letrcor=true; //comprobar que caracter icog es letra

    if(digcor && letrcor) //Todo correcto? Pues adelante
    {
        cout<<"Dirigete al aula: "; //1er mensaje
        okupa/=10; //Quito digito que siempre sabemos que es 1
        if(icog>='a' && icog<='z') icog+=char(icog-('a'-'A'));
        if(icog>='T' && icog<='Z') cout<<4<<endl; //Caso mas facil
        else
        {
            if(icog>='N' && icog<='S')
            {
                if(okupa%10==1) cout<<3<<endl;
                else cout<<4<<endl;
            }
            else
            {
                if(icog>='H' && icog<='M')
                {
                    if((okupa/10)%10==1) cout<<2<<endl;
                    else cout<<4<<endl;
                }
                else
                {
                    if((okupa/100)%10==1) cout<<1<<endl;
                    else cout<<4<<endl;
                }
            }
        }
    }
    else cout<<"Dato incorrecto"<<endl; //Cuando no todo este correcto


    return 0;
}