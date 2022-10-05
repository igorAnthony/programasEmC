#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;
void calculaFatorial(int num);
int main()
{
    //variaveis
    int valor;
    //instrução
    cout << "Digite um valor: ";
    //le um valor
    cin >> valor;
    //chama a função
    calculaFatorial(valor);
    //retorno da main
    return 0;
}
void calculaFatorial(int num)
{
    int n, aux_n, fat1 = 2*num, fat2 = num;
    aux_n = num - 1;
    while(aux_n >= 1)
    {
        n = 2*aux_n - 1;
        fat1 = fat1*n;
        aux_n--;
    }
    n = num - 1;
    while(n >= 1)
    {
        fat2 = fat2*n;
        n--;
    }
    float resul_fatQuadr = fat1/(float)fat2;
    cout << "O valor da fatoracao de " << num << ": " << resul_fatQuadr << endl;
}
