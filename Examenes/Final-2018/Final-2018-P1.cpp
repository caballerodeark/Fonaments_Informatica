#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

const int L=100,R=50;

struct Competidor
{
    int datanac; //format aaaammdd
    int ID;
    string nom,cognom,pais;
    char cat; //categoria
};
typedef Competidor LCompetidors[L];

struct Result
{
    int ID;
    char cat;
    float punts[5];
};
typedef Result LResults[R];

struct Pentatlon
{
    LCompetidors LC;
    int ncompit; //nombre de competidors
    LResults LR;
    int nresults;
};

void retornaComp(int ID, LCompetidors LC)
{
    bool encontrado=false;
    for(int k=0;k<L && !encontrado;k++)
    {
        if(LC[k].ID==ID)
        {
            cout<<"Nom: "<<LC[k].nom<<" "<<LC[k].cognom<<endl;
            cout<<"Pais: "<<LC[k].pais<<endl;
            cout<<"Data de n.: "<<LC[k].datanac<<endl;
            cout<<"Categoria: "<<LC[k].cat<<endl;
            encontrado=true;
        }
    }
    if(!encontrado) cout<<"No es va registrar a la competicio"<<endl;
}

void guanyador(Pentatlon P)
{
    float pun,pun_max=0;
    int id_max;
    for(int k=0;k<P.nresults;k++)
    {
        pun=(P.LR[k].punts[1]+P.LR[k].punts[2]+P.LR[k].punts[3]+P.LR[k].punts[4]+P.LR[k].punts[5])/5;
        if(pun>pun_max)
        {
            pun_max=pun;
            id_max=P.LR[k].ID;
        }
    }
    cout<<"I el guanyador es"<<endl;
    retornaComp(id_max,P.LC);
}