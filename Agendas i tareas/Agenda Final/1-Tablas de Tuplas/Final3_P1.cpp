/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Descripcio:  Agenda F.1-Final 3 P1                              **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <vector>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

struct motos
{
    string matricula;
    int km_rec,porcentaje_bat;
    float longitud,latitud;
    char ocupacion;
};

struct clientes
{
    string dni;
    int min_uso;
    float km_acumulados,facturaMes;
};

struct viajes
{
    int id,fecha,h_inicial,h_final;
    string matricula,dni_usuario;
    float distancia_recorrida;
};

void LeerDatos(vector<motos>& moto,vector<clientes>& cliente)
{
    ifstream mot("motos.txt"),clien("clientes.txt");
    motos mo;
    clientes cli;
    while(mot>>mo.matricula>>mo.km_rec>>mo.porcentaje_bat>>mo.longitud>>mo.latitud>>mo.ocupacion)
    {
        moto.push_back(mo);
    }
    while(clien>>cli.dni>>cli.min_uso>>cli.km_acumulados>>cli.facturaMes)
    {
        cliente.push_back(cli);
    }
}

vector<viajes> LeerViajes(int fecha1,int fecha2)
{
    ifstream viaj("viajes.txt");
    vector<viajes> viaje;
    viajes vi;
    while(viaj>>vi.id>>vi.fecha>>vi.h_inicial>>vi.h_final>>vi.matricula>>vi.dni_usuario>>vi.distancia_recorrida)
    {
        if(vi.fecha>=fecha1 && vi.fecha<=fecha2) viaje.push_back(vi);
    }
    return viaje;
}

void Actualiza_clientes(vector<viajes> viaje,vector<clientes>& cliente)
{
    for(int k=0;k<cliente.size();k++)
    {
        int numero_viajes=0;
        float suma_minutos=0,suma_kilometros=0;
        for(int j=0;j<viaje.size();j++)
        {
            if(cliente[k].dni==viaje[j].dni_usuario)
            {
                numero_viajes++;
                suma_minutos+=viaje[j].h_final-viaje[j].h_inicial;
                suma_kilometros+=viaje[j].distancia_recorrida;
            }
        }
        cliente[k].facturaMes=0.5*numero_viajes+0.1*suma_minutos+0.1*suma_kilometros;
    }
}

void MotosSinPila(vector<motos>& moto)
{
    for(int k=0;k<moto.size();k++)
    {
        if(moto[k].porcentaje_bat<20) moto[k].ocupacion='F';
    }
}

vector<clientes> Quien_uso_la_Moto(vector<clientes> cliente,int fecha,string mat,int n)
{
    vector<clientes> T;
    vector<viajes> viaje=LeerViajes(fecha-30,fecha);
    for(int k=0;k<viaje.size() && n!=0;k++)
    {
        if(viaje[k].matricula==mat)
        {
            bool tr=true;
            for(int j=0;j<cliente.size() && tr;j++)
            {
                if(cliente[j].dni==viaje[k].dni_usuario)
                {
                    T.push_back(cliente[j]);
                    n--;
                    tr=false;
                }
            }
        }
    }
    return T;
}

int main()
{
    // DECLARACIO DE VARIABLES

    const int fecha_actual=20180630;
    int fact_tot=0,bat_min=100,motosoff=0;
    string mat_min;
    vector<motos> moto;
    vector<clientes> cliente,clientes_moto;
    vector<viajes> viaje;

    //SENTENCIES

    LeerDatos(moto,cliente);
    viaje=LeerViajes(fecha_actual-30,fecha_actual);
    Actualiza_clientes(viaje,cliente);
    for(int k=0;k<cliente.size();k++)
    {
        fact_tot+=cliente[k].facturaMes;
    }
    cout<<"La facturacion total del ultimo mes es de un total de "<<fact_tot<<" EUR"<<endl;
    MotosSinPila(moto);
    for(int k=0;k<moto.size();k++)
    {    
        if(moto[k].ocupacion=='F')
        {
            motosoff++;
            if(moto[k].porcentaje_bat<bat_min)
            {
                bat_min=moto[k].porcentaje_bat;
                mat_min=moto[k].matricula;
            }
        }
    }
    cout<<"Hay "<<motosoff<<" motos fuera de linea."<<endl;
    cout<<"La moto con menos bateria tiene la matricula "<<mat_min<<endl;
    clientes_moto=Quien_uso_la_Moto(cliente,fecha_actual,"431ABC",5);
    cout<<"Los ultimos cinco que han usado la moto defectuosa son:"<<endl;
    for(int k=0;k<clientes_moto.size();k++)
    {
        cout<<clientes_moto[k].dni<<endl;
    }

    return 0;
}