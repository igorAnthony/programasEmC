#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <math.h>
#include <time.h>
#define TAM 50

using namespace std;
void  preencheMatriz(int mat[][TAM]);
void exibeMatriz(int mat[][TAM]);
int verifica(int mat[][TAM], int aux);
void verificaIgual(int mat[][TAM]);
int main()
{
    //variaveis
    int mat[TAM][TAM];
    srand((unsigned)time(NULL));

    preencheMatriz(mat);
    exibeMatriz(mat);
    verificaIgual(mat);
    return 0;
}
void  preencheMatriz(int mat[][TAM])
{
    int i, j, k, aux;

    for(i = 0; i < TAM; i++)
    {
        for(j = 0; j < TAM; j++)
        {
            mat[i][j] = rand()%100 + 1;
        }
    }
    for(i = 0; i < TAM; i++)
    {
        for(j = 0; j < TAM; j++)
        {
            k = 0;
            aux = mat[i][j];
            while(verifica(mat, aux) == 1)
            {
                aux = rand()%100 + 1;
                k = 1;
            }
            if(k == 1)
            {
                mat[i][j] = aux;
            }

        }
    }
}
int verifica(int mat[][TAM], int aux)
{
    int i,j;

    for(i = 0; i < TAM; i++)
    {
        for(j = 0; j < TAM; j++)
        {
            if(mat[i][j] == aux)
            {
                return 1;
            }
        }
    }
    return 0;
}
void exibeMatriz(int mat[][TAM])
{
    int i, j;
    for(i = 0; i < TAM; i++)
    {
        for(j = 0; j < TAM; j++)
        {
            printf("%02d ", mat[i][j]);
        }
        cout << "\n";
    }
}
void verificaIgual(int mat[][TAM])
{
    int i, j, k, l;

    for(i = 0; i < TAM; i++)
    {
        for(j = 0; j < TAM; j++)
        {
            for(k = 0; k < TAM; k++)
            {
                for(l = 0; l < TAM; l++)
                {
                    if(mat[i][j] == mat[k][l] && !(k == i && j == l))
                    {
                        cout << mat[l][k] << " ";
                    }
                }
            }
        }
    }
}
