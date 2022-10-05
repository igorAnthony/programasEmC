#include <stdio.h>
#include <stdlib.h>
void converteTemperatura(float C);
int main()
{
    //variaveis
    float celsius;
    //instrução
    printf("Digite a temperatura em celsius:");
    //le um valor
    scanf("%f", &celsius);
    //chama a função para converter
    converteTemperatura(celsius);
    //retorno da main
    return 0;
}
void converteTemperatura(float C)
{
    float F;
    F = (C*9 + 160)/5;
    printf("%.2f", F);
}
