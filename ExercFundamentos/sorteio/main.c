#include <stdio.h>
#include <stdlib.h>
#include "sorteio.h"
#include <time.h>
int main()
{
    srand(time(NULL));
    int *vet_random, n, max, min, x;
    scanf("%d %d", &min, &max);
    n = max - min;
    vet_random = malloc(n*sizeof(*vet_random));
    x = sorteia_num(min, max);
    sorteia_serie(vet_random, n, min, max);
    for(int i = 0; i < n; i++)
    {
        printf("v[%d] = %d\n", i, vet_random[i]);
    }
    printf("x: %d", x);
    free(vet_random);
}
