#include <stdio.h>
#include <stdlib.h>
#define TAM 3
//Função principal
int main()
{
    /*Definindo variaveis, vetor é como se fosse um criado mudo com varias gavetas,
    cada gaveta podendo ter ou nao conteudo*/
    int vetor[3], i;

    //Passando valores(conteudo) para cada gaveta do vetor
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    //Exibindo os valores do vetor
    printf("Vetor 0: %d\n", vetor[0]);
    printf("Vetor 1: %d\n", vetor[1]);
    printf("Vetor 2: %d\n", vetor[2]);

    //Imprimindo em um laço de repetição
    for(i = 0; i < TAM; i++){
        printf("Vetor %d: %d\n", i, vetor[i]);
    }

    //Adicionando 1 para cada posição
    for(i = 0; i < TAM; i++){
        vetor[i] += 1;
        printf("Vetor %d: %d\n", i, vetor[i]);
    }
    //Lendo 3 valores para o vetor
    for(i = 0; i < TAM; i++){
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < TAM; i++){
        printf("Vetor %d: %d\n", i, vetor[i]);
    }
    //Pausa o programa após executar
    system("pause");
}
