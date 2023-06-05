#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;

//a)
float dist(int x1,int y1,int x2,int y2)
{
    x1-=x2;
    y1-=y2;
    return sqrt(x1^2+y1^2);
}
//b)
void triangle(int x1,int y1,int x2,int y2,int x3,int y3,int& eq,int& iso,int& esc)
{
    float dist1,dist2,dist3;
    dist1=dist(x1,y1,x2,y2);
    dist2=dist(x1,y1,x3,y3);
    dist3=dist(x2,y2,x3,y3);
    if(dist1!=dist2 || dist1!=dist3 || dist2!=dist3)
    {
        if(dist1==dist2 || dist1==dist3 || dist2==dist3) iso++;
        else esc++;
    }
    else eq++;
}
//c)
int main()
{
    ifstream tri("Triangles.txt");
    int x1,x2,x3,y1,y2,y3,count=0,eq=0,iso=0,esc=0;
    float l,lmax=0;
    while(tri>>x1>>y1>>x2>>y2>>x3>>y3)
    {
        count++;
        triangle(x1,y1,x2,y2,x3,y3,eq,iso,esc);
        l=dist(x1,y1,x2,y2)+dist(x1,y1,x3,y3)+dist(x2,y2,x3,y3);
        if(l>lmax) lmax=l;
    }
    cout<<"1.Percentatges:"<<endl;
    cout<<"Equilaters: "<<float(eq/count)*100<<"%"<<endl;
    cout<<"Isosceles: "<<float(iso/count)*100<<"%"<<endl;
    cout<<"Escalés: "<<float(esc/count)*100<<"%"<<endl;
    cout<<"2.Llargaria mes gran: "<<lmax<<endl;
}