#include <stdio.h>
#include <stdlib.h>
//Programa para converter metros quadrados para acres
//Fun��o Principal
int main()
{
    //Definindo variaveis
    float M = 0, A = 0;
    //Pede para o usuario informar o valor em metros quadrados
    printf("*****Programa para converter Metros Quadrados em Acres*****\n");
    printf("Informe o valor em metros quadrados: ");
    scanf("%f", &M);
    //Formula para calcular a convers�o
    A = (M) * 0.000247;
    //Resultado da convers�o
    printf("Em acres: %.6f\n", A);
    //Pausa o Programa ap�s executar
    system("pause");
}
