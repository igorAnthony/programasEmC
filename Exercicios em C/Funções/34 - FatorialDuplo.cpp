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
    int n, fatorial_num = 1;

    for(n = 1; n <= num; n++)
    {
        if(n % 2 == 0)
        {
            n++;
        }
        fatorial_num = fatorial_num*n;
    }
    cout << "O valor da fatoracao de " << num << ": " << fatorial_num << endl;
}
