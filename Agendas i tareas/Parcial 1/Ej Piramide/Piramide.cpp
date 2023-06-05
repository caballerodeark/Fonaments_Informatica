#include <iostream>
#include <stdlib.h>

using namespace std;

bool espiramide(int llaunes,int& files)
{
    for(int k=1;llaunes>=k;k++)
    {
        llaunes-=k;
        files++;
    }
    if(llaunes==0) return true;
    else 
    {
        files=0;
        return false;
    }
}

int main()
{
    int llaunes,files=0;

    cin>>llaunes;

    if(espiramide(llaunes,files)) cout<<"Es pot fer piramide."<<endl<<"Files: "<<files<<endl;
    else cout<<"No es pot."<<endl<<"Nombre de files: "<<files<<endl;
}