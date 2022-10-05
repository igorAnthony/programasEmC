#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#define TAM 5
using namespace std;

int main()
{
    //variaveis
    int vet[TAM], i, ordem = 0;

    //instrução
    cout << "Digite 5 valores: ";
    for(i = 0; i < TAM; i++){
        cin >> vet[i];
    }
    cout << "Escolha a ordem para exibir: ";
    cin >> ordem;

    //Caso o usuario digite valor maior que 2 ou menor que 1 ele pede para digitar novamente
    while(ordem > 2 || ordem < 0){
        cout << "Opcao invalida!! Digite novamente:";
        cin >> ordem;
    }
    //Condição para imprimir na ordem inversa ou direta
    switch(ordem)
    {
        case 1:
            cout << "Ordem direta selecionada!" << "\n";
            for(i = 0; i < TAM; i++)
            {
                cout << "Vetor[" << i << "] = " << vet[i] << "\n";
            }
        break;

        case 2:
            cout << "Ordem inversa selecionada!" << "\n";
            for(i = TAM - 1; i >= 0; i--)
            {
                cout << vet[i] << " ";
            }
            break;

        case 0:
            cout << "Fim";
            break;
    }
    cout << "\n";
    //Pausa o programa após executar
    system("pause");

    return 0;
}

