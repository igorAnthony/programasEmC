#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#define TAM 10

using namespace std;

int main()
{
    //variaveis
    int i, recebe1 = 0, recebe2 = 0;
    int altura[TAM], mais_alto = 0, mais_baixo = 0;
    //instrução
    cout << "Digite a altura de cada aluno em cm: ";
    for(i = 0; i < TAM; i++)
    {
        cin >> altura[i];
    }
    mais_alto = mais_baixo = altura[0];
    system("cls");//limpa a tela
    cout << "Lista de alunos:\n";
    for(i = 0; i < TAM; i++)
    {
        if(altura[i] > mais_alto)
        {
            mais_alto = altura[i];
            recebe1 = i;
        }
        if(altura[i] < mais_baixo)
        {
            mais_baixo = altura[i];
            recebe2 = i;
        }
        cout << "aluno " << i + 1 << " altura: " << altura[i] << "\n";
    }
    cout << "aluno mais alto numero: " << recebe1 + 1 << "  altura: " << altura[recebe1] << "cm\n";
    cout << "aluno mais baixo numero: " << recebe2 + 1 << "  altura: " << altura[recebe2] << "cm\n";

    //Pausa o programa após executar
    system("pause");

    return 0;
}
