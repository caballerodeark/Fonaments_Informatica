#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

struct tHora
{
    int h,m;
};

struct tPunto2D
{
    float x,y;
};

struct tPersona
{
    string nombre,apellidos,estado_civil,DNI;
    int edad;
};

int main()
{
    tHora H;
    tPunto2D P2D;
    tPersona P;
    H.h=10; H.m=22;
    P2D.x=5.0; P2D.y=3.0;
    P.nombre="Groucho"; P.apellidos="Marx Neumann"; P.estado_civil="soltero"; P.edad=40; P.DNI="63086708P";
    cout<<"Hora: "<<H.h<<":"<<H.m<<endl;
    cout<<"Punto 2D: ("<<P2D.x<<","<<P2D.y<<")"<<endl;
    cout<<"Persona: "<<endl;
    cout<<"Nombre: "<<P.nombre<<endl;
    cout<<"Apellidos: "<<P.apellidos<<endl;
    cout<<"Estado civil: "<<P.estado_civil<<endl;
    cout<<"Edad: "<<P.edad<<" años"<<endl;
    cout<<"DNI: "<<P.DNI<<endl;
}