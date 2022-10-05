#include <stdio.h>
#include <stdlib.h>
#define TAM 1000
/*Faça um programa que some todos os numeros naturais abaixo de 1000 que são multiplos
de 3 ou 5.*/
//Função Principal
int main()
{
    //Definindo variaveis
    int soma = 0, i = 0;
    //Laço de repetição para somar os multiplos de 3 e 5
    for(i = 0; i < 1000; i++){
        if(i % 3 == 0 || i % 5 == 0){
            soma += i;
        }
    }
    printf("a soma = %d\n", soma);
    //Pausa o programa após executar
    system("pause");
}
