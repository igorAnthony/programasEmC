#include <stdio.h>
#include <stdlib.h>
//Programa para converter radianos em graus
int main()
{
    //Definindo as variaveis
    float R = 0, G = 0;
    //Usuario informa o valor em radianos para ser convertido em graus
    printf("Informe o valor em radianos para ser convertido em graus: ");
    scanf("%f", &R);
    //Formula para fazer a convers�o
    G = R*(180/3.14);
    //Imprime o resultado da convers�o
    printf("O valor informado em graus = %.2f\n", G);
    //Pause o programa ap�s executar
    system("pause");
}
