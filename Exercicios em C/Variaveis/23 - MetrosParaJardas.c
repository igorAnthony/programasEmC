#include <stdio.h>
#include <stdlib.h>
//Programa para converter Metros em Jardas
//Função Principal
int main()
{
    //Definindo variaveis
    float M = 0, J = 0;
    //Pede para o usuario informar o valor em Metros
    printf("*****Programa para converter Metros em Jardas*****\n");
    printf("Informe o valor em Metros: ");
    scanf("%f", &M);
    //Formula para realizar a conversão
    J = (M)/0.91;
    //Imprime o resultado da conversão
    printf("O valor em Jardas: %.2f\n", J);
    //Pausa o programa após executar
    system("pause");
}
