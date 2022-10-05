#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;
int RetornaSomaAlgarismos(int num);
int main()
{
    //variaveis
    int valor, soma_alg;
    //instrução
    cout << "Digite um valor: ";
    //le um valor
    cin >> valor;
    //chama a função
    soma_alg = RetornaSomaAlgarismos(valor);
    //mostra na tela
    cout << "A soma dos algarismo do fatorial de " << valor << ": " << soma_alg << endl;
    //retorno da main
    return 0;
}
int RetornaSomaAlgarismos(int num)
{
    int n, fatorial_num = num, recebe_fatorial, soma_algarismos = 0;

    for(n = fatorial_num - 1; n >= 1; n--)
    {
        fatorial_num = fatorial_num*n;
    }
    cout << "O valor da fatoracao de " << num << ": " << fatorial_num << endl;
    recebe_fatorial = fatorial_num;
    //Soma dos algarismo
    while(recebe_fatorial > 0)
    {
        soma_algarismos+=recebe_fatorial%10;
        recebe_fatorial/=10;
    }
    return soma_algarismos;
}
