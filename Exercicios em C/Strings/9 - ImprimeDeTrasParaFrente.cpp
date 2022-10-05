#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    //variaveis
    char str1[255];
    int i;
    //instrução
    cout << "Digite uma palavra:";
    cin.getline(str1, 255);
    cout << "A palavra de tras pra frente:";
    for(i = strlen(str1) - 1; i >= 0; i--)
    {
        cout << str1[i];
    }

    return 0;
}
