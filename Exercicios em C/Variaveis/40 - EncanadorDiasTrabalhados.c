#include <stdio.h>
#include <stdlib.h>
//Programa que calcula o quanto o encanador vai ganhar pelos dias trabalhados

//Função Principal
int main()
{
    //Definindo variaveis
    int dias = 0;
    float salario_liquido = 0;
    //Apresenta o programa e pede a quantidade de dias que ele vai trabalhar
    printf("****Programa para calcular o salario liquido do encanador no mes****\n\n");
    printf("Recebe 30 reais por dia\nImposto de renda eh 8 porcento\n");
    printf("Informe a quantidade de dias trabalhados nesse mes: ");
    scanf("%d", &dias);
    //Formula para chegar no salario liquido
    salario_liquido = 30*dias - (30*dias*8)/100;
    //Imprime o salario liquido do encanador esse mes
    printf("O salario liquido do encanador = R$%.2f\n\n", salario_liquido);
    //Pausa o programa após executar
    system("pause");
}
