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
    char cadeia[255];
    int i;
    //instrução
    cout << "Digite uma frase ou palavra em minusculo:" << endl;
    cin.getline(cadeia, 255);
    limpaTela();
    cout << "convertido para maiusculo:" << endl;
    for(i = 0; i < strlen(cadeia); i++)
    {
        if(cadeia[i] > 97 && cadeia[i] < 123)
        {
            cadeia[i] += -32;
            cout << cadeia[i];
        }else{
            cout << cadeia[i];
        }
    }
    return 0;
}
