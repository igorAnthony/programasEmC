#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;

void verificaNumerosPrimos(int valor);
int main()
{
    //variaveis
    int valor;

    //instrução
    cout << "Digite um valor:";
    //le valor
    cin >> valor;
    //chama a função
    verificaNumerosPrimos(valor);
    //retorno da main
    return 0;
}
void verificaNumerosPrimos(int valor)
{
    int verificaPrimos, div = 2, primos = 0;

    for(verificaPrimos = valor - 1; verificaPrimos >= 2; verificaPrimos--)
    {
        while(verificaPrimos % div != 0)
        {
            div++;
        }
        if(verificaPrimos == div)
        {
            primos++;
        }
        div = 2;
    }
    cout << "Quantidade de numeros primos:" << primos;
}
