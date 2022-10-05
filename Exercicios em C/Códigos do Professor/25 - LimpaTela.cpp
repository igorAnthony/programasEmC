#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

void limpaTela();

int main()
{
    //variaveis
    int a;

    //Imprimindo alguma coisa
    cout << "Digite um valor para a:";

    //Lendo um valor para a
    cin >> a;

    //limpa a tela
    //system("cls");

    //Chama a função que limpa tela
    limpaTela();

    //Imprimindo valor de a
    cout << "Valor de a: " << a << "\nFim do programa!";

    return 0;
}
void limpaTela()
{
    system("cls");
}
