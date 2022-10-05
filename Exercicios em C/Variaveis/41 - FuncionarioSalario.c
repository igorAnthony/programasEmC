#include <stdio.h>
#include <stdlib.h>
//Programa para calcular o valor do salário a ser pago a um funcionario

//Função Principal
int main()
{
    //Definindo variaveis
    float valor_por_hora = 0, hora = 0, pagar = 0;
    //Apresenta o programa e pede os valores
    printf("****Programa para calcular o salario de um funcionario****\n\n");
    printf("Insira o valor por hora de trabalho: ");
    scanf("%f", &valor_por_hora);
    printf("Insira o numero de horas trabalhadas no mes: ");
    scanf("%f", &hora);
    //Formula para calcular o valor a ser pago
    pagar = (valor_por_hora)*hora + ((valor_por_hora)*hora*10)/100;
    //Imprime e calcula o salario
    printf("O VALOR a ser pago ao funcionario adicionando 10 porcento: R$%.2f\n\n", pagar);
    //Pausa o programa após executar
    system("pause");
}
