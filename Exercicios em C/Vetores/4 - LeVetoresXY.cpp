#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>
using namespace std;

//Função Principal
int main()
{
    //variaveis
    int vetor[8], x, y, i, random_1, random_2;

    //Responsavel por alimentar o random
    srand((unsigned)time(NULL));

    //le valores para o vetor
    for(i = 0; i < 8; i++){
        cin >> vetor[i];
    }

    //Imprime todas as posições
    for(i = 0; i < 8; i++){
        cout << "Posicao[" << i << "] = " << vetor[i] << "\n";
    }

    //Pega valores aleatorios entre 0 e 7 para assumir ao vetor
    random_1 = (rand() % 8);
    random_2 = (rand() % 8);

    //Imprime as posicoes aleatorias
    cout << "Posicao aleatoria para armazenar o x = " << random_1 << ", ";
    cout << "Posicao aleatoria para armaenar o y = " << random_2 << "\n";

    //Instrução
    cout << "Escolha dois valores quaisquer para adicionar em uma posicao aleatoria do vetor";

    //Le o valor para x e y
    cin >> vetor[random_1] >> vetor[random_2];
    x = vetor[random_1];
    y = vetor[random_2];

    //Imprime todas as posições com a alteração
    for(i = 0; i < 8; i++){
        cout << "Posicao[" << i << "] = " << vetor[i] << "\n";
    }

    //Soma dos vetores x e y
    cout << "Soma dos vetores aleatorios = " << vetor[random_1] + vetor[random_2] << "\n";
}
