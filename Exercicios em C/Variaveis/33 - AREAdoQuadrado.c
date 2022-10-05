#include <stdio.h>
#include <stdlib.h>
//Programa para calcular a area do quadrado

//Função Principal
int main()
{
    //Definindo variaveis
    float L = 0;
    //Apresenta o programa e pede para o usuario um valor
    printf("***Programa para calcular a area de um quadrado pelo lado***\n");
    printf("Digite o valor de um lado do quadrado: ");
    scanf("%f", &L);
    //Imprime o resultado
    printf("O valor da area do quadrado = %.2f u.a\n\n", L*L);
    //Pausa o programa após executar
    system("pause");
}
