#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    //VARIAVEIS
    char str[50], strCopia[50];
    int i, j = 0;

    //INSTRUÇÃO
    cout << "Digite uma string:";
    cin.getline(str, 50);
    //Copia a string de trás pra frente
    for(i = strlen(str) - 1; i >= 0; i--)
    {
          strCopia[j]  = str[i];
          j++;
          if(j == strlen(str))
          {
              strCopia[j] = '\0';
          }
    }
    //Compara as string, se for 0 é pq sao iguais, ent é um palindromo
    if(strcmp(str, strCopia) == 0)
    {
        cout << "A string eh um palindromo!!!";
    }else{
        cout << "Nao eh um palindromo";
    }

    return 0;
}
