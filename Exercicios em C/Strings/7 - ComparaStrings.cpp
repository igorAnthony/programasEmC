#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    //variaveis
    int i, iguais = 0;
    char str1[255], str2[255];
    cout << "Digite um nome:";
    cin.getline(str1, 255);
    cout << "Digite mais um nome:";
    cin.getline(str2, 255);
    if(strlen(str1)==strlen(str2))
    {
        for(i = 0; i < strlen(str1); i++)
        {
            if(str1[i] == str2[i])
            {
                iguais++;
            }
        }
    }
    if(iguais == strlen(str1))
    {
        cout << "sao iguais!!" << endl;
    }else{
        cout << "Nao sao iguais" << endl;
    }

}
