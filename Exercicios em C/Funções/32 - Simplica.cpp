#include <string>
#include <iostream>
using namespace std;

void Simplifica(int *num1, int *num2);
int main()
{
    //variaveis
    int valor1, valor2;
    //instrução
    cout << "Digite sua fracao, primeiro o numero inteiro depois o divisor:";
    //le dois valores
    cin >> valor1 >> valor2;
    //chama a função
    Simplifica(&valor1, &valor2);
    if(valor2 == 1)
    {
        cout << valor1;
    }else{
        cout << valor1 << "/" << valor2;
    }
    //retorno da main
    return 0;
}
void Simplifica(int *num1, int *num2)
{
    int aux_div;
    for(aux_div = 2; aux_div <= *num1; aux_div++)
    {
        if(*num1 % aux_div == 0 && *num2 % aux_div == 0)
        {
            *num1 = *num1/aux_div;
            *num2 = *num2/aux_div;
            aux_div = 2;
        }
    }
}
