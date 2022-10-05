#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
typedef struct
{
    char primeiraLetra;
    char ultimaLetra;
    char texto[255];
}primeiraPalavra;
int main()
{
    int i;
    primeiraPalavra palavra[3];
    strcpy(palavra[0].texto, "legal");
    strcpy(palavra[1].texto, "bacana");
    strcpy(palavra[2].texto, "daora");
    palavra[0].primeiraLetra = palavra[0].texto[0];
    palavra[0].ultimaLetra = palavra[0].texto[strlen(palavra[0].texto) - 1];
    palavra[1].primeiraLetra = palavra[1].texto[0];
    palavra[1].ultimaLetra = palavra[1].texto[strlen(palavra[1].texto) - 1];
    palavra[2].primeiraLetra = palavra[2].texto[0];
    palavra[2].ultimaLetra = palavra[2].texto[strlen(palavra[2].texto) - 1];
    for(i = 0; i < 3; i++)
    {
        cout << palavra[i].texto << " " << palavra[i].primeiraLetra << " " << palavra[i].ultimaLetra;
        cout << endl;
    }
    return 0;
}
