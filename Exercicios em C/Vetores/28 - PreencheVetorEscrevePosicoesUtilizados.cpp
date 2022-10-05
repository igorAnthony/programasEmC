#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#define TAM 10
using namespace std;

int main()
{
    //variaveis
    int vet[TAM], v1[TAM], v2[TAM];
    int i, lim1 = 0, lim2 = 0;

    //instrução
    cout << "Digite 10 valores:";
    for(i = 0; i < TAM; i++)
    {
        cin >> vet[i];
    }
    system("cls");//limpa a tela
    for(i = 0; i < TAM; i++)
    {
        if(vet[i] % 2 != 0)//verifica se é impar
        {
            v1[lim1] = vet[i];//o v1 recebe o valor do vet
                       lim1++;//aumenta uma casa do limite de v1
        }
        if(vet[i] % 2 == 0)//verifica se é par
        {
            v2[lim2] = vet[i];//v2 recebe o valor do vet
            lim2++;//aumenta uma casa do limite de v2
        }
    }
    for(i = 0; i < TAM; i++)
    {
        if(i < lim1)
        {
            cout << "UTILIZADO ELEMENTO: " << v1[i] << "\n";//imprime todas as casas enquanto o valor for menor que o limite
        }
        if(i >= lim1)//as posições maiores que o limite, são as casas nao utilizadas
        {
            cout << "POSICAO NAO UTILIZADA, LIXO ELETRONICO\n";
        }
    }
    cout << "\n\n";
    for(i = 0; i < TAM; i++)
    {
        if(i < lim2)
        {
            cout << "UTILIZADO ELEMENTO: " << v2[i] << "\n";
        }
        else if(i >= lim2)
        {
            cout << "POSICAO NAO UTILIZADA, LIXO ELETRONICO\n";
        }
    }
    //Pausa o programa após executar
    system("pause");

    return 0;
}
