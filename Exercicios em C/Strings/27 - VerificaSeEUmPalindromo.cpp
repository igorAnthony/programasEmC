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

    //INSTRU��O
    cout << "Digite uma string:";
    cin.getline(str, 50);
    //Copia a string de tr�s pra frente
    for(i = strlen(str) - 1; i >= 0; i--)
    {
          strCopia[j]  = str[i];
          j++;
          if(j == strlen(str))
          {
              strCopia[j] = '\0';
          }
    }
    //Compara as string, se for 0 � pq sao iguais, ent � um palindromo
    if(strcmp(str, strCopia) == 0)
    {
        cout << "A string eh um palindromo!!!";
    }else{
        cout << "Nao eh um palindromo";
    }

    return 0;
}
