#include <stdio.h>
#include <stdlib.h>
int verificaNumero(int numero);
int main()
{
    //variaveis
    int valor;
    //instrução
    printf("Digite um valor:");
    //le o valor
    scanf("%d", &valor);
    //chama a função e imprime
    printf("%d", verificaNumero(valor));
    return 0;
}
//função verifica se o numero é positivo ou negativo
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
