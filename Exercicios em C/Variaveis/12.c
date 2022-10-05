#include <stdio.h>
#include <stdlib.h>
//Programa para converter milhas para quilômetros
int main()
{
    //Definindo as variaveis
    float M = 0, K = 0;

    //Pede para o usuario informar o valor em Milhas
    printf("Informe a distância em MILHAS para ser convertido em QUILÔMETROS: ");
    scanf("%f", &M);

    //Formula para converter o valor de MILHAS para QUILÔMETROS
    K = (M)*1.609;

    //Imprime o resultado da conversão de MILHAS para QUILÔMETROS
    printf("A distância em QUILÔMETROS = %.2fKM\n", K);

    //Pausa o programa após executar
    system("pause");
}
