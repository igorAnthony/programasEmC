#include <stdio.h>
#include <stdlib.h>
int verificaNumero(int numero);
int main()
{
    //variaveis
    int valor;
    //instru��o
    printf("Digite um valor:");
    //le o valor
    scanf("%d", &valor);
    //chama a fun��o e imprime
    printf("%d", verificaNumero(valor));
    return 0;
}
//fun��o verifica se o numero � positivo ou negativo
int verificaNumero(int numero)
{
    if(numero > 0)
    {
        return 1;
    }
    else if(numero < 0)
    {
        return -1;
    }
    else if(numero == 0)
    {
        return 0;
    }
}
