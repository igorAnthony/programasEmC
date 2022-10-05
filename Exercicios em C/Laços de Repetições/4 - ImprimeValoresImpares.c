#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia um numero inteiro positivo ímpar N e imprima todos os
números ímpares de 1 até N em ordem crescente*/
//Função Principal
int main()
{
    //Definindo Variaveis
    int N = 0, i;
    //Pede para o usuario informar um valor N e imprime todos os numeros impares até N
    scanf("%d", &N);
    for(i = 0; i <= N; i++){
        if(i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
    //Pausa o programa após executar
    system("pause");
}
