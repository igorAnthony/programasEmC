#include <stdio.h>
#include <stdlib.h>
int aumentaComMaisDez(int numero)
{
    return numero + 10;
}
//Conteudo apontado pelo endere�o que enviei e transforme ele no conteudo + 10
void aumentaDez(int *numero)
{
    *numero += 10;
}
int main()
{
//Ponteiro faz altera��o do valor apontado direto na mem�ria, enquanto sem ponteiro precisa atribuir esse valor a alguma variavel
    //variaveis
    int a;
    //Mostrando um valor
    printf("O valor de a eh %d\n", a);

    //Aumenta 10
    a = aumentaComMaisDez(a);
    printf("O valor de a eh %d\n", a);

    //Aumenta 10 diretamente
    aumentaDez(&a);
    printf("O valor de a eh %d\n", a);

    //retorna fun��o
    return 0;
}
