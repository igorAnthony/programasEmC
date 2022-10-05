#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <math.h>
#include <time.h>
#include <new>

using namespace std;
void preencheVetorSemRep();
int main()
{
    //variaveis
    //chama a função
    preencheVetorSemRep();
    //retorna a função main
    return 0;
}
void preencheVetorSemRep()
{
    int tam, i, j, aux;
    srand((unsigned)time(NULL));
    //instrução
    cout << "Digite o tamanho do seu vetor aleatorio:";
    //le valor
    cin >> tam;
    int *vet_random = new int[tam];
    //gera valores aleatorios pro vet;
    for(i = 0; i < tam; i++)
    {
        vet_random[i] = rand()%1000;
    }
    for(i = 0; i < tam; i++)
    {
        for(j = i + 1; j < tam; j++)
        {
            if(vet_random[i] == vet_random[j])
            {
                aux = rand()%1000;
                vet_random[j] = aux;
            }
        }
    }
    for(i = 0; i < tam; i++)
    {
        cout << vet_random[i] << " ";
    }
    free(vet_random);
}
