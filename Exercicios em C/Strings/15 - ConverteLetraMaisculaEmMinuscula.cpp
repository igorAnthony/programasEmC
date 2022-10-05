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
    //VARIAVEIS
    char cadeia[255];
    int i;
    //INSTRUÇÃO
    cout << "Digite uma frase ou palavra em maisculo:";
    cin.getline(cadeia, 255);
    limpaTela();
    cout << "convertido para minusculo: ";
    //condição para converter maisculo em minusculo
    for(i = 0; i < strlen(cadeia); i++)
    {
        if(cadeia[i] > 64 && cadeia[i] < 91)
        {
            cadeia[i] += 32;
            cout << cadeia[i];
        }else{
            cout << cadeia[i];
        }

    }
    return 0;
}
