#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    //variaveis
    int a = 20;

    //Imprimindo o valor de uma variavel
    printf("Valor de a: %d\n", a);

    //Imprimindo o endereço de uma variavel
    printf("Valor de a: %p", &a);

    //VARIAVEIS ARMAZENAM VALORES
    int b = 30;

    //PONTEIROS ARMAZENAM POSIÇÕES NA MEMORIA
    int *ponteiro;

    //PONTEIRO RECEBENDO A POSIÇÃO NA MEMORIA DA VARIAVEL
    ponteiro = &b;

    //IMPRIMINDO VALOR DE UMA VARIAVEL
    printf("Valor de b: %d\n", ponteiro);

    /* "*" pode ser lido como "CONTEÚDO APONTADO POR" É COMO SE ELE TIVESSE IDO
    NESSE PONTEIRO LIDO ESSE ENDEREÇO DA MEMORIA E ESSE PONTEIRO APONTOU ESSE ENDEREÇO
    QUE TINHA CRIADO A VARIAVEL B
    PONTEIRO SERVE PRA ISSO, TER UM ACESSO MAIS DINAMICO E MAIS DIRETO DA VARIAVEL*/
    *ponteiro = 40;

    //Imprimindo valor de uma variavel
    printf("Valor de b: %d\n", b);

    /*VARIAVEL
    [ARMAZENA UM VALOR]
    [POSIÇÃO NA MEMORIA ONDE A VARIAVEL ESTA]
    PONTEIRO
    [POSIÇÃO DA MEMORIA QUE ESTÁ ARMAZENA]
    [POSICAO NA MEMORIA]*/

    return 0;
}
