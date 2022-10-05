#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int* aloca_vetor(int tam);
void gera_aleatorios(int *v, int tam);
void organiza_vetCrescente(int *v, int tam);
void imprime_vet(int *v, int tam);
int main()
{
    int *vet_random, n;
    srand(time(NULL));
    scanf("%d", &n);
    vet_random = aloca_vetor(n);
    gera_aleatorios(vet_random, n);
    organiza_vetCrescente(vet_random, n);
    imprime_vet(vet_random, n);
    free(vet_random);
}
int* aloca_vetor(int tam)
{
    int *aux;
    aux = malloc(tam*sizeof(*aux));
    if(aux == NULL){perror("Error"); exit(EXIT_FAILURE);}
    return aux;
}
void gera_aleatorios(int *v, int tam)
{
    int i = 0;
    for(i = 0; i < tam; i++)
        v[i] = rand()%1000;
}
void organiza_vetCrescente(int *v, int tam)
{
    int i = 0, aux = 0, j = 0;
    for(i = 0; i < tam; i++)
    {
        for(j = i + 1; j < tam; j++)
        {
            if(v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}
void imprime_vet(int *v, int tam)
{
    int i = 0;
    for(i = 0; i < tam; i++)
    {
        printf("%d ", v[i]);
    }
}
