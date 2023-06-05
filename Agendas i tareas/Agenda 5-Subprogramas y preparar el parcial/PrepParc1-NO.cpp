/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        Agenda 5 (20/10/22)                               **/
/** Descripcio:  Preparacion 1er Parcial 1                         **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <climits>
using namespace std;

// DECLARACIO DE CONSTANTS

/************************ PROGRAMA PRINCIPAL ************************/

int PRODucte(int n1,int n2)
{
    if(n1<0 || n2<0)
    {
        if(n1<0 && n2<0)
        {
            n1=-n1; n2=-n2;
            for(int k=1; k<=n2; k++)
            {
                n1+=n1;
            }
            return n1;
        }
        else
        {
            if(n1<0)
            {
                n1=-n1;
                for(int k=1; k<=n2; k++)
                {
                    n1+=n1;
                }
                return -n1;
            }
            else
            {
                n2=-n2;
                for(int k=1; k<=n2; k++)
                {
                    n1+=n1;
                }
                return -n1;
            }
        }
    }
    else
    {
        for(int k=1; k<=n2; k++)
        {
            n1+=n1;
        }
        return n1;
    }
    
}

int POTencia(int base,int exp)
{
    int aux=base;
    if(exp<0)
    {
        exp=-exp;
        for(int k=1;k<exp;k++)
        {
            base=PRODucte(base,aux);
        }
        return DIVisio(1,base,aux);
    }
    else
    {
        for(int k=1;k<exp;k++)
        {
            base=PRODucte(base,aux);
        }
        return base;
    }
    
}

int DIVisio(int D,int d,int& r)
{
    if(d==0) 
    {
        if(D>0) return INT_MAX;
        else return INT_MIN;
    }
    else
    {
        int aux=0;
        bool neg=false,sin=true;
        if(D==0) return 0;
        else
        {
            if(D<0 || d<0)
            {
                if(D<0 && d<0)
                {
                    D=-D; d=-d;
                }
                else
                {
                    if(D<0)
                    {
                        D=-D;
                        neg=true;
                    }
                    else
                    {
                        d=-d;
                        neg=true;
                    }
                }

            }
            for(int k=0; aux<=D; k++)
            {
                aux+=d;
                if(aux==D)
                {
                    sin=false;
                    r=0;
                    if(neg) return -k;
                    else return k;
                }
            }
            if(sin)
            {
                D-=aux;
                
            }
        }
    }
}

int main()
{
    // DECLARACIO DE VARIABLES

    int n1,n2,r;
    char op;

    //SENTENCIES

    cin>>n1>>op>>n2;

    if(op=='+') return n1+n2;
    else if(op=='-') return n1-n2;
    else if(op=='*')
    {
        cout<<PRODucte(n1,n2)<<endl;
    }
    else if(op=='/' || op=='%')
    {
        int q=DIVisio(n1,n2,r);
        if(op=='/') cout<<q<<endl;
        else cout<<r<<endl;
    }
    else if(op=='^')
    {
        cout<<POTencia(n1,n2)<<endl;
    }
    else cout<<"OPERACIO INVALIDA"<<endl;

    return 0;
}