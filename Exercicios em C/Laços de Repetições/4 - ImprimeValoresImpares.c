#include <stdio.h>
#include <stdlib.h>
/*Fa�a um programa que leia um numero inteiro positivo �mpar N e imprima todos os
n�meros �mpares de 1 at� N em ordem crescente*/
//Fun��o Principal
int main()
{
    //Definindo Variaveis
    int N = 0, i;
    //Pede para o usuario informar um valor N e imprime todos os numeros impares at� N
    scanf("%d", &N);
    for(i = 0; i <= N; i++){
        if(i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
    //Pausa o programa ap�s executar
    system("pause");
}
