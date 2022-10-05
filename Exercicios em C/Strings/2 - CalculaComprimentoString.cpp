#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;
int contadorCaractere(char *str);
int main()
{
    //variaveis
    char palavra[255];
    int i, quantidade = 0;
    //instrução
    cout << "Digite uma frase: " << endl;
    //le frase
    cin.getline(palavra, 255);
    //chama a função
    quantidade = contadorCaractere(palavra);
    //imprime a palavra e a quantidade de caracteres
    cout << palavra << " tem " << quantidade << " de caracteres" << endl;
}
/*Função de ponteiro, pois vai mexer com o vetor, preciso apontar
na posição da memoria onde ele está para contar*/
int contadorCaractere(char *str)
{
    int quant = 0;
    int i = 0;
    while(str[quant] != '\0')
    {
        quant++;
    }
    return quant;
}
