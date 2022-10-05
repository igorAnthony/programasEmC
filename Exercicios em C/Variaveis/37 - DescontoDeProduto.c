#include <stdio.h>
#include <stdlib.h>
//Programa para calcular o desconto em um produto

//Função Principal
int main()
{
    //Definindo variaveis
    float P = 0;
    //Apresenta o programa e pede o valor do produto
    printf("****Programa para calcular o valor de um produto com desconto****\n");
    printf("Informe o valor do produto: ");
    scanf("%f", &P);
    //Calcula o desconto e imprime o resultado
    printf("O novo valor do produto com o desconto de 12 porcento = R$%.2f\n\n", P - (P)*12/100);
    //Pausa o programa após executar
    system("pause");
}
