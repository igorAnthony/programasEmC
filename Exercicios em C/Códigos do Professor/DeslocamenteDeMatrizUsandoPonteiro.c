#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[3] = {1,2,3};
    int *ptr;
    int i;
    ptr = v[0];
    for(i = 0; i < 9; i++)
    {
        *ptr = 0.0;
        printf("%d", *ptr);
        ptr++;
    }
    return 0;
}
