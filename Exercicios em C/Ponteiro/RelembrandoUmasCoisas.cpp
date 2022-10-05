#include <string>
#include <iostream>
#include <new>
#include <stdlib.h>
using namespace std;
int** AlocaMatriz(int nl, int nc);
void preencheMatriz(int **matriz, int nl, int nc);
int main()
{
    int **matriz, nl, nc;
    cout << "Digite o tamanho da sua matriz:";
    cin >> nl >> nc;
    matriz = AlocaMatriz(nl, nc);
    preencheMatriz(matriz, nl, nc);
    return 0;
}
int** AlocaMatriz(int nl, int nc)
{
    int **aux, i, j;
    aux = (int**) new int[nl];
    for(i = 0; i < nl; i++)
    {
        aux[i] = (int*) new int[nc];
    }
    return aux;
}
void preencheMatriz(int **matriz, int nl, int nc)
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
