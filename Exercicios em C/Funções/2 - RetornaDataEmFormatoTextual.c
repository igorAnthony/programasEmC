#include <stdio.h>
#include <stdlib.h>

void imprimeData(int x,int y,int z);
int main()
{
    int dia,mes,ano;
    scanf("%d%d%d", &dia,&mes,&ano);
    imprimeData(dia, mes, ano);

    return 0;

}
void imprimeData(int x,int y,int z)
{
    if (y == 1)
    {
        printf("%d de janeiro de %d", x,z);
    }
    if(y == 2)
    {
        if(z % 4 == 0 && x <= 28)
        {
            printf("%d de fevereiro de %d",x,z);
        }
        else
        {
            printf("ano bissexto so 28 dias");
        }
        if(z % 4 != 0 && x <= 29)
        {
            printf("%d de fevereiro de %d",x,z);
        }
    }
    if(y == 3)
    {
        printf("%d de marco de %d",x,z);
    }
    if(y == 4)
    {
        printf("%d de abril de %d",x,z);
    }
    if(y == 5)
    {
        printf("%d de maio de %d",x,z);
    }
    if(y == 6)
    {
        printf("%d de junho de %d",x,z);
    }
    if(y == 7)
    {
        printf("%d de julho de %d",x,z);
    }
    if(y == 8)
    {
        printf("%d de agosto de %d",x,z);
    }
    if(y == 9)
    {
        printf("%d de setembro de %d",x,z);
    }
    if(y == 10)
    {
        printf("%d de outubro de %d",x,z);
    }
    if(y == 11)
    {
        printf("%d de novembro de %d",x,z);
    }
    if(y == 12)
    {
        printf("%d de dezembro de %d",x,z);
    }

}
