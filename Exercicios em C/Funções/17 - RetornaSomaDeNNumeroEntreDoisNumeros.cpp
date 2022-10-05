#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;
int somaDeValores(int numero1, int numero2);
int main()
{
    //variaveis
    int valor1, valor2, recebe_soma;
    //instrução
    cout << "Digite dois valores em ordem decrescente:";
    //le dois valores
    cin >> valor1 >> valor2;
    //chama a função
    recebe_soma = somaDeValores(valor1, valor2);
    cout << recebe_soma;
    //retorno da função main
    return 0;
}
int somaDeValores(int numero1, int numero2)
{
    int soma = 0;
    for(numero1 = numero1 + 1; numero1 < numero2; numero1++)
    {
        soma += numero1;
    }

    return soma;
}
