#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;
//fun��o
void limpaTela();
//struct
typedef struct
{
    char nome[50];
    int valorTotal;
}Mercadorias;
int main()
{
    //typedef
    Mercadorias mercadoria;
    //instru��o
    cout << "Digite o nome da mercadoria:";
    cin.getline(mercadoria.nome, 50);//le string
    //instru��o
    cout << "Valor em reais:";
    cin >> mercadoria.valorTotal;//le inteiro

    limpaTela();

    //Imprime a string mercadoria e o valor total, valor do desconto e o valor � vista
    cout << "Mercadoria: " << mercadoria.nome << endl << "Valor total: " << mercadoria.valorTotal <<" reais" << endl;
    cout << "Valor do desconto: " << (mercadoria.valorTotal*10)/100 << " reais" << endl;
    cout << "Valor a ser pago a vista: " << mercadoria.valorTotal - (mercadoria.valorTotal*10)/100 <<" reais" << endl;

    return 0;
}
void limpaTela()
{
    system("cls");
}
