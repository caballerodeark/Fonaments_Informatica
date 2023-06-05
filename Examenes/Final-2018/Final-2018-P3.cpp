#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

const int MAX=1000;

struct producte
{
    int ID;
    float preu;
    bool imatge;
};
typedef producte Lproducte[MAX];

struct vendedor
{
    int ID_vendedor,ID_producte;
    float preu;
};
typedef vendedor Lvendedor[MAX];

float venut(int ID,Lproducte productes)
{
    for(int k=0;k<MAX;k++)
    {
        if(productes[k].ID==ID) return productes[k].preu;
    }
    return -1;
}

void uala_llegir(Lproducte& productes,Lvendedor& vendedors);

int main()
{
    int dec,c_img=0,c_nimg=0;
    float p_img=0,p_nimg=0;
    Lproducte productes;
    Lvendedor vendedors;
    uala_llegir(productes,vendedors);
    cin>>dec;
    if(dec==1)
    {
        for(int k=0;k<MAX;k++)
        {
            if(productes[k].imatge)
            {
                c_img++;
                p_img+=productes[k].preu;
            }
            else
            {
                c_nimg++;
                p_nimg+=productes[k].preu;
            }
        }
        if(p_img/c_img>p_nimg/c_nimg) cout<<"Preu mitja de articles venuts amb imatge es major que els que no"<<endl;
        else cout<<"Preu mitja de articles venuts sense imatge majors que els que si"<<endl;
    }
    else
    {
        if(dec==2)
        {
            for(int k=0;k<MAX;k++)
            {
                if(venut(vendedors[k].ID_producte,productes)!=-1)
                {
                    if(venut(vendedors[k].ID_producte,productes)/vendedors[k].preu<=0.9)
                    {
                        cout<<vendedors[k].ID_vendedor<<endl;
                    }
                }
            }
        }
        else cout<<"ERROR"<<endl;
    }

}
