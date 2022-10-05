#include <stdio.h>
#include <stdlib.h>
void calculaVolumeEsfera(float valorRaio);
int main()
{
    //variaveis
    float raio, volume;
    //instrução
    printf("Digite o valor do raio:");
    //le um valor
    scanf("%f", &raio);
    //chama a função
    calculaVolumeEsfera(raio);
    //retorno da função main
    return 0;
}
void calculaVolumeEsfera(float valorRaio)
{
    float v, pi = 3.14159265359;
    v = (4*pi*valorRaio)/3;
}
