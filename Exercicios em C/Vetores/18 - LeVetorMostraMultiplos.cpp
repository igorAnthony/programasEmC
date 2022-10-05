#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#define TAM 10
using namespace std;

int main()
{
    //variaveis
    int vet[TAM], i, x = 0;

    //instrução
    cout << "Digite 10 valores:";

    for(i = 0; i < TAM; i++)
    {
        cin >> vet[i];//le os valores
    }
    system("cls"); // limpa a tela
    for(i = 0; i < TAM; i++)
    {
        cout << i << " - vet[" << i << "] = " << vet[i] << "\n"; //mostra as opções
    }
    cout << "Escolha uma posicao do vetor: ";
    cin >> x;//Escolhe um valor x
    for(i = 1; i <= TAM; i++)
    {
        cout << "Multiplos de " << vet[x] << " = " << vet[x]*i << "\n";//imprime os multiplos
    }
    system("pause");
    return 0;
}
