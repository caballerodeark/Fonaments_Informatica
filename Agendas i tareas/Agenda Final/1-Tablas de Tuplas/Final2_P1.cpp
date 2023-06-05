/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Descripcio:  Agenda F.1-Final 2 P1                              **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <vector>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

struct acuerdos
{
    int id,fecha;
    string leg,mot,tipo,partido;
    char resultado;
};

struct votos
{
    int id,fecha;
    string dni,partido;
    char sentido;
};

struct diputados
{
    string dni;
    int fav,contr,abs;
};

vector<acuerdos> LeerAcuerdos()
{
    ifstream A("acuerdos.txt");
    vector<acuerdos> fin;
    acuerdos f;
    while(A>>f.id>>f.leg>>f.fecha>>f.mot>>f.tipo>>f.partido>>f.resultado)
    {
        fin.push_back(f);
    }
    return fin;
}

void Nuevo_Diputado(vector<diputados>& t,votos l)
{
    bool nen=true;
    int k=0;
    while(k<t.size() && nen)
    {
        if(t[k].dni==l.dni)
        {
            nen=false;
        }
        else k++;
    }
    if(nen)
    {
        diputados n;
        n.dni=l.dni;
        if(l.sentido=='f')
        {
            n.contr=0;
            n.abs=0;
            n.fav=1;
        }
        else
        {
            if(l.sentido=='c')
            {
                n.contr=1;
                n.abs=0;
                n.fav=0;
            }
            else
            {
                n.contr=0;
                n.abs=1;
                n.fav=0;
            }
        }
        t.push_back(n);
    }
    else
    {
        if(l.sentido=='f')
        {
            
            t[k].fav++;
        }
        else
        {
            if(l.sentido=='c')
            {
                t[k].contr++;
            }
            else
            {
                t[k].abs++;
            }
        }
    }
}

vector<diputados> Lista_diputados()
{
    ifstream v("votos.txt");
    vector<diputados> dip;
    votos vo;
    while(v>>vo.id>>vo.dni>>vo.fecha>>vo.partido>>vo.sentido)
    {
        Nuevo_Diputado(dip,vo);
    }
    return dip;
}

vector<votos> LeerVotosAcuerdo(int id)
{
    ifstream v("votos.txt");
    vector<votos> votes;
    votos vo;
    while(v>>vo.id>>vo.dni>>vo.fecha>>vo.partido>>vo.sentido)
    {
        if(vo.id==id) votes.push_back(vo);
    }
    return votes;
}

void Resultado_Acuerdo(int id,vector<acuerdos>& ac)
{
    vector<votos> voto=LeerVotosAcuerdo(id);
    int fav=0;
    bool n=true;
    for(int k=0;k<voto.size();k++)
    {
        if(voto[k].sentido=='f') fav++;
    }
    int k=0;
    while(k<ac.size() && n)
    {
        if(ac[k].id==id) n=false;
        else k++;
    }
    if(ac[k].tipo=="ma")
    {
        if(fav>=176) ac[k].resultado='A';
        else ac[k].resultado='R';
    }
    else
    {
        if(ac[k].tipo=="ms")
        {
            if(fav>(voto.size()-fav)) ac[k].resultado='A';
            else ac[k].resultado='R';
        }
        else
        {
            if(fav>=233) ac[k].resultado='A';
            else ac[k].resultado='R';
        }
    }
}

int main ()
{
    // DECLARACIO DE VARIABLES

    vector<acuerdos> acuerdo;
    vector<diputados> diputado;
    vector<votos> voto;
    int contra_max=0;
    string partido;
    diputados contrmax;

    //SENTENCIES

    acuerdo=LeerAcuerdos();
    diputado=Lista_diputados();
    for(int k=0;k<diputado.size();k++)
    {
        if(diputado[k].contr>contra_max)
        {
            contra_max=diputado[k].contr;
            contrmax=diputado[k];
        }
    }
    cout<<"DNI diputado con mas votos en contra: "<<contrmax.dni<<endl;
    cout<<"Porcentaje de votos en contra: "<<(float(contra_max)/(contrmax.abs+contrmax.fav+contrmax.contr))*100<<"%"<<endl;
    if(acuerdo[acuerdo.size()-1].resultado=='@') Resultado_Acuerdo(acuerdo[acuerdo.size()-1].id,acuerdo);
    for(int k=0;k<acuerdo.size();k++)
    {
        if(acuerdo[k].mot=="mocion_censura")
        {
            cout<<acuerdo[k].fecha<<" - "<<acuerdo[k].partido<<" - "<<acuerdo[k].resultado<<endl;
        }
    }
    cout<<"Numero identificador de acuerdo: "; cin>>contra_max;
    voto=LeerVotosAcuerdo(contra_max);
    bool xd=true;
    for(int k=0;k<acuerdo.size() && xd;k++)
    {
        if(acuerdo[k].id==contra_max) 
        {
            acuerdo[k].partido=partido;
            xd=false;
        }
    }
    cout<<"Diputados traidores: "<<endl;
    for(int k=0;k<voto.size();k++)
    {
        if(voto[k].partido==partido && voto[k].sentido!='f') cout<<voto[k].dni<<endl;
    }

    return 0;
}