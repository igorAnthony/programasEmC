#include <stdio.h>
#include <stdlib.h>
//Programa para converter centimetros em polegadas
int main()
{
    //Definindo as variaveis
    float P = 0, C = 0;
    //Pede para o usuario informar o valor em centimetros para converter em polegadas
    printf("Informe o valor em centimetros para converter em polegadas: ");
    scanf("%f", &C);
    //Formula para calcular a conversão
    P = (C)/2.54;
    //Imprime o resultado da conversão de centimetro para polegadas
    printf("Em centimetros %.2f para polegadas = %.2f\n", C, P);
    //Pause o programa após executar
    system("pause");
}
