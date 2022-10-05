#include <stdio.h>
#include <stdlib.h>
//Transforma a temperatura em Kelvin para Celsius
int main()
{
    //Definindo Variaveis
    float K = 0, C = 0;

    //Pede para o usuario informa a temperatura em Kelvin
    printf("Informe a temperatura em Kelvin para ser transformada em Celsius: ");
    scanf("%f", &K);

    //Formula para calcular a transformação kelvin para celsius
    C = K - 273.15;

    //Resultado da transformação em Celsius
    printf("A temperatura em Celsius = %.1fC\n", C);

    //Pausa o programa após executar
    system("pause");
}
