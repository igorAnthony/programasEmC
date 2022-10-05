#include <stdio.h>
#include <stdlib.h>
//Programa para converter hectares em metros quadrados
//Função Principal
int main()
{
    //Definindo as variaveis
    float H = 0, M = 0;
    //Pede para o usuario informar o valor em hectares para converter em metros quadrados
    printf("*****Programa para converter Hectares em Metros Quadrados*****\n\n");
    printf("Informe o valor em Hectares: ");
    scanf("%f", &H);
    //Formula para converter hectares em metros quadrados
    M = (H)*10000;
    //Imprime na tela o valor convertido
    printf("O valor em metros quadrados= %.2f\n", M);
    //Pausa o programa após executar
    system("pause");
}




