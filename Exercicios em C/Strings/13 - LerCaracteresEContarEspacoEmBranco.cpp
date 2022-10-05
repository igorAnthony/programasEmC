#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;
void limpaLinhas()
{
    system("cls");
}
int main()
{
        //VARIAVEIS
        char str1[255];
        int i = 0, quant = 0;
        //instrução
        cout << "Digite uma frase:";
        cin.getline(str1, 255);
        for(i = 0; i < strlen(str1); i++)
        {
            if(str1[i] == ' ')
            {
                quant++;
            }
        }
        cout << "Quantidade de espacos em branco: " << quant << endl;

        return 0;
}
