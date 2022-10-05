#include <string>
#include <iostream>
#include <new>
#include <stdlib.h>
int** AlocaMatriz(int nl, int nc);
void exibeMatriz(int **matriz, int nl, int nc);
using namespace std;
int main()
{
    int **matriz;
    int nl, nc, i, j;

    //lendo o tamanho
    cout << "Digite o tamanho da sua matriz mxn:";
    cin >> nl >> nc;
    //mat = alocaMat(linhas, colunas);
    matriz = AlocaMatriz(nl, nc);
    exibeMatriz(matriz, nl, nc);
    free(matriz);
    return 0;
}
int** AlocaMatriz(int nl, int nc)
{
    int i, **aux;
    aux = (int **) new int[nl];
    for(i = 0; i < nl; i++)
    {
        aux[i] = (int *) new int[nc];
    }
    return aux;
}
void exibeMatriz(int **matriz, int nl, int nc)
{
    int i, j;
    for(i = 0; i < nl; i++)
    {
        for(j = 0; j < nc; j++)
        {
                matriz[i][j] = 5;
                cout << matriz[i][j] << " ";
        }
         cout << endl;
    }
}
