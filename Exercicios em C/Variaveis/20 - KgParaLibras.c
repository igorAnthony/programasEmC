#include <stdio.h>
#include <stdlib.h>
//Programa para converter kg em libras
//Função principal
int main()
{
    //Definindo variaveis
    float K = 0, L = 0;
    //Pede para o usuario o valor em kg para converter em libras
    printf("Informe o valor em kg para converter em libras: ");
    scanf("%f", &K);
    //Formula para converter kg para libra
    L=(K)/0.45;
    //Imprime o resultado da conversão em libras
    printf("%.2f kg para libras = %.2f\n", K, L);
    //Pausa o programa após executar
    system("pause");
}
