#include <stdio.h>
#include <stdlib.h>
#define MULT 3
/*Faca um programa que determine o mostre os cinco primeiros multiplos de 3, considerando
numeros maiores que 0.*/
//Função Principal
int main()
{
    //Definindo variaveis
    int i, soma = 0;
    printf("Os cinco primeiros multiplos de 3:\n");
    for(i = 1; i <= 5; i++){
        printf("%d\n", i*MULT);
        }

     //Pausa o programa após executar
     system("pause");
}
