#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    //Verificando tamanho de uma string
    int i;
    char nome[50];
    cout << "Digite um nome: ";
    cin.getline(nome, 50);
    cout << "O nome armazenado eh: " << nome << " que tem " << strlen(nome) << " caracteres." << "\n";

    return 0;
}
