#include <stdio.h>
#include <stdlib.h>
//Transformar Fahrenheit em Celsius
int main()
{
    //Definindo variaveis
    float F = 0, C = 0;
    //Pede para o usuário informar a temperatura
    printf("Digite a temperatura em Fahrenheit para transformar em Celsius: ");
    scanf("%f", &F);
    //Formula para transformar
    C = 5*(F - 32)/9;
    //Imprime o resultado da transformação em Celsius
    printf("A temperatura em Celsius = %.1fC\n", C);
    //Pausa o programa após executar
    system("pause");
}
