#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    //variaveis
    char S[255], C;
    int I, i, pos;

    //instrução
    cout << "Digite uma frase:";
    cin.getline(S, 255);//le string
    cout << "Digite um caractere:";
    cin >> C;//le caractere
    cout << "Informe uma posicao:";
    cin >> I;//le uma posicao
    /*Condição para o exercicio, a partir da posicao digitada pelo usuario, começar verificar a ocorrencia do caractere
    assim que encontrar o caractere que o usuario digitou ele vai salvar a posicao*/
    for(i = I; i < strlen(S); i++)
    {
        if(S[i] == C)
        {
            pos = i;
        }
    }
    cout << "Primeira vez onde o caractere foi encontrado foi na posicao: " << pos;
    return 0;
}
