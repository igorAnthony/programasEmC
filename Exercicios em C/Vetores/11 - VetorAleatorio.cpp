#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    //variaveis
    int vetor[10], i, neg = 0, soma = 0;
    srand((unsigned)time(NULL));
    //Cria valores aleatorios pro vetor
    for(i = 0; i < 10; i++)
    {
        vetor[i] = (rand() % 100) - 50;
        if(vetor[i] < 0){
            neg++;
        }
        if(vetor[i] > 0){
            soma += vetor[i];
        }
    }
    for(i = 0; i < 10; i++)
    {
        cout << "Vetor[" << i << "] = " << vetor[i] << "\n";
    }
    cout << "a soma dos valores positivos = " << soma << "\n";
    cout << "quantidade de numeros negativos = " << neg << "\n";
    //Pausa programa após executar
    system("pause");
}
