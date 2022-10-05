#include <stdio.h>
#include <stdlib.h>
//Programa para calcular o novo salario de um funcionario que recebou aumento de 25%

//Função Principal
int main()
{
    //Definindo variaveis
    float S = 0;
    //Apresenta o programa o pede o salario atual do funcionario
    printf("****Programa para calcular o aumento de 25 porcento no salario****\n");
    printf("Informe o salario atual: R$");
    scanf("%f", &S);
    //Calcula o aumento e imprime o resultado
    printf("O novo salario do funcionario = R$%.2f\n\n", S + (S*25)/100);
    //Pausa o programa após executar
    system("pause");
}
