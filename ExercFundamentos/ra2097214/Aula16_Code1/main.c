/* FUNDAMENTO DE PROGRAMAÇÃO
* Programador: Igor Anthony de Lara
* Data: 04/12/2019
* Descrição do código: Exercicio 1 */
#include <stdio.h>
#include <stdlib.h>
#include "data.h"
int main()
{
    int dia, mes, ano;//Definição das variaveis
    scanf("%d%d%d", &dia, &mes, &ano);//Entrada de dados
    printf("Quantidade de dias de 01/01/2000 ate a data escolhida eh: %d dias\n", calculaDias(dia, mes, ano));//Imprime a quantidade de dias
    formatoBR(dia, mes, ano);//Imprime a data no formato BR
    formatoEUA(mes, dia, ano);//Imprime a data no formato EUA
}
