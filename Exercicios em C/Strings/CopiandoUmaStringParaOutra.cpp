#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char nome1[50], nome2[50], nome3[50];
    int i;
    cout << "Digite um nome:" << endl;
    cin.getline(nome1,50);
    //strcpy(destino, origem)
    strcpy(nome2, nome1);
    //strncpy(destino, origem, x)
    strncpy(nome3, nome1, 7);
    //Imprimindo cada caractere da string
    for(i = 0; i < strlen(nome1); i++)
    {
        cout << nome1[i] << "\n";
    }
    cout << "Usando comandos de copia de strings:" << endl;
    cout << nome1 << endl << nome2 << endl << nome3 << endl;

    return 1;
}
