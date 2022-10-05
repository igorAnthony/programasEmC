#include <stdio.h>
#include <stdlib.h>
void imprimeVetor(int *vetor, int tamanho)
{
    int i;

    //percorrendo vetor
    for(i = 0; i < tamanho; i++)
    {
        printf("v[%d] eh %d\n", i, vetor[i]);
    }
}
//ponteiro: recebe o endereço de memoria enviado e altera o valor diretamente minha variavel na main, sem necessidade de retorna vetor;
void modificaVetor(int *vetor, int tamanho)
{
    int i;
    //percorrendo vetor
    for(i = 0; i < tamanho; i++){
        vetor[i] += 1;
    }
}
int main()
{
    //Definindo vetor
    int v[3] = {1, 2, 3};

    //Mostrando vetor
    imprimeVetor(v, 3);

    //modifica vetor
    modificaVetor(v, 3);

    //Mostrando vetor
    imprimeVetor(v, 3);

    //Returno da função
    return 0;
}
