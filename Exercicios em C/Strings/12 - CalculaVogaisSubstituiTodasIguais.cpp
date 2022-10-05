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
    int i, j, vogais = 0;
    char str1[255], letra;
    char strvogais[] = "aeiouAEIOU";
    //INSTRUÇÃO
    cout << "Digite qualquer coisa:";
    cin.getline(str1, 255);
    //Calcula Quant de vogais
    for(i = 0; i < strlen(str1); i++)
    {
        if(strchr(strvogais, str1[i]))
        {
            vogais++;
        }
    }
    //Entra com uma letra aleatoria
    cout << "Digite uma letra: ";
    cin >> letra;
    limpaLinhas();
    cout << "Frase digitada: " << str1 << endl;
    cout  << "Quantidade de vogais: " << vogais << endl;
    cout << "Frase sem vogais substituida pela letra " << letra << ": ";
    //substitui as vogais por variavel letra
        for(i = 0; i < strlen(str1); i++)
        {
            if(strchr(strvogais, str1[i])){
                str1[i] = letra;
                cout << str1[i];
            }
            else if(!(strchr(strvogais, str1[i]))){
                cout << str1[i];
            }
        }
    return 0;
}

