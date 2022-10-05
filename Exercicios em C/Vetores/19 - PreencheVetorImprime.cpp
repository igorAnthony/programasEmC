#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#define TAM 50
using namespace std;

int main()
{
    //variaveis
    int vet[TAM], i;

    //gera os valores do vetor
    for(i = 0; i < TAM; i++)
    {
       vet[i] = (i+(5*i))%(i+1);
    }
    //Imprime vetor
    for(i = 0; i < TAM; i++)
    {
        cout << "vet[" << i << "] = " << vet[i] << "\n";
    }
    //Pausa o programa após executar
    system("pause");

    return 0;
}
