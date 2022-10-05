#include <stdio.h>
#include <stdlib.h>
//Programa para converter Celsius para Fahrenheit
int main()
{
    //Definindo Variaveis
    float F = 0, C = 0;
    //Pedindo para o usuario um valor de Celsius
    printf("Digite o valor da temperatura em Graus Celsius para transformar em Fahrenheit: ");
    scanf("%f", &C);
    //Formula para calcular
    F = (9*C)/5 + 32;
    //Imprimindo o resultado
    printf("O valor em Fahrenheit = %.1fF\n", F);
    //Pausando o programa após executar
    system("pause");
}
