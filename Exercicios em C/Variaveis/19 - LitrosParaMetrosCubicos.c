#include <stdio.h>
#include <stdlib.h>
//Programa para converter litros em metros cubicos
//Fun��o Principal
int main()
{
    //Definindo variaveis
    float L = 0, M = 0;
    //Pede para o usuario informar o valor em litros para converter em metros cubicos
    printf("Informe o valor em litros para converter em metros cubicos: ");
    scanf("%f", &L);
    //Formula para calcular a convers�o
    M = (L)/1000;
    //Imprime o resultado da convers�o
    printf("%.2f litros para metros cubicos = %.2f\n", L, M);
    //Pausa o programa ap�s executar
    system("pause");
}
