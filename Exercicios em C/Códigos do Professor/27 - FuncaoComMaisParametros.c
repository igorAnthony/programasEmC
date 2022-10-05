#include <stdio.h>
#include <stdlib.h>
void mostraSoma(int numero, int numero2)
{
    printf("A soma entre %d e %d eh %d\n", numero, numero2, numero + numero2);
}
int retornaSoma(int numero, int numero2)
{
    return numero + numero2;
}
int main()
{
    //variaveis
    int a = 5, b = 10;
    //Funcao que mostra a soma
    mostraSoma(a, 90);
    //Imprime o resultado retornado pela funcao
    printf("A soma entre %d e %d eh %d\n", a, b, retornaSoma(a, b));
    //Retorno da funcao
    return 0;
}
