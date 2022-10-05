#include <stdio.h>
#include <stdlib.h>
//Programa para transformar Celsius em Kelvin
int main()
{
    //Define Variaveis
    float C = 0, K = 0;

    //Pede para o usuario informar a temperatura em Kelvin para transformar em Celsius
    printf("Informe a temperatura em Celsius para ser transformada em Kelvin: ");
    scanf("%f", &C);

    //Formula para calcular a transformação em kelvin
    K = C + 273.15;

    //Imprime o resultado da transformação de Celsius para kelvin
    printf("A temperatura em Kelvin = %.2fK\n", K);

    //Pausa o programa após executar
    system("pause");
}
