#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#define TAM 10
using namespace std;

int main()
{
    //variaveis
    int vet1[TAM], vet2[TAM], vet3[TAM*2], i, j = 0, k = 0;

    //instrução
    cout << "Digite 10 valores:";
    for(i = 0; i < TAM; i++)
    {
        cin >> vet1[i];//le valores pro vetor
    }
    cout << "Digite 10 valores novamente:";
    for(i = 0; i < TAM; i++)
    {
        cin >> vet2[i];//le valores pro vetor
    }
    //Limpa a tela
    system("cls");
    //Recebe os valores do vetor 1 e o vetor 2, no novo vetor as posicoes pares recebe vet1 e impares vet2
    for(i = 0; i < 20; i++)
    {
        if(i % 2 == 0)
        {
            vet3[i] = vet1[j];
            j++;
        }
        if(i % 2 != 0)
        {
            vet3[i] = vet2[k];
            k++;
        }
    }
    //Imprime na tela o novo vetor
    cout << "Novo vetor:" << "\n";
    for(i = 0; i < 20; i++)
    {
        cout << "vet3[" << i << "] = " << vet3[i] << " ";
        if(i % 2 != 0 && i != 0)
        {
            cout << "\n";
        }
    }
    //Pausa o programa após executar
    system("pause");
    return 0;
}
