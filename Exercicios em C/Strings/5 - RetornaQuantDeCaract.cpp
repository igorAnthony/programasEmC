#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;
int contadorCaractere(char *str);
int main()
{
    //variaveis
    char nome[255];
    int i, quantidade = 0;
    cout << "Digite um nome:";
    cin.getline(nome, 255);
    quantidade = contadorCaractere(nome);
    cout << "O nome tem " << quantidade << " letras" << endl;
}
int contadorCaractere(char *str)
{
    int quant = 0;
    while(str[quant] != '\0')
    {

        quant++;

    }
    return quant;
}
