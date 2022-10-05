#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Definindo Variaveis
    int a = 6, b = 2;
    //Soma
    printf("\nA soma de %d e %d: %d\n", a, b, a+b);

    //Subtração
    printf("A subtracao de %d e %d: %d\n", a, b, a-b);

    //Divisão
    printf("A divisao de %d e %d: %d\n", a, b, a/b);

    //Multriplicação
    printf("A mutiplicacao de %d e %d: %d\n", a, b, a*b);

    //Resto da divisão
    printf("O resto da divisao de %d e %d: %d\n", a, b, a%b);

    //Valor absoluto
    printf("O valor absoluto de -3: %d\n\n", abs(-3));

    //Pausando o código após executar
    system("pause");
}
