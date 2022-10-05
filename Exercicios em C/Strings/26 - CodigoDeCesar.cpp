#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    //variaveis
    char str[255];
    int i;

    //instrução
    cout << "Entre com uma string:";
    cin.getline(str, 255);
    //condicao para o codigo de cesar de 3 posicoes
    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] == ' ')
        {
        }else{
            str[i] = str[i] + 3;
        }
    }
    cout << "String codificada:" << str;

    return 0;
}
