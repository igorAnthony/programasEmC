#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Programa para calcular o valor da hipotenusa a partir de dois catetos

//Função Principal
int main()
{
    //Definindo variaveis
    float a = 0, b = 0;
    //Apresenta o programa e pede os valores do cateto
    printf("***Programa para calcular a hipotenusa a partir de dois catetos***\n\n");
    printf("Digite o valor do primeiro e segundo cateto: ");
    scanf("%f%f", &a, &b);
    //Calcular o valor da hipotenusa e imprime o valor
    printf("O valor da hipotenusa = %.1f u.m\n\n", sqrt(a*a + b*b));
    //Pausa o programa após executar
    system("pause");
}
