#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Definindo uma variavel
    int a = 5;
    int b = 0;
    //concatenando(texto e variavel) iprimindo a variavel
    printf("valor da minha variavel: %d\n", a);
    //alterando o valor da variavel
    a = a + 10;
    //concatenando(texto e variavel) iprimindo o novo valor da variavel
    printf("valor da minha variavel: %d\n", a);
    //pede para o usuario um valor
    printf("Digite o valor desejado: ");
    //lendo valor
    scanf("%d", &b);
    //pausando
    system("pause");
}
