#include <stdio.h>
#include <stdlib.h>
//Programa para converter libras em kg
//Fun��o Principal
int main()
{
    //Definindo variaveis
    float L = 0, K = 0;
    //Pede ao usuario para informar o valor em libras
    printf("***********Converter Libras em Kilograma***********\n");
    printf("O valor em libras: ");
    scanf("%f", &L);
    //Formula para converter
    K = (L)*0.45;
    //Imprime o resultado da convers�o
    printf("%.2f em libras para kg = %.2f\n", L, K);
    //Pausa o programa ap�s executar
    system("pause");
}
