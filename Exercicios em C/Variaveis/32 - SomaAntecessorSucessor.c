#include <stdio.h>
#include <stdlib.h>
//Programa para calcular a soma do triplo de seu sucessor com o dobro do seu antecessor

//Função Principal
int main()
{
    //Definindo variaveis
    int I = 0;
    //Pede para o usuario um numero inteiro para descobrir o seu antecessor e o sucessor
    printf("***Programa para descobrir a soma do triplo do antecessor com o dobro do sucessor***\n");
    printf("Digite um valor inteiro: ");
    scanf("%d", &I);
    //Imprime o seu antecessor e o sucessor
    printf("O seu antecessor = %d e seu sucessor = %d\nA soma entre eles = %d\n\n", I - 1, I + 1, (I - 1)*3 + (I + 1)*2);
    //Pausa o programa após executar
    system("pause");
}
