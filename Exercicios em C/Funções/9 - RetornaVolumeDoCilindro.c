#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592
float retornaVolume(float r, float h);
int main()
{
    //variaveis
    float raio, altura, volume;
    //instrução
    printf("Digite o valor respectivamente do raio e da altura:");
    //le dois valores
    scanf("%f%f", &raio, &altura);
    //chama a função para o retorno do volume
    volume = retornaVolume(raio, altura);
    //mostra o valor de volume
    printf("Volume do cilindro: %f u.v", volume);
    //retorno da main
    return 0;
}
float retornaVolume(float r, float h)
{
   return pow(r, 2)*PI*h;
}
