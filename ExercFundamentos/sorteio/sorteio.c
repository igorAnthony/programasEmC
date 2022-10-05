#include <stdio.h>
#include <time.h>
#include "sorteio.h"
int sorteia_num(int min, int max)
{
   int aux;
   aux = (rand()%(max-min))+min;
   return aux;
}
void sorteia_serie(int *v, int size, int min, int max)
{
    int i = 0;
    for(i = 0; i < size; i++)
    {
        v[i] = (rand()%max-min)+min;
    }
}
