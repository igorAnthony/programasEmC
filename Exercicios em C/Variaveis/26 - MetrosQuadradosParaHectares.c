#include <stdio.h>
#include <stdlib.h>
//Programa paara converter metros quadrados em hectares
//Fun��o Principal
int main()
{
    //Definindo as variaveis
    float M = 0, H = 0;
    //Pede para o usuario informar o valor em metros quadrados
    printf("*****Programa para converter Metros Quadrados em Hectares*****\n\n");
    printf("Informe o valor em metros quadrados: ");
    scanf("%f", &M);
    //Formula para calcular a convers�o para hectares
    H = (M)/10000;
    //Resultado da convers�o em hectares
    printf("O valor em hectares: %.4f\n", H);
    //Pausa o programa ap�s executar
    system("pause");
}
