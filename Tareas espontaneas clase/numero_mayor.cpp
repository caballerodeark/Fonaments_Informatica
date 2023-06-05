#include <iostream>
#include <stdlib.h>
using namespace std;

int main ()
{
 
    int n1,n2,n3;

    cout<<"n1: "; cin>>n1;
    cout<<"n2: "; cin>>n2;
    cout<<"n3: "; cin>>n3;

    if(n1>n2 && n1>n3) cout<<n1<<endl;
    else if(n2>n1 && n2>n3) cout<<n2<<endl;
    else if(n3>n1 && n3>n2) cout<<n3<<endl;
    else cout<<"Hay mas de un numero igual de valores mayores."<<endl;

    return 0;
}