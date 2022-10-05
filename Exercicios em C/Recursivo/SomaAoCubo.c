#include <stdio.h>
#include <math.h>
int soma_de_cubos(int n);
int main()
{
    int n, soma;
    scanf("%d", &n);
    soma = soma_de_cubos(n);
    printf("%d", soma);
}
int soma_de_cubos(int n)
{
    if(n <= 0) return 0;
    int soma = 0;
    soma = soma_de_cubos(n - 1);
    return pow(n, 3) + soma;
}
