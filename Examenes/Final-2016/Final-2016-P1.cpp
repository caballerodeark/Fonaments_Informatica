#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

const int Nequips=20,Npartits=38;

struct Equip
{
    string nom; //de l'equip
    int puntsAdj; //total punts ajustats
};
typedef Equip LEquips[Nequips];

struct Resultat
{
    string nomOponent;
    int golAnotat,golRebut;
    int tarGroga,tarVerm;
};
typedef Resultat Lliga[Nequips][Npartits];

//A

