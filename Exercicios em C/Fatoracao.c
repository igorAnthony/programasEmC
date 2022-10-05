#include <stdio.h>
#include <stdlib.h>
void fatoraNumero(int numero);
int main()
{
    //variaveis
    int valor;
    //instrução
    printf("Digite um valor:");
    //le um valor
    scanf("%d", &valor);
    fatoraNumero(valor);
}
void fatoraNumero(int numero)
{
    int i;
    for(i = 2; i <= numero; i++)
    {
        while(numero % i == 0){
            printf("%d\n", i);
            numero = numero/i;
        }
        if(numero == 1)
        {
            break;
        }
    }
}
