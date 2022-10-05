#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;
int calculaFatorial(int tam_fat);
int main()
{
    //variaveis
    int valor;
    long double	super_fat = 1;
    //instrução
    cout << "Digite um valor: ";
    //le um valor
    cin >> valor;
    //chama a função
    while(valor >= 1)
    {
        super_fat = super_fat*calculaFatorial(valor);
        valor--;
    }
    /*for(i = 1; i < valor; i++)
    {
        super_fat = super_fat*vet_fat[i];
    }*/
    cout << super_fat;
    //retorno da main
    return 0;
}
int calculaFatorial(int tam_fat)
{
    int n, fat = tam_fat;
    for(n = tam_fat - 1; n >= 1; n--)
    {
        fat = fat*n;
    }
    return fat;
}

