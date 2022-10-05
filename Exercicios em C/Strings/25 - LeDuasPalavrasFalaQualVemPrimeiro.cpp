#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    //variaveis
    char palavra1[50], palavra2[50];
    int i, j = 0;
    //instrução
    cout << "Digite uma palavra:";
    cin.getline(palavra1, 50);
    fflush(stdin);
    cout << "Digite outra palavra:";
    cin.getline(palavra2, 50);

    if(strcmp(palavra1, palavra2) > 0 || strcmp(palavra1, palavra2) < 0)
    {
        for(i = 0; i < strlen(palavra2); i++)
        {
            if(palavra2[i] < palavra1[j] && j <= i)
            {
                cout << "A segunda palavra vem primeiro";
                break;
            }else if(palavra1[i] < palavra2[i] && j <= i){
                cout << "A primeiro palavra vem primeiro";
                break;
            }
        j++;
        }
    }else{
        cout << "As palavras sao iguais!!";
    }
    return 0;
}
