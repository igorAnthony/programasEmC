#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;
void limpaTela();
typedef struct
{
    char nome[50];
    int idade;
}Pessoas;
int main()
{
    //VARIAVEIS
    Pessoas pessoa[10];
    int i, salvaVET = 0, maisJOVEM, save1, maisVELHA, save2;
    //salva o nome e a idade de cada
    for(i = 0; i < 10; i++)
    {
        cout << "Nome da" << i +1 <<  "pessoa:";
        cin >> pessoa[i].nome;
        cout << "Idade:";
        cin >> pessoa[i].idade;
        if(pessoa[i].idade < 0)
        {
            salvaVET = i;//salva a posição onde inseriu o negativo
            i = 10;//vai para a posição 10 e sai da condição
        }
    }
    //start para comparar
    maisJOVEM = maisVELHA = pessoa[0].idade;

    limpaTela();
    //condição para comparar
    for(i = 0; i < salvaVET; i++)
    {
        if(pessoa[i].idade > maisVELHA){
            maisVELHA = pessoa[i].idade;
            save1 = i;
        }
        if(pessoa[i].idade < maisJOVEM)
            maisJOVEM = pessoa[i].idade;
            save2 = i;
    }
    cout << "Pessoa mais velha: " << pessoa[save1].nome << endl << "Idade: " << pessoa[save1].idade << endl;
    cout << "Pessoa mais jovem: " << pessoa[save2].nome << endl << "Idade: " << pessoa[save2].idade << endl;

    return 0;
}
void limpaTela()
{
    system("cls");
}
