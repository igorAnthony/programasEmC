#include <stdio.h>
#include <stdlib.h>
//Programa para descobrir o antecessor e o sucessor de um numero inteiro

//Função Principal
int main()
{
    //Definindo variaveis
    int I = 0;
    //Pede para o usuario um numero inteiro para descobrir o seu antecessor e o sucessor
    printf("***Programa para descobrir o antecessor e o sucessor***\n");
    printf("Digite um valor inteiro: ");
    scanf("%d", &I);
    //Imprime o seu antecessor e o sucessor
    printf("O seu antecessor = %d e seu sucessor = %d\n\n", I - 1, I + 1);
    //Pausa o programa após executar
    system("pause");
}
