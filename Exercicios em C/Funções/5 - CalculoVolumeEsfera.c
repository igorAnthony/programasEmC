#include <stdio.h>
#include <stdlib.h>
void calculaVolumeEsfera(float valorRaio);
int main()
{
    //variaveis
    float raio, volume;
    //instru��o
    printf("Digite o valor do raio:");
    //le um valor
    scanf("%f", &raio);
    //chama a fun��o
    calculaVolumeEsfera(raio);
    //retorno da fun��o main
    return 0;
}
void calculaVolumeEsfera(float valorRaio)
{
    float v, pi = 3.14159265359;
    v = (4*pi*valorRaio)/3;
}
