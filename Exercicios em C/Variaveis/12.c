#include <stdio.h>
#include <stdlib.h>
//Programa para converter milhas para quil�metros
int main()
{
    //Definindo as variaveis
    float M = 0, K = 0;

    //Pede para o usuario informar o valor em Milhas
    printf("Informe a dist�ncia em MILHAS para ser convertido em QUIL�METROS: ");
    scanf("%f", &M);

    //Formula para converter o valor de MILHAS para QUIL�METROS
    K = (M)*1.609;

    //Imprime o resultado da convers�o de MILHAS para QUIL�METROS
    printf("A dist�ncia em QUIL�METROS = %.2fKM\n", K);

    //Pausa o programa ap�s executar
    system("pause");
}
