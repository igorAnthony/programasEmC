#include <stdio.h>
#include <stdlib.h>
//Programa que calcula o valor de 780mil divido entre 3 ganhadores o 1 com 46% 2 com 32% e o 3 com o restante

//Função Principal
int main()
{
    //Definindo variaveis
    float g1 = 0, g2 = 0, P = 780000;
    //Apresenta o Programa
    printf("****Programa que calcula o valor de 780mil divido entre 3 ganhadores****\n\n");
    //Formula para calcular o quanto cada um recebeu
    g1 = (P*46)/100;
    g2 = (P*32)/100;
    //Imprime o valor que cada ganhador levou
    printf("O primeiro levou = R$%.1f\nO segundo levou = R$%.1f\nO terceiro levou = R$%.1f\n\n", g1, g2, P - (g1 + g2));
    //Pausa o programa após executar
    system("pause");
}
