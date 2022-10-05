#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#define TAM 10
using namespace std;

int main()
{
    //variaveis
    int A[TAM], B[TAM], C[TAM], i;

    //instrução
    cout << "Digite 10 valores: ";

    //le os dois vetores
    for(i = 0; i < TAM; i++)
    {
        cin >> A[i];
    }
    for(i = 0; i < TAM; i++)
    {
        cin >> B[i];
    }

    system("cls");//limpa a tela

    //gera o novo vetor e imprime
    cout << "Novo vetor a partir de A*B" << "\n";
    for(i = 0; i < TAM; i++)
    {
        C[i] = A[i]*B[i];
        cout << "C[" << i << "] = " << C[i] << "\n";
    }

    //Pausa o programa após executar
    system("pause");

    return 0;
}
