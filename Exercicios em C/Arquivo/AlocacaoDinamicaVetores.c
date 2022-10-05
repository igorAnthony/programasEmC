#include <stdio.h>
#include <stdlib.h>
int* alocaVetor(int tam)
{
    //é criado um ponteiro auxiliar
    int *aux;
    //alocação dinamica de memoria
    aux = (int*) malloc(sizeof(int)*tam);
    //retorna o ponteiro que aponta para primeira posição de memoria do vetor criado
    return aux;
}
int main()
{
    int *vet, tam, i;
    //lendo tamanho do vetor
    printf("Digite o tamanho do vetor:");
    scanf("%d", &tam);
    //ponteiro recebe endereço de memoria que foi alocado para o vetor
    vet = alocaVetor(tam);
    for(i = 0; i < tam; i++)
    {
            scanf("%d", &vet[i]);
            printf("vet[%d] = %d\n", i, vet[i]);
    }
    free(vet);
    return 0;
}
