#include <stdio.h>
#include <stdlib.h>
#define TAM 1000
/*Fa�a um programa que some todos os numeros naturais abaixo de 1000 que s�o multiplos
de 3 ou 5.*/
//Fun��o Principal
int main()
{
    //Definindo variaveis
    int soma = 0, i = 0;
    //La�o de repeti��o para somar os multiplos de 3 e 5
    for(i = 0; i < 1000; i++){
        if(i % 3 == 0 || i % 5 == 0){
            soma += i;
        }
    }
    printf("a soma = %d\n", soma);
    //Pausa o programa ap�s executar
    system("pause");
}
