#include <stdio.h>
#include <stdlib.h>
int* alocaVetor(int tam)
{
    //� criado um ponteiro auxiliar
    int *aux;
    //aloca��o dinamica de memoria
    aux = (int*) malloc(sizeof(int)*tam);
    //retorna o ponteiro que aponta para primeira posi��o de memoria do vetor criado
    return aux;
}
int main()
{
    int *vet, tam, i;
    //lendo tamanho do vetor
    printf("Digite o tamanho do vetor:");
    scanf("%d", &tam);
    //ponteiro recebe endere�o de memoria que foi alocado para o vetor
    vet = alocaVetor(tam);
    for(i = 0; i < tam; i++)
    {
            scanf("%d", &vet[i]);
            printf("vet[%d] = %d\n", i, vet[i]);
    }
    free(vet);
    return 0;
}
