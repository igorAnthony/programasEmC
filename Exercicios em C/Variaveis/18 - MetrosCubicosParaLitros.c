#include <stdio.h>
#include <stdlib.h>
//Programa para converter Metros C�bicos em litros
int main()
{
    //Definindo as variaveis
    float M = 0, L = 0;
    //Pede para o usuario informa o valor em metros cubicos para converter em litros
    printf("Informe o valor em metros cubicos para converter em litros: ");
    scanf("%f", &M);
    //Formula para converter o valor em litros
    L = (M)*1000;
    //Imprime o resultado da convers�o de metros c�bicos para litros
    printf("%.2f em metros cubicos para litros = %.2f\n", M, L);
    //Pausa o programa ap�s executar
    system("pause");
}
