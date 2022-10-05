#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;
float operacaoMat(float num1, float num2, char simbolo);
int main()
{
    //variaveis
    float valor1, valor2, resultado;
    char simbolo;
    //instrução
    cout << "Digite dois valores: ";
    //le dois valores
    cin >> valor1 >> valor2;
    //instrução
    cout << "Qual operacao matematica gostaria de fazer?" << endl << "+ adicao" << endl << "- subtracao" << endl << " / divisao" << endl << "* multiplicacao" << endl;
    //le um simbolo para realizar a operacao
    cin >> simbolo;
    //chama a função e retorna o valor
    resultado = operacaoMat(valor1, valor2, simbolo);
    //retorno da função
    cout << resultado;
    return 0;
}
float operacaoMat(float num1, float num2, char simbolo)
{
    if(simbolo == 43)
    {
        return num1 + num2;
    }
    else if(simbolo == 45)
    {
        return num1 - num2;
    }
    else if(simbolo == 47)
    {
        return (num1)/num2;
    }
    else if(simbolo == 42)
    {
        return num1*num2;
    }
}
