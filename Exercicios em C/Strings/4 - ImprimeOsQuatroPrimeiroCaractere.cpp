#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;
void limpaTela()
{
    system("cls");
}
int main()
{
    //variaveis
    char frase[255];
    int i;
    //instrução
    cout << "Digite uma frase: ";
    cin.getline(frase, 255);
    limpaTela();
    cout << "Os quatro primeiro caractere:";
    for(i = 0; i < 4; i++)
        cout << frase[i];
    return 0;
}
