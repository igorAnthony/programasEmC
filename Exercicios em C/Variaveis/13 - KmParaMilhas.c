#include <stdio.h>
#include <stdlib.h>
//Programa para converter km em milhas
int main()
{
    //Definindo as variaveis
    float K = 0, M = 0;
    //Usuario informa o valor em km que quer converte
    printf("Informe o valor em km para converter em milhas: ");
    scanf("%f", &K);
    //Formula para fazer a convers�o
    M = (K)/1.609;
    //Imprime a convers�o de km para milhas
    printf("O valor informado em milhas = %.3f\n", M);
    //Pausa ap�s o programa executar
    system("pause");
}
