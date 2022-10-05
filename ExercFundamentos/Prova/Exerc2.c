#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int* aloca_vet(int tam);
void gera_random(int *v, int tam);
void encontra_maiorMenor(int *v, int tam);
int main()
{
    srand(time(NULL));
    int *vet_random, n;
    scanf("%d", &n);
    vet_random = aloca_vet(n);
    gera_random(vet_random, n);
    encontra_maiorMenor(vet_random, n);
    free(vet_random);
}
int* aloca_vet(int tam)
{
    int *aux;
    aux = malloc(tam*sizeof(*aux));
    return aux;
}
void gera_random(int *v, int tam)
{
    int i = 0;
    for(i = 0; i < tam; i++)
    {
        v[i]  = rand()%1000;
    }
}
void encontra_maiorMenor(int *v, int tam)
{
    int i = 0, maior = 0, menor = 1000;
    for(i = 0; i < tam; i++)
    {
        printf("%d ", v[i]);
        if(v[i] < menor)
        {
            menor = v[i];
        }
        if(v[i] > maior)
        {
            maior = v[i];
        }
    }
    printf("\n%d %d", menor, maior);
}
