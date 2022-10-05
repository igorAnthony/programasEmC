#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    //VARIAVEIS
    int i, j;
    char str1[255];
    char strvogais[] = "aeiouAEIOU";
    //INSTRUÇÃO
    cout << "Digite qualquer coisa:";
    cin.getline(str1, 255);
    cout << "Texto sem vogais:";
    for(i = 0; i < strlen(str1); i++)
    {
        if(!(strchr(strvogais, str1[i])))
        {
            cout << str1[i];
        }
    }
    return 0;
}
