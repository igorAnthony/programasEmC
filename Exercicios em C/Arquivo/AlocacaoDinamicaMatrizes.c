#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int** AlocaMatriz(int nl, int nc);
void exibeMatriz(int **matriz, int nl, int nc);
int main()
{
    int **matriz;
    int nl, nc;

    //lendo o tamanho
    printf("Digite o tamanho da sua matriz mxn:");
    scanf("%d", &nl);
    scanf("%d", &nc);
    //mat = alocaMat(linhas, colunas);
    matriz = AlocaMatriz(nl, nc);
    exibeMatriz(matriz, nl, nc);
    free(matriz);
    return 0;
}
int** AlocaMatriz(int nl, int nc)
{
    int i, **aux;
    aux = (int **) malloc(nl * sizeof (int *));
    for(i = 0; i < nl; i++)
    {
        aux[i] = (int *) malloc( nc * sizeof(int) );
    }
    return aux;
}
void exibeMatriz(int **matriz, int nl, int nc)
{
    int i, j;
    srand(time(NULL));
    for(i = 0; i < nl; i++)
    {
        for(j = 0; j < nc; j++)
        {
                matriz[i][j] =  rand() % 100;
                printf("%02d ", matriz[i][j]);
        }
         printf("\n");
    }
}

