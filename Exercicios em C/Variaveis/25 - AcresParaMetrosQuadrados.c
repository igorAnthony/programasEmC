#include <stdio.h>
#include <stdlib.h>
//Programa para converter Acres em Metros Quadrados
//Função Principal
int main()
{
    //Definindo variaveis
    float A = 0, M = 0;
    //Pede para o usuario informar o valor em acres
    printf("*****Programa para converter Acres em Metros Quadrados*****\n\n");
    printf("Informe o valor em Acres: ");
    scanf("%f", &A);
    //Formula para converter
    M = (A)/0.000247;
    //Imprime o resultado da conversão
    printf("O valor em metros quadrados: %.2f\n", M);
    //Pausa o programa após executar
    system("pause");
}
