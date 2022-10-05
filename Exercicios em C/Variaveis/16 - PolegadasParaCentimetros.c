#include <stdio.h>
#include <stdlib.h>
//Programa para converter Polegadas para centimetros
int main()
{
    //Definindo as Variaveis
    float P = 0, C = 0;
    //Pede para o usuario informar o valor em polegadas para converter em centimetros
    printf("Informe o valor em polegadas para converter em centimetros: ");
    scanf("%f", &P);
    //Formula para calcular a conversão
    C = P*2.54;
    //Imprime o valor em centimetros
    printf("%.2f em polegadas para centimetros = %.2f\n", P, C);
    //Pausa o programa após executar
    system("pause");
}
