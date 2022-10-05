#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#define TAM 10

using namespace std;

int main()
{
    //variaveis
    int i, vet[TAM], div;
    //le valores
    for(i = 0; i < TAM; i++)
    {
        cin >> vet[i];
    }
    system("cls");
    for(i = 0; i < TAM; i++)
    {
        div = 2;
        while(div <= vet[i] && vet[i] % div != 0)
        {
        div++;
        }
        if(div == vet[i])
        {
            cout << "Numero primo encontrado:" << vet[i] << ", Posicao: " << i << "\n";
        }
    }
    //Pausa o programa appós executar
    system("pause");

    return 0;
}
