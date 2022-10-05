#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;
int calculaExponencial(int X, int Z);
int main()
{
    //variaveis
    int valor1, valor2, recebe_exp;
    //instrução
    cout << "Digite dois valores:";
    //le dois valores
    cin >> valor1 >> valor2;
    //chama a função
    recebe_exp = calculaExponencial(valor1, valor2);
    //imprime o valor exponencial de x elevado a z
    cout << recebe_exp;
    //retorno da main
    return 0;
}
int calculaExponencial(int X, int Z)
{
    int passa_exponencial = X;
    while(Z - 1 > 0)
    {
        passa_exponencial = passa_exponencial*X;
        Z--;
    }
    return passa_exponencial;
}
