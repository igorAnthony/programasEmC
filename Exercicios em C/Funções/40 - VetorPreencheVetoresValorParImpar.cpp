#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>
#define TAM 5

using namespace std;
int preencheVetoresParOuImpar(int *X, int tam);
int main()
{
    int X[TAM] = {1,2,3,4,5};
    //srand((unsigned)time(NULL));
    //gera valores aleatorios pro vet;
    /*for(i = 0; i < TAM; i++)
    {
        X[i] = rand()%30;
        cout << X[i] << " ";
    }*/
    preencheVetoresParOuImpar(X, 5);
    return 0;

}
int preencheVetoresParOuImpar(int *X, int tam)
{
    int i, j = 0, k = 0, aux_A = TAM, aux_B = TAM, *A, *B;
    for(i = 0; i < tam; i++)
    {
        if(X[i] % 2 == 0)
        {
            A[j] = X[i];
            aux_B--;
            j++;
        }
        else if(X[i] % 2 != 0)
        {
            B[k] = X[i];
            aux_A--;
            k++;
        }
    }
    for(i = 0; i < aux_A; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    for(i = 0; i < aux_B; i++)
    {
        cout << B[i] << " ";
    }
}

