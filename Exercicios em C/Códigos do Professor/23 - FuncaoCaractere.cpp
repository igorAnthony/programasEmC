#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

//Fun��o que retorna letra
char retornaLetra();
int main()
{
    //variaveis
    char letra;

    //Char recebendo valor de uma fun��o
    letra = retornaLetra();

    //Imprimindo um valor
    cout << "Valor de letra: " << letra << "\n";

    return 0;
}
char retornaLetra()
{
    return 120;
}
