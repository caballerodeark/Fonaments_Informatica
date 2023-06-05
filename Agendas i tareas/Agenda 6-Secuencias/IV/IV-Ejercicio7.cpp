/********************************************************************/
/** Nom autor:   Guillem Perez Sanchez                             **/
/** Data:        16-11-2022                                        **/
/** Descripcio:  Agenda 6-IV-Ejercicio 7                           **/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

// DECLARACIO DE CONSTANTS


/************************ PROGRAMA PRINCIPAL ************************/

float suma(float P1,float P2,float P3,float P4)
{
    return float((P1+P2+P3+P4)/4);
}

char nota(float note)
{
    if(note<7)
    {
        if(note<5) return 'D';
        else return 'C';
    }
    else
    {
        if(note<9) return 'B';
        else return 'A';
    }
}

char bestg(float A,float B,float C,float D,float E,float F,float G)
{
    if(A<B)
    {
        if(B<C)
        {
            if(C<D)
            {
                if(D<E)
                {
                    if(E<F)
                    {
                        if(F<G) return 'G';
                        else return 'F';
                    }
                    else 
                    {
                        if(E<G) return 'G';
                        else return 'E';
                    }
                }
                else
                {
                    if(D<F)
                    {
                        if(F<G) return 'G';
                        else return 'F';
                    }
                    else
                    {
                        if(D<G) return 'G';
                        else return 'D';
                    }
                }
            }
            else
            {
                if(C<E)
                {
                    if(E<F)
                    {
                        if(F<G) return 'G';
                        else return 'F';
                    }
                    else 
                    {
                        if(E<G) return 'G';
                        else return 'E';
                    }
                }
                else
                {
                    if(C<F)
                    {
                        if(F<G) return 'G';
                        else return 'F';
                    }
                    else
                    {
                        if(C<G) return 'G';
                        else return 'C';
                    }
                }
            }
        }
        else
        {
            if(B<D)
            {
                if(D<E)
                {
                    if(E<F)
                    {
                        if(F<G) return 'G';
                        else return 'F';
                    }
                    else 
                    {
                        if(E<G) return 'G';
                        else return 'E';
                    }
                }
                else
                {
                    if(D<F)
                    {
                        if(F<G) return 'G';
                        else return 'F';
                    }
                    else
                    {
                        if(D<G) return 'G';
                        else return 'D';
                    }
                }
            }
            else
            {
                if(B<E)
                {
                    if(E<F)
                    {
                        if(F<G) return 'G';
                        else return 'F';
                    }
                    else 
                    {
                        if(E<G) return 'G';
                        else return 'E';
                    }
                }
                else
                {
                    if(A<F)
                    {
                        if(F<G) return 'G';
                        else return 'F';
                    }
                    else
                    {
                        if(B<G) return 'G';
                        else return 'B';
                    }
                }
            }
        }
    }
    else
    {
        if(A<C)
        {
            if(C<D)
            {
                if(D<E)
                {
                    if(E<F)
                    {
                        if(F<G) return 'G';
                        else return 'F';
                    }
                    else 
                    {
                        if(E<G) return 'G';
                        else return 'E';
                    }
                }
                else
                {
                    if(D<F)
                    {
                        if(F<G) return 'G';
                        else return 'F';
                    }
                    else
                    {
                        if(D<G) return 'G';
                        else return 'D';
                    }
                }
            }
            else
            {
                if(C<E)
                {
                    if(E<F)
                    {
                        if(F<G) return 'G';
                        else return 'F';
                    }
                    else 
                    {
                        if(E<G) return 'G';
                        else return 'E';
                    }
                }
                else
                {
                    if(C<F)
                    {
                        if(F<G) return 'G';
                        else return 'F';
                    }
                    else
                    {
                        if(C<G) return 'G';
                        else return 'C';
                    }
                }
            }
        }
        else
        {
            if(A<D)
            {
                if(D<E)
                {
                    if(E<F)
                    {
                        if(F<G) return 'G';
                        else return 'F';
                    }
                    else 
                    {
                        if(E<G) return 'G';
                        else return 'E';
                    }
                }
                else
                {
                    if(D<F)
                    {
                        if(F<G) return 'G';
                        else return 'F';
                    }
                    else
                    {
                        if(D<G) return 'G';
                        else return 'D';
                    }
                }
            }
            else
            {
                if(A<E)
                {
                    if(E<F)
                    {
                        if(F<G) return 'G';
                        else return 'F';
                    }
                    else 
                    {
                        if(E<G) return 'G';
                        else return 'E';
                    }
                }
                else
                {
                    if(A<F)
                    {
                        if(F<G) return 'G';
                        else return 'F';
                    }
                    else
                    {
                        if(A<G) return 'G';
                        else return 'A';
                    }
                }
            }
        }
    }
}

float freq(int cant, int all)
{
    return float(cant)/float(all);
}

int main()
{
    // DECLARACIO DE VARIABLES

    ifstream P("NotasParcial.txt");
    ofstream sus("suspendidos.txt"),A("MejoresA.txt"),B("MejoresB.txt"),C("MejoresC.txt"),D("MejoresD.txt"),E("MejoresE.txt"),F("MejoresF.txt"),G("MejoresG.txt");
    string nom,g,best,bestA,bestB,bestC,bestD,bestE,bestF,bestG;
    float P1,P2,P3,P4,sum=0,sumA=0,sumB=0,sumC=0,sumD=0,sumE=0,sumF=0,sumG=0,note,notemax=0,noteAmax=0,noteBmax=0,noteCmax=0,noteDmax=0,noteEmax=0,noteFmax=0,noteGmax=0,promA,promB,promC,promD,promE,promF,promG;
    int cant=0,cantA=0,cantB=0,cantC=0,cantD=0,cantE=0,cantF=0,cantG=0,An=0,Bn=0,Cn=0,Dn=0;

    //SENTENCIES

    while(P>>nom>>P1>>P2>>P3>>P4>>g)
    {
        if(nom!="capullin" && P1!=0 && P2!=0 && P3!=0 && P4!=0 && g!="FFFF")
        {
            cant++;
            note=suma(P1,P2,P3,P4);
            sum+=note;
            if(g[0]>='A' && g[0]<='D')
            {
                if(g[0]<='B')
                {
                    if(g[0]=='A')
                    {
                        cantA++;
                        sumA+=note;
                        if(nota(note)=='D')
                        {
                            Dn++;
                            sus<<nom<<endl;
                        }
                        else 
                        {
                            if(nota(note)=='A')
                            {
                                An++;
                                A<<nom<<endl;
                                if(note>noteAmax)
                                {
                                    noteAmax=note;
                                    bestA=nom;
                                }
                            }
                            else
                            {
                                if(nota(note)=='B') Bn++;
                                else Cn++;
                            }
                        }
                    }
                    else
                    {
                        cantB++;
                        sumB+=note;
                        if(nota(note)=='D')
                        {
                            Dn++;
                            sus<<nom<<endl;
                        }
                        else 
                        {
                            if(nota(note)=='A')
                            {
                                An++;
                                B<<nom<<endl;
                                if(note>noteBmax)
                                {
                                    noteBmax=note;
                                    bestB=nom;
                                }
                            }
                            else
                            {
                                if(nota(note)=='B') Bn++;
                                else Cn++;
                            }
                        }
                    }
                }
                else
                {
                    if(g[0]=='C')
                    {
                        cantC++;
                        sumC+=note;
                        if(nota(note)=='D')
                        {
                            Dn++;
                            sus<<nom<<endl;
                        }
                        else 
                        {
                            if(nota(note)=='A')
                            {
                                An++;
                                C<<nom<<endl;
                                if(note>noteCmax)
                                {
                                    noteCmax=note;
                                    bestC=nom;
                                }
                            }
                            else
                            {
                                if(nota(note)=='B') Bn++;
                                else Cn++;
                            }
                        }
                    }
                    else
                    {
                        cantD++;
                        sumD+=note;
                        if(nota(note)=='D')
                        {
                            Dn++;
                            sus<<nom<<endl;
                        }
                        else 
                        {
                            if(nota(note)=='A')
                            {
                                An++;
                                D<<nom<<endl;
                                if(note>noteDmax)
                                {
                                    noteDmax=note;
                                    bestD=nom;
                                }
                            }
                            else
                            {
                                if(nota(note)=='B') Bn++;
                                else Cn++;
                            }
                        }
                    }
                }
            }
            else
            {
                if(g[0]=='F')
                {
                    cantF++;
                    sumF+=note;
                    if(nota(note)=='D')
                    {
                        Dn++;
                        sus<<nom<<endl;
                    }
                    else 
                    {
                        if(nota(note)=='A')
                        {
                            An++;
                            F<<nom<<endl;
                            if(note>noteFmax)
                            {
                                noteFmax=note;
                                bestF=nom;
                            }
                        }
                        else
                        {
                            if(nota(note)=='B') Bn++;
                            else Cn++;
                        }
                    }
                }
                else
                {
                    if(g[0]=='E')
                    {
                        cantE++;
                        sumE+=note;
                        if(nota(note)=='D')
                        {
                            Dn++;
                            sus<<nom<<endl;
                        }
                        else 
                        {
                            if(nota(note)=='A')
                            {
                                An++;
                                E<<nom<<endl;
                                if(note>noteEmax)
                                {
                                    noteEmax=note;
                                    bestE=nom;
                                }
                            }
                            else
                            {
                                if(nota(note)=='B') Bn++;
                                else Cn++;
                            }
                        }
                    }
                    else
                    {
                        cantG++;
                        sumG+=note;
                        if(nota(note)=='D')
                        {
                            Dn++;
                            sus<<nom<<endl;
                        }
                        else 
                        {
                            if(nota(note)=='A')
                            {
                                An++;
                                G<<nom<<endl;
                                if(note>noteGmax)
                                {
                                    noteGmax=note;
                                    bestG=nom;
                                }
                            }
                            else
                            {
                                if(nota(note)=='B') Bn++;
                                else Cn++;
                            }
                        }
                    }
                }
            }
        }
        else;
        if(notemax<note)
        {
            notemax=note;
            best=nom;
        }
    }

    promA=sumA/cantA;
    promB=sumB/cantB;
    promC=sumC/cantC;
    promD=sumD/cantD;
    promE=sumE/cantE;
    promF=sumF/cantF;
    promG=sumG/cantG;
    A<<bestA<<endl;
    B<<bestB<<endl;
    C<<bestC<<endl;
    D<<bestD<<endl;
    E<<bestE<<endl;
    F<<bestF<<endl;
    G<<bestG<<endl;
    cout<<"Promedio grupo A: "<<promA<<endl;
    cout<<"Promedio grupo B: "<<promB<<endl;
    cout<<"Promedio grupo C: "<<promC<<endl;
    cout<<"Promedio grupo D: "<<promD<<endl;
    cout<<"Promedio grupo E: "<<promE<<endl;
    cout<<"Promedio grupo F: "<<promF<<endl;
    cout<<"Promedio grupo G: "<<promG<<endl;
    cout<<"Promedio Total: "<<sum/cant<<endl;
    cout<<"Mejor alumno: "<<best<<endl;
    cout<<"Mejor grupo: "<<bestg(promA,promB,promC,promD,promE,promF,promG)<<endl;
    cout<<"Freq. A: "<<freq(An,cant)<<endl;
    cout<<"Freq. B: "<<freq(Bn,cant)<<endl;
    cout<<"Freq. C: "<<freq(Cn,cant)<<endl;
    cout<<"Freq. D: "<<freq(Dn,cant)<<endl;
}

/**
 * Comentari:
 * A l'enunciat es dona a entendre que al txt n'hi ha fins a un grup G (Gracies a les indicacions de l'apartat b)
 * Pero, confiant en l'enunciat i fent-ne mes treball a la finalitzacio, comprobant resultats, t'adones de que no hi ha cap existencia d'un grup G al txt :v
**/
