#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

//Função que retorna letra
char retornaLetra();
int main()
{
    //variaveis
    char letra;

    //Char recebendo valor de uma função
    letra = retornaLetra();

    //Imprimindo um valor
    cout << "Valor de letra: " << letra << "\n";

    return 0;
}
char retornaLetra()
{
    return 120;
}
