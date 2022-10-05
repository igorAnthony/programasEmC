#include <stdio.h>
#include <stdlib.h>
/*int retornaDobro(int numero)
{
    return numero*2;
}*/
int retornaDobro(int *numero)
{
    *numero = *numero*2;
}
int main()
{
    //variaveis
    int valor;
    //instrução
    printf("Digite um numero:");
    //le o valor
    scanf("%d", &valor);
    //chama a função e retorna o dobro
    /*printf("Numero dobrado: %d\n", retornaDobro(valor));
    printf("Valor: %d", valor);*/
    //ou posso chamar assim
    retornaDobro(&valor);
    printf("Numero dobrado: %d\n", valor);
    //returno da função main
    return 0;
}
