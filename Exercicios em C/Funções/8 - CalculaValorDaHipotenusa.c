#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void calculaHipotenusa(float cateto1, float cateto2);
int main()
{
    //variaveis
    float a, b;
    //instrução
    printf("Digite o valor dos dois catetos:");
    //le dois valores
    scanf("%f%f", &a, &b);
    //chama a função para calcular a hipotenusa
    calculaHipotenusa(a, b);
    //retorno da main
    return 0;
}
void calculaHipotenusa(float cateto1, float cateto2)
{
    float hip;
    hip = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    printf("%f u.m", hip);
}
