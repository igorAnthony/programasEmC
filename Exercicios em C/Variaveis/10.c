#include <stdio.h>
#include <stdlib.h>
//Programa para converter Km/h para m/s
int main()
{
    //Definindo Variaveis
    float M = 0, K = 0;

    //Usuario informa a velocidade em km/h
    printf("Informe a velocidade em km/h para ser convertida em m/s: ");
    scanf("%f", &K);

    //Formula para transformar km/h para m/s
    M = (K)/3.6;

    //Imprime o resultado da conversão de km/h para m/s
    printf("A velocidade %.2fkm/h convertida para m/s eh %.2fm/s\n", K, M);

    //Pausa o programa após executar
    system("pause");
}
