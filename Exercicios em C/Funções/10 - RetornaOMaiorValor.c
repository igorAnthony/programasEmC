#include <stdio.h>
#include <stdlib.h>
float retornaMaior(float numero1, float numero2);
int main()
{
    //variaveis
    float valor1, valor2, maior;
    //instrução
    printf("Digite dois valores:");
    //le dois valores
    scanf("%f%f", &valor1, &valor2);
    //chama a função e retorna maior valor
    maior = retornaMaior(valor1, valor2);
    //imprime o maior valor
    printf("Maior valor eh:%f", maior);
    //retorno da main
    return 0;
}
float retornaMaior(float numero1, float numero2)
{
    float maior;
    maior = numero1;
    if(numero2 > numero1)
    {
        maior = numero2;
    }
    return maior;
}
