/********************************************************************/
/** Nom autors:   Guillem Perez Sanchez                            **/
/**               Sonia Sahuquillo Guillen                         **/
/** Descripcio:   Proyecto Final FI 2022-23                        **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;

// DECLARACIO DE CONSTANTS

/************************ PROGRAMA PRINCIPAL ************************/

struct RNac //Tasa por cada 100.000 habitantes regulado por nacionalidad
{
    string nacionalidad;
    int any;
    float tasa;
};
const RNac Nac_nodata={"",0,0};

struct RHM //Tasa por cada 100.000 habitantes regulado por edad y sexo
{
    string edad,sexo;
    int any;
    float tasa;
};
const RHM HM_nodata={"","",0,0};

//La tasa por 100.000 habitantes se calcula con (Cantidad de refugiados (Nacionalidad/Sexo y edad)/Poblacion total en esas circumstancias)*100.000

//Trabajo con ficheros:

vector<RNac> lecturaRNac(ifstream& R_Nac) //Lectura de fichero de entidad RNac
{
    RNac A;
    vector<RNac> E;
    while(R_Nac>>A.nacionalidad>>A.any>>A.tasa)
    {
        E.push_back(A);
    }
    return E;
}

vector<RHM> lecturaRHM(ifstream& R_HM) //Lectura de fichero de entidad RHM
{
    RHM A;
    vector<RHM> E;
    while(R_HM>>A.edad>>A.sexo>>A.any>>A.tasa)
    {
        E.push_back(A);
    }
    return E;
}

void rellenaRNac(vector<RNac> datos,ofstream& of)
{
    for(int k=0;k<datos.size();k++)
    {
        of<<datos[k].nacionalidad<<" "<<datos[k].any<<" "<<datos[k].tasa<<endl;
    }
}

void rellenaRHM(vector<RHM> datos,ofstream& of)
{
    for(int k=0;k<datos.size();k++)
    {
        of<<datos[k].edad<<" "<<datos[k].sexo<<" "<<datos[k].any<<" "<<datos[k].tasa<<endl;
    }
}

//Obtener datos, en caso de que no exista el bloque, proyecta en pantalla que no existe:

RNac obtenRNac(string nac,int any,vector<RNac> datos,bool& lect)
{
    bool fallo=false;
    for(int k=0;k<datos.size() && !fallo;k++)
    {
        if(datos[k].nacionalidad==nac)
        {
            if(datos[k].any==any)
            {
                if(datos[k].tasa==-1)
                {
                    cout<<"No hay lectura"<<endl;
                    lect=false;
                    fallo=true;
                }
                else
                {
                    lect=true;
                    return datos[k];
                }
            }
        }
    }
    return Nac_nodata;
}

RHM obtenRHM(string edad,string sexo,int any,vector<RHM> datos,bool& lect)
{
    bool fallo=false;
    for(int k=0;k<datos.size() && !fallo;k++)
    {
        if(datos[k].edad==edad)
        {
            if(datos[k].sexo==sexo)
            {
                if(datos[k].any==any)
                {
                    if(datos[k].tasa==-1)
                    {
                        cout<<"No hay lectura"<<endl;
                        lect=false;
                        fallo=true;
                    }
                    else return datos[k];
                } 
            }
        }
    }
    return HM_nodata;
}

//Cambiar datos, devuelve en booleano si lo ha conseguido o no

bool cambiaRNac(vector<RNac>& datos,RNac n)
{
    for(int k=0;k<datos.size();k++)
    {
        if(datos[k].nacionalidad==n.nacionalidad)
        {
            if(datos[k].any==n.any)
            {
                datos[k]=n;
                return true;
            }
        }
    }
    return false;
}

bool cambiaRHM(vector<RHM>& datos,RHM n)
{
    for(int k=0;k<datos.size();k++)
    {
        if(datos[k].edad==n.edad)
        {
            if(datos[k].sexo==n.sexo)
            {
                if(datos[k].any==n.any)
                {
                    datos[k]=n;
                    return true;
                }
            }
        }
    }
    return false;
}

//Mas lecturas...

void addRNac(vector<RNac>& datos,RNac a)
{
    int x;
    bool encontrado=false;
    RNac aux;
    for(int k=0;k<datos.size() && !encontrado;k++)
    {
        if(a.nacionalidad==datos[k].nacionalidad)
        {
            x=k;
            encontrado=true;
        }
    }
    datos.push_back(Nac_nodata);
    for(int k=x;k<datos.size();k++)
    {
        aux=datos[k];
        datos[k]=a;
        a=aux;
    }
}

void addRHM(vector<RHM>& datos,RHM a)
{
    int x;
    bool encontrado=false;
    RHM aux;
    for(int k=0;k<datos.size() && !encontrado;k++)
    {
        if(a.edad==datos[k].edad)
        {
            if(a.sexo==datos[k].sexo)
            {
                x=k;
                encontrado=true;
            }
        }
    }
    datos.push_back(HM_nodata);
    for(int k=x;k<datos.size();k++)
    {
        aux=datos[k];
        datos[k]=a;
        a=aux;
    }
}

//1.Comprobar datos

void compruebadatosNac(vector<RNac> Nac)
{
    string pais;
    int any;
    bool lect;
    RNac n;
    cout<<"Pais y año (espacios con barra espaciadora en el pais): "; cin>>pais>>any;
    n=obtenRNac(pais,any,Nac,lect);
    if(lect) cout<<n.nacionalidad<<" "<<n.any<<" "<<n.tasa<<endl;
}

void compruebadatosHM(vector<RHM> HM)
{
    string edad,sexe;
    int any;
    bool lect;
    RHM n;
    cout<<"Edad, sexo y año (espacios con barra espaciadora en el pais): "; cin>>edad>>sexe>>any;
    n=obtenRHM(edad,sexe,any,HM,lect);
    if(lect) cout<<n.edad<<" "<<n.sexo<<" "<<n.any<<" "<<n.tasa<<endl;
}

//2.Gestioar datos actuales

void gestion(vector<RNac>& Nac,vector<RHM>& HM)
{
    string dec;
    cout<<"¿Desea Gestionar datos por Nacionalidad o por Sexo y Edad? (Nac o HM): "; cin>>dec;
    if(dec=="Nac" || dec=="HM")
    {
        char BoC;
        if(dec=="Nac")
        {
            cout<<"Desea borrar unos datos o cambiarlos (B o C): "; cin>>BoC;
            if(BoC=='B' || BoC=='C')
            {
                RNac N;
                if(BoC=='B')
                {
                    N.tasa=-1;
                    cout<<"Teclee Nacionalidad y Año donde borrar la lectura: "; cin>>N.nacionalidad>>N.any;
                    if(cambiaRNac(Nac,N)) cout<<"Exito en la operacion"<<endl;
                    else cout<<"Error en los parametros. Vuelva a intentar."<<endl;
                }
                else
                {
                    cout<<"Teclee Nacionalidad, Año y tasa por la que cambiar: "; cin>>N.nacionalidad>>N.any>>N.tasa;
                    if(cambiaRNac(Nac,N)) cout<<"Exito en la operacion"<<endl;
                    else cout<<"Error en los parametros. Vuelva a intentar."<<endl;
                }
            }
            else cout<<"Error, vuelva a intentar"<<endl;
        }
        else
        {
            cout<<"Desea borrar unos datos o cambiarlos (B o C): "; cin>>BoC;
            if(BoC=='B' || BoC=='C')
            {
                RHM N;
                if(BoC=='B')
                {
                    N.tasa=-1;
                    cout<<"Teclee Edad, Sexo y Año donde borrar la lectura: "; cin>>N.edad>>N.sexo>>N.any;
                    if(cambiaRHM(HM,N)) cout<<"Exito en la operacion"<<endl;
                    else cout<<"Error en los parametros. Vuelva a intentar."<<endl;
                }
                else
                {
                    cout<<"Teclee Edad, Sexo, Año y Tasa por la que cambiar: "; cin>>N.edad>>N.sexo>>N.any>>N.tasa;
                    if(cambiaRHM(HM,N)) cout<<"Exito en la operacion"<<endl;
                    else cout<<"Error en los parametros. Vuelva a intentar."<<endl;
                }
            }
            else cout<<"Error, vuelva a intentar"<<endl;
        }
    }
    else cout<<"Error, vuelva a intentar"<<endl;
}

//3.Añadir nueva lectura (Queda pendiente...)

void addlects(vector<RNac>& Nac,vector<RHM>& HM)
{
    string dec;
    cout<<"¿Desea añadir para Nacionalidad o Sexo y edad? (Nac o HM): "; cin>>dec;
    if(dec=="Nac" || dec=="HM")
    {
        if(dec=="Nac")
        {
            string sino;
            cout<<"¿Lectura sin tasa o no? (SI o NO): "; cin>>sino;
            if(sino=="SI" || sino=="NO")
            {
                if(sino=="SI")
                {
                    RNac n={"",2022,-1};
                    cout<<"Nacionalidad: "; cin>>n.nacionalidad;
                    addRNac(Nac,n);
                }
                else
                {
                    RNac n={"",2022,0};
                    cout<<"Nacionalidad y tasa: "; cin>>n.nacionalidad>>n.tasa;
                    addRNac(Nac,n);
                }
            }
            else cout<<"Error. Vuelva a intentar"<<endl;
        }
        else
        {
            string sino;
            cout<<"¿Lectura sin tasa o no? (SI o NO): "; cin>>sino;
            if(sino=="SI" || sino=="NO")
            {
                if(sino=="SI")
                {
                    RHM n={"","",2022,-1};
                    cout<<"Edad y sexo: "; cin>>n.edad>>n.sexo;
                    addRHM(HM,n);
                }
                else
                {
                    RHM n={"","",2022,0};
                    cout<<"Edad, sexo y tasa: "; cin>>n.edad>>n.sexo>>n.tasa;
                    addRHM(HM,n);
                }
            }
            else cout<<"Error. Vuelva a intentar"<<endl;
            
        }
    }
    else cout<<"Error. Vuelva a intentar"<<endl;
}

//Programa main

int main () 
{
    // DECLARACIO DE VARIABLES

    ifstream R_Nac("RefugiadosNac.txt"),R_HM("RefugiadosHM.txt"),R_NacExp("RefugiadosNac_New.txt"),R_HMExp("RefugiadosHM_New.txt");
    ofstream R_NacNew("RefugiadosNac_New.txt"),R_HMNew("RefugiadosHM_New.txt");
    vector<RNac> Nac;
    vector<RHM> HM;
    int opc,inicio;
    bool terminado=false;

    //SENTENCIES

    Nac=lecturaRNac(R_Nac);
    HM=lecturaRHM(R_HM);

    cout<<"¿Desea operar con ficheros experimentales(1) o devolver los datos originales(2)? (1 o 2): "; cin>>inicio;
    while(!terminado)
    {
        if(inicio==1 || inicio==2)
        {
            if(inicio==1)
            {
                Nac=lecturaRNac(R_NacExp);
                HM=lecturaRHM(R_HMExp);
            }
            terminado=true;
        }
        else cout<<"Error. Vuelva a intentar"<<endl;
    }
    cout<<"Bienvenido al programa de gestion de lecturas de tasas de habitantes refugiados. ¿Que desea operar?:"<<endl;
    while(true)
    {
        cout<<"1.Comprobar datos"<<endl;
        cout<<"2.Gestionar datos actuales"<<endl;
        cout<<"3.Añadir nueva lectura de 2022"<<endl;
        cout<<"4.Abandonar el programa"<<endl;
        cout<<"Teclee el numero de opcion: "; cin>>opc;
        if(opc>=1 && opc<=4)
        {
            if(opc==1)
            {
                string dec;
                cout<<"¿Desea Comprobar datos por Nacionalidad o por Sexo y Edad? (Nac o HM): "; cin>>dec;
                if(dec=="Nac" || dec=="HM")
                {
                    if(dec=="Nac") compruebadatosNac(Nac);
                    else compruebadatosHM(HM);
                }
                else cout<<"Error, vuelva a intentar"<<endl;
            }
            else
            {
                if(opc==2) gestion(Nac,HM);
                else
                {
                    if(opc==3) addlects(Nac,HM);
                    else
                    {
                        string sino;
                        cout<<"¿Esta seguro de que quiere abandonar el programa y guardar cambios? (SI o NO): "; cin>>sino;
                        if(sino=="SI" || sino=="NO")
                        {
                            if(sino=="SI")
                            {
                                rellenaRNac(Nac,R_NacNew);
                                rellenaRHM(HM,R_HMNew);
                                return 0;
                            }
                            else
                            {
                                cout<<"¿Desea abandonar el programa sin guardar cambios? (SI o NO): "; cin>>sino;
                                if(sino=="SI") return 0;
                            }
                        }
                        else cout<<"Error, vuelva a intentar"<<endl;
                    }
                }
            }
        }
        else cout<<"Error, vuelva a intentar"<<endl;
    }
}