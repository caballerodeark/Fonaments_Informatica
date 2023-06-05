#include <iostream>
#include <stdlib.h>
using namespace std;


int main()
{
    string p;
    while(cin>>p && p!=".")
    {
        for(int k=0;k<p.size();k++)
        {
            cout<<p[((p.size()-1)-k)];
        }
        cout<<" ";
    }
}