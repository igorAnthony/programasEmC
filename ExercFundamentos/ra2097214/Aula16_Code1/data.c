#include <stdio.h>
#include "data.h"
void formatoBR(int dia, int mes, int ano)
{
    printf("%02d%c%02d%c%d\n", dia, 47, mes, 47, ano);//Imprime a data no formato BR
}
void formatoEUA(int mes, int dia, int ano)
{
    printf("%02d%c%02d%c%d\n", mes, 47, dia, 47, ano);//Imprime a data no formato EUA
}
int calculaDias(int dia, int mes, int ano)
{
    int meses_dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};//Vetor com a quantidade de dias de cada mes não bissexto
    int i, quant_dias = 0, quant_anos = 0, anos = 0, bissexto = 0;//Definição de variaveis
    if(ano < 2000)//Condição que verifica se o ano informado é menor que 2000 para não me gerar numeros negativos
    {
        quant_anos = 2000 - ano;
    }
    else
    {
        quant_anos = ano - 2000;
    }
    while(quant_anos >= anos)/*Laço de repetição para quantidade de anos, faz o calculo de janeiro do ano 2000
    até dezembro do ano informado*/
    {
        for(i = 0; i < sizeof(meses_dias)/sizeof(int); i++)//Laço de repetição para percorrer os meses
        {
            quant_dias += meses_dias[i];//Cada mes que percorrer, ele vai incrementar o valor do vetor
        }
        if(anos % 4 == 0)//Se for bissexto, o resto é 0, ent adiciona mais um na formula do bissexto
        {
            bissexto++;
        }
        anos++;//A cada ano calculado ele incrementa um
    }
    for(i = mes - 1; i < sizeof(meses_dias)/sizeof(int); i++)/*Laço de repetição para retirar aqueles
    meses calculados a mais no laço anterior, como aquele é até dezembro, pode ter passado alguns meses*/
    {
            quant_dias = quant_dias-meses_dias[i];
    }
    return quant_dias - 1 + dia + bissexto;/*Retorna a quantidade de dias o dia inicial que é 01, +
    dia que o usuario digitou + dias do ano bissexto*/

}
