/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        Agenda 4 (13/10/22)                               **/
/** Descripcio:  Ejercicio 1                                       **/
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

    ifstream numeros_enteros("numeros_enteros.txt");
    ofstream texto("texto.txt");
    int num,sumcar,sumcar_max,num_min,num_max,num_assist;
    float dig,may,min,sign,cant,voc,cons,letrs;
    char letr;

    //SENTENCIES

    while(numeros_enteros>>num)
    {
        //a)
        if(num<num_min) num_min=num;
        //b)
        sumcar=0;
        num=num_assist;
        while(num_assist!=0)
        {
            sumcar+=num_assist%10;
            num_assist/=10;
            if(sumcar_max<sumcar) 
            {
                sumcar_max=sumcar;
                num_max=num;
            }
        }
        //c), d) y e)
        cant++; letr=num%1000;
        texto<<letr;
        if(!((letr>'0' && letr<'9') || (letr>'a' && letr<'z') || (letr>'A' && letr<'Z'))) sign++;
        else
        {
            if(letr>'0' && letr<'9') dig++;
            else
            {
                letrs++;
                if(letr>'a' && letr<'z') 
                {
                    min++;
                    if(letr=='a' || letr=='e' || letr=='i' || letr=='o' || letr=='u') voc++;
                    else cons++;
                }
                else 
                {
                    may++;
                    if(letr=='A' || letr=='E' || letr=='I' || letr=='O' || letr=='U') voc++;
                    else cons++;
                }
            }
        }
    }
    cout<<"El numero menor de la serie es: "<<num_min<<endl;
    cout<<"El numero cuya suma de sus digitos es mayor es el: "<<num_max<<" con suma de "<<sumcar_max<<endl;
    if (sign>may && sign>min && sign>dig) cout<<"El grupo de caracteres con más instancias es el de signos"<<endl;
    else
    {
        if(dig>may && dig>min) cout<<"El grupo de caracteres con más instancias es el de digitos"<<endl;
        else
        {
            if(may>min) cout<<"El grupo de caracteres con más instancias es el de mayusculas"<<endl;
            else cout<<"El grupo de caracteres con más instancias es el de minusculas"<<endl;
        }
    }
    texto<<"Minusculas:  "<<(min/cant)*100<<"%,  Mayusculas: "<<(may/cant)*100<<"%,  Digitos: "<<(dig/cant)*100<<"%  y  Simbolos: "<<(sign/cant)*100<<"%"<<endl;
    texto<<"Letras: "<<(letrs/cant)*100<<"%"<<endl<<"Vocales: "<<(voc/letrs)*100<<"%"<<endl<<"Consonantes: "<<(cons/letrs)*100<<"%";

    return 0;
}