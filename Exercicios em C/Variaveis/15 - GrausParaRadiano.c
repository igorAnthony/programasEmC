#include <stdio.h>
#include <stdlib.h>
//Programa para converter graus para radiano
int main()
{
    //Definindo Variaveis
    float G = 0, R = 0;
    //Pede para o usuario informar o valor em graus para converter em radianos
    printf("Informe o valor em graus para converter em radianos: ");
    scanf("%f", &G);
    //Formula para fazer a conversão
    R = G * (3.14/180);
    //Imprime o resultado da conversão para graus
    printf("%.2f graus para radianos = %.3f rad\n", G, R);
    //Pause o programa após executar
    system("pause");
}
