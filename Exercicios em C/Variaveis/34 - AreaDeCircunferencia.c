#include <stdio.h>
#include <stdlib.h>
//Programa para calcular a area de uma circunferencia

//Função Principal
int main()
{
    //Definindo variaveis
    float R = 0;
    //Apresenta o programa e pede um valor
    printf("***Programa para calcular a area de um circulo***\n");
    printf("Digite o valor do raio: ");
    scanf("%f", &R);
    //Calcula e imprime a area
    printf("O valor da area do circulo = %.2f u.a\n\n", 3.141592*(R*R));
    //Pausa o programa após executar
    system("pause");
}
