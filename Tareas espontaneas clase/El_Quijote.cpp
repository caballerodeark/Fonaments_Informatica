#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream Q("El_QuijoteLimpio.txt");
    string p,p_max;
    int p_Max=0;
    while(Q>>p)
    {
        if(p.size()>p_Max)
        {
            p_Max=p.size();
            p_max=p;
        }
    }
    cout<<"Palabra mas larga de El Quijote: "<<p_max<<" "<<p_Max<<endl;
}