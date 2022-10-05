#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;
void calculaMedia(float *vetNotas, int tamanho);
int main()
{
    int i;
    float notas[3];
    float media;
    for(i = 0; i < 3; i++)
    {
        cin >> notas[i];
    }
    calculaMedia(notas, 3);
}
void calculaMedia(float *vetNotas, int tamanho)
{
    float resul = 0;
    int i;
    char carac;
    cout << "Digite um caractere: A para calcula a media arit ou P para media ponderada" << endl;
    cin >> carac;
    if(carac == 'A')
    {
        for(i = 0; i < 3; i++)
        {
            resul += vetNotas[i];
        }
        cout << "O valor da media aritmetica eh: s" << resul/3;
    }
    else if(carac == 'P')
    {
        resul = vetNotas[0]*5 + vetNotas[1]*3 + vetNotas[2]*2;
        cout << "O valor de media ponderada: " << resul/10;
    }
}

