#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //Definindo Variaveis
    int a;
    float b;
    char c;
    bool d;

    //Passando o valor
    a = 5;
    b = 5.67;
    c = 'y';
    d = true; // true = 1 e falso = 0

    //Escrevendo na tela
    printf("O valor da variavel a = %d\n", a);
    printf("O valor da variavel b = %.2f\n", b);
    printf("O valor da variavel c = %c\n", c);
    printf("O valor da variavel d = %d\n", d);

    //Lendo os valores
    scanf("%d", &a);
    scanf("%f", &b);
    scanf(" %c", &c);
    scanf("%d", &d);

    //Escrevendo na tela os novos valores
    printf("O valor da variavel a = %d\n", a);
    printf("O valor da variavel b = %.2f\n", b);
    printf("O valor da variavel c = %c", c);
    printf("\nO valor da variavel d = %d\n", d);

    //Pausando o código após executar
    system("pause");
    return 0;
}
