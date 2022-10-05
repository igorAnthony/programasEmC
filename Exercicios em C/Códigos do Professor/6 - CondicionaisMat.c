#include <stdio.h>
#include <stdlib.h>
//Função Principal
int main()
{
    //Definindo variaveis
    int a = 5, b = 10, c = 15;
    char d = 'x';
    //Maior
    if(a > 2)
    {
        printf("%d eh maior que 2\n", a);
    }
    //Maior ou igual
    if(c >= b)
    {
        printf("%d eh maior igual a %d\n", c, b);
    }
    //Menor
    if(a < 10)
    {
        printf("%d eh menor igual a 10\n", a);
    }
    //Menor igual
    if(a <= 10)
    {
        printf("%d eh menor ou igual a 10\n", a);
    }
    //Diferente
    if(c != 10)
    {
        printf("%d eh diferente de 10\n", c);
    }
    if(d != 'a')
    {
        printf("%c eh diferente de a\n", d);
    }
    printf("\n\n");
    //Pausa o programa após executar
    system("pause");
}
