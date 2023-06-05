#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ifstream Q("El_QuijoteLimpio.txt");
    vector<string> pmayus;
    string p;
    bool nueva;
    while(Q>>p)
    {
        if(p[0]>'A' && p[0]<'Z')
        {
            nueva=true;
            for(int k=0;k<pmayus.size();k++)
            {
                if(pmayus[k]==p) nueva=false;
            }
            if(nueva) pmayus.push_back(p);
        }
    }
    for(int k=0;k<pmayus.size();k++)
    {
        cout<<pmayus[k]<<" ";
    }
    cout<<pmayus.size()<<endl;
}