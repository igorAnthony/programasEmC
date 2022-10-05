#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#define TAM 10
using namespace std;

int main()
{
    //variaveis
    int vet[TAM], vet2[TAM];
    int i, n = TAM, k = 0;
    //instrução
    cout << "Digite 10 valores: ";
    for(i = 0; i < TAM; i++)
    {
        cin >> vet[i];
        if(vet[i] % 2 == 0){ //se o valor for par, diminui o tamanho do vetor
            n--;
        }
        if( vet[i] % 2 != 0)
        {
            vet2[k] = vet[i]; //se o valor for impar, ele recebe o valor no vetor e pula uma casa
            k++;
        }
    }
    system("cls");//limpa a tela
    //Imprime os dois vetores
    for(i = 0; i < TAM; i++)
    {
        cout << "vet[" << i << "] =" << vet[i] << "   ";
        if(i < n)
        {
        cout << "vet[" << i << "] =" << vet2[i];
        }
        cout << "\n";
    }
    //Pausa o programa após executar
    system("pause");

    return 0;
}
