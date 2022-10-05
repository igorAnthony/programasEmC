#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#define TAM 10
using namespace std;

int main()
{
    //variaveis
    int vet[TAM], i;

    //instrução
    cout << "Digite 10 valores: ";

    for(i = 0; i < TAM; i++)
    {
        cin >> vet[i];  //Le valores
        if(vet[i] < 0)  //se o valor for negativo, ele aatribui valor 0
        {
            vet[i] = 0;
        }
    }

    //Imprime vetor
    for(i = 0; i < TAM; i++)
    {
        cout << "Vet[" << i << "] = " << vet[i] << "\n";
    }
    //Pausa o programa após executar
    system("pause");

    return 0;
}
