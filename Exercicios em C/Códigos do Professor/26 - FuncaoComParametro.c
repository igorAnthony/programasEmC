#include <stdio.h>
#include <stdlib.h>

void mostraSucessor(int numero){
    printf("O sucessor de %d eh %d", numero, numero + 1);
}
int retornaAntecessor(int numero){
    return numero - 1;
}

int main()
{
    //variaveis
    int a;
    //INSTRU��O
    printf("Digite um valor:");
    //le o valor
    scanf("%d", &a);
    //chama a fun��o
    mostraSucessor(a);
    //exibe antecessor
    printf(" e o antecessor eh %d", retornaAntecessor(a));

    return 0;
}
