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

    //Formula para calcular a transforma��o kelvin para celsius
    C = K - 273.15;

    //Resultado da transforma��o em Celsius
    printf("A temperatura em Celsius = %.1fC\n", C);

    //Pausa o programa ap�s executar
    system("pause");
}
