#include <stdio.h>
#include <stdlib.h>
//Programa para calcular a conversão de m/s para km/h
int main()
{
    //Definindo as variaveis
    float M = 0, K = 0;

    //Pede para o usuario informa a velocidade em m/s para converter em km/h
    printf("Informe a velocidade em m/s para ser convertida em km/h: ");
    scanf("%f", &M);

    //Formula para calcular a velocidade de m/s para km/s
    K = (M)*3.6;

    //Imprime o resultado da conversão
    printf("A velocidade convertida = %.1fkm/h\n", K);

    //Pausa o programa após executar
    system("pause");
}
