#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;
void preencheVetorSemRep();
int main()
{
    //variaveis
    //chama a fun��o
    preencheVetorSemRep();
    //retorna a fun��o main
    return 0;
}
void preencheVetorSemRep()
{
    int *vet_random, tam, i, j, aux;
    srand((unsigned)time(NULL));
    //instru��o
    cout << "Digite o tamanho do seu vetor aleatorio:";
    //le valor
    cin >> tam;
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


}
