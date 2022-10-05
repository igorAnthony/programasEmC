#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
//Programa para calcular a soma de 3 quadrados
//Função Principal
int main()
{
    //Definindo variaveis
    float a = 0, b = 0, c = 0, S = 0;
    //Pede para o usuario informar os três valores
    printf("****Programa para calcular a soma de 3 quadrados****\n\n");
    printf("Informe 3 valores:");
    scanf("%f%f%f", &a, &b, &c);
    //Formula para calcular a soma de 3 quadrados
    S = pow(a, 2) + pow(b, 2) + pow(c, 2);
    //Imprime o resultado a soma de 3 quadrados
    printf("A soma = %.2f\n\n", S);
    //Pausa o programa após executar
    system("pause");
}
