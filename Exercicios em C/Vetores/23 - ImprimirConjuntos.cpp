#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#define TAM 5

using namespace std;

int main()
 {

    //variaveis
    int vet[TAM], vet2[TAM], i, pr_esc = 0;

    //instrução
    cout << "Digite 5 valores: ";
    for(i = 0; i < TAM; i++)
    {
         cin >> vet[i];//le os valores pro vetor
    }
    cout << "Digite 5 valores novamente: ";
    for(i = 0; i < TAM; i++)
    {
         cin >> vet2[i];//le os valores pro segundo vetor
    }
    system("cls"); //limpa a tela
    for(i = 0; i < TAM; i++)
    {
        //Imprime os vetores
        cout << "x" << i + 1 << ": " << vet[i] << "   y" << i + 1 << ": " << vet2[i] << "\n";
        pr_esc += vet[i]*vet2[i]; //calcula o produto escalar
    }
    //imprime o produto escalar
    cout << "produto escalar: " << pr_esc << "\n";
    //Pausa o programa após executar
    system("pause");

    return 0;
 }
