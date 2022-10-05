#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //Definindo minhas variaveis
    bool a = true, b = false;
    int c = 2;
    //Verificando se a é verdadeiro
    if(a)
    {
        printf("a eh verdadeiro\n");
    }
    //Verificando se b é falso
    if(b)
    {
        printf("b eh verdadeiro\n");
    }else
        {
            printf("b eh falso\n");
        }
    //Verificando diretamente
    if(!b)
    {
        printf("b eh falso\n");
    }
    printf("\n\n");
    //Pause o programa após executar
    system("pause");
}
