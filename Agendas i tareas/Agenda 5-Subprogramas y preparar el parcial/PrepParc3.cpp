/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        Agenda 5 (20/10/22)                               **/
/** Descripcio:  Preparacion 1er Parcial 3                         **/
/********************************************************************/

#include <iostream>
#include <fstream> //##1##
using namespace std;

void deletras(char le,bool& es_MAY,bool& es_voc); //##2##
int main()
{
    ifstream fin("caracters.txt");
    char ca;
    bool esmima,esmivo; //##3##

    int conta_let=0,conta_ma=0,conta_vo=0;
    while(fin>>ca) //##4##
    {
        if(ca>='A' && ca<='Z' || ca>='a' && ca<='z') //##5##
        {
            conta_let++; //##6##
            deletras(ca,esmima,esmivo);
            if(esmima==true) conta_ma++;
            if(esmivo==true) conta_vo++;
        }
    }
    cout << conta_let << endl << conta_vo << endl;
    if(conta_let==0) cout << "NO HI HA CAP LLETRA EN EL FITXER" << endl;
    else
    {
        cout << "EL PERC. DE VOCALS ES: " << float(conta_vo/conta_let)*100 << endl; //##7##
        if(conta_ma >= (conta_let-conta_ma)) cout << "HI HA MES (o MATEIXES) MAJUSCULES QUE MINUSCULES" << endl; //##8##
        else cout << "HI HA MENYS MAJUSCULES QUE MINUSCULES" << endl;
    }
}

void deletras(char le,bool& es_MAY,bool& es_voc) //##9##
{
    es_MAY=false;
    es_voc=false;
    if(le>='A' && le<='Z') //##10##
    {
        es_MAY=true;
        if(le=='A' || le=='E' || le=='I' || le=='O' || le=='U') es_voc=true;
    }
    else
    {
        if(le=='a' || le=='e' || le=='i' || le=='o' || le=='u') es_voc=true;
    }
}
