#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

//Fun��o que retorna o valor 10
int retornaDez();
//Fun��o que retorna float
float retornaQuebrado();
int main()
{
    //variaveis
    int a;
    float b;

    //Passando o valor de uma fun��o para variavel
    a = retornaDez();
    b = retornaQuebrado();
    //Imprimindo valor de a e b
    cout << "Valor de a: " << a << "\n";
    cout << "Valor de b: " << b << "\n";

    return 0;
}
int retornaDez()
{
    return 10;
}
//Retorna um n�mero float
float retornaQuebrado()
{
    return 5.5;
}
