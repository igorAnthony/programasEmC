#include <stdio.h>
#include <stdlib.h>
/*Fa�a um programa que calcule e mostre a soma dos 50 primeiros numeros pares.*/
//Fun��o principal
int main()
{
    //Definindo Variaveis
    int i, soma = 0;
    //Soma dos 50 primeiros numeros pares a partir do 0
    for(i = 0;i < 50;i++){
           soma += i*2;
    }
    printf("soma = %d\n", soma);
    //Pausa o programa ap�s executar
    system("pause");
}
