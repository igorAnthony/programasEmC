#include <stdlib.h>
#include <string>
#include <iostream>
#define TAM 6

using namespace std;

int main()
{
    //variaveis
    int vet[TAM], i, soma = 0, quant = 0;

    //instru��o
    cout << "Digite 6 valores: ";
    for(i = 0; i < TAM; i++)
    {
        cin >> vet[i];
    }
    cout << "Numeros pares digitados: ";
    for(i = 0; i < TAM; i++)
    {
        if(vet[i] % 2 == 0)
        {
            cout << vet[i] << " ";
            soma += vet[i];
        }
    }
    cout << "\nSoma dos numeros pares: " << soma << "\n";
    cout << "Numeros impares digitados: ";
    for(i = 0; i < TAM; i++)
    {
        if(vet[i] % 2 != 0)
        {
            cout << vet[i] << " ";
            quant++;
        }
    }
    cout << "\nQuantidade de numeros impares digitados: " << quant << "\n";
    //Pausa o programa ap�s executar
    system("pause");

    return 0;
}
