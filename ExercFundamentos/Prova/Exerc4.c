#include <stdio.h>
int main()
{
    int a = 5, b = 10, *p = &a, *q = &b;
    int soma = *p + *q;
    printf("%d", soma);
}
