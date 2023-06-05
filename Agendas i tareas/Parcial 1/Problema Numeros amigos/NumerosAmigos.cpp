/** 
A entregar .cpp y fichero .txt de resultados en Atenea, fecha límite 24 de octubre, 15:00
Se dice que dos numeros enteros positivos a v o son amidables si a es laual a a suma de los divisores oropios de o v o es
igual a la suma de los divisores propios de a el se considera divisor propio. pero el oropio numero no)
Un ejemplo de números amigables son el 220 y el 284, ya que:
Los divisores propios de 220 son 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 y 110, que suman 284.
Los divisores propios de 284 son 1, 2, 4, 71 y 142, que suman 220.
Escribid un subprograma que retorne si dos enteros positivos pasados como parametros son o no amigables.
Escribid un programa completo que, usando el subprograma previo (y cualquier otro que consideréis oportuno
diseñar), guarde en un fichero todos las parejas de numeros amigables menores a 100,000
**/
#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

bool amigo(int n1,int n2)
{
    int suma1=0,suma2=0;
    for(int k=1; k<=(n1/2); k++)
    {
        if(n1%k==0)
        {
            suma1+=k;
        }
        else;
    }
    for(int k=1; k<=(n2/2); k++)
    {
        if(n2%k==0)
        {
            suma2+=k;
        }
        else;
    }
    if(suma1==n2 && suma2==n1) return true;
    else return false;
}

int suma(int n)
{
    int sum;
    for(int k=1;k<=(n/2);k++)
    {
        if(n%k==0) sum*=k;
        else;
    }
    return sum;
}

int main()
{
    ofstream res("resultados.txt");
    for(int k=1; k<=100000; k++)
    {
        if(amigo(k,suma(k))) res<<k<<" "<<suma(k)<<endl;
        else;
    }
}