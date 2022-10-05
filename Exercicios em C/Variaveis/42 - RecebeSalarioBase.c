#include <stdio.h>
#include <stdlib.h>
//Programa que recebe salario base e calcula o imposto de 7% em cima do salario base e a gratificação de 5%

//Função Principal
int main()
{
    //Definindo variaveis
    float salariobase = 0, salariopagoimposto = 0;
    //Apresenta o programa e recebe o salario base
    printf("****Programa para calcular o valor da gratificacao e o imposto em cima do salario****\n\n");
    printf("Informe o salario base: ");
    scanf("%f", &salariobase);
    //Formula para calcular o imposto
    salariopagoimposto = salariobase - (salariobase*7)/100;
    //Imprime o resultado
    printf("O imposto a ser pago = R$ %.2f\n", (salariobase*7)/100);
    printf("O valor a ser recebido com a gratificacao: R$ %.2f\n", salariopagoimposto + (salariopagoimposto*5)/100);
    //Pausa o programa após executar
    system("pause");
}
