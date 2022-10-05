#include <stdio.h>
#include <stdlib.h>
/*O custo ao consumidor de um carro novo e a soma do custo de fabrica, da comissao
do distribuidor, e dos impostos. A comissao e os impostos sao calculados sobre o custo
de fabrica, de acordo com a tabela abaixo. Leia o custo de fabrica e escreva o custo ao
consumidor
até 12000 5% de comissao e isento de impostos
entre 12000 e 25000 10% de comissao e 15% de impostos
maior que 25000 15% de comissao e 20% de impostos*/
//Função Principal
int main()
{
    //Definindo Variaveis
    float comissao = 0, impostos = 0, custo = 0;
    printf("Qual foi o custo de fabrica para fabricar esse carro?");
    scanf("%f", &custo);
    if(custo <= 12000){
        comissao = (custo*5)/100;
        printf("Custo para o consumidor R$:%.2f\n", custo + comissao);
    }else if(custo > 12000 && custo <= 25000){
        comissao = (custo*10)/100;
        impostos = (custo*15)/100;
        printf("Custo para o consumidor R$:%.2f\n", custo + comissao + impostos);
    }else if(custo > 25000){
        comissao = (custo*15)/100;
        impostos =(custo*20)/100;
        printf("Custo para o consumidor R$:%.2f\n", custo + comissao + impostos);
    }
    //Pausa o programa após executar
    system("pause");

}
