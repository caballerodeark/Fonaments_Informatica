///*****************************************************************************************************
//
///    ES OBLIGATORIO LLENAR LA INFORMACION QUE SE SOLICITA A CONTINUACIÓN
///
///                                    EXAMEN FINAL -- 19 DE JUNIO
//
///    NOMBRE:
///    DNI:
///    GRADO:
///    GRUPO o PROFESOR:
//
///                                             PROBLEMA 1
//
//

///*****************************************************************************************************
///                                          BIBLIOTECAS
///*****************************************************************************************************


#include <iostream>
#include <fstream>
using namespace std;

///*****************************************************************************************************
///                                      CONSTANTES, SI SE DECLARAN
///*****************************************************************************************************

const int N=10;
typedef float Matriz[N][N];

///*****************************************************************************************************
///                             SUBPROGRAMAS, O EN SU CASO, ENCABEZADOS (PROTOTIPOS)
///*****************************************************************************************************

void Leer(Matriz & X, Matriz & Y,  Matriz & Z);
void Mostrar( Matriz & X);
/// DECLARAR SUBPROGRAMA SOLICITADO
///*****************************************************************************************************
///                                          PROGRAMA PRINCIPAL
///*****************************************************************************************************

int main(){
   Matriz M1,M2,M3;
   Leer(M1,M2,M3);
   cout<<endl<< " \t\t Matriz M1 " << endl<< endl;
   Mostrar(M1);
   cout<<endl<< " \t\t Matriz M2 " << endl<< endl;
   Mostrar(M2);
   cout<<endl<< " \t\t Matriz M3 " << endl<< endl;
   Mostrar(M3);
///
/// INSERTAR  AQUI LA LLAMADA AL SUBPROGRAMA SOLICITADO
///
///
///        HACER AQUI EL REPORTE DE RESULTADOS
///
}

///*****************************************************************************************************
///               DESARROLLO DE SUBPROGRAMAS
///*****************************************************************************************************
///
void Leer(Matriz & X, Matriz & Y,  Matriz & Z){
    ifstream cinF ("Prueba.txt");
    for(int f=0;f<N;f++)
       for (int c=0; c<N; c++) cinF >> X[f][c];
    for(int f=0;f<N;f++)
       for (int c=0; c<N; c++) cinF >> Y[f][c];
    for(int f=0;f<N;f++)
       for (int c=0; c<N; c++) cinF >> Z[f][c];
}
//
void Mostrar(Matriz & X){
    for(int f=0;f<N;f++){
       for (int c=0; c<N; c++) cout <<"\t" << X[f][c] ;
       cout << endl << endl;}
}

/// DESARROLLAR AQUI EL SUBPROGRAMA SOLICITADO
