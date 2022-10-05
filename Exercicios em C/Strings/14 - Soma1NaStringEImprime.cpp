#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    //VARIAVEIS
    char str1[50];
    int i;
    //INSTRUÇÃO
    cout << "Digite uma palavra de no max 50 letras:";
    cin.getline(str1, 50);
    //IMPRIME A PROXIMA LETRA NA TABELA ASCII
    for(i = 0; i < strlen(str1); i++)
    {
        str1[i] += 1;
        cout << str1[i];
    }
    return 0;
}
