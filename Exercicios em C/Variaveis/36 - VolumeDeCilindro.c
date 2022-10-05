#include <stdio.h>
#include <stdlib.h>
//Programa para calcular o volume de um cilindro circular a partir do raio e altura

//Função Principal
int main()
{
    //Definindo variaveis
    float R = 0, H = 0;
    //Apresenta o programa e pede os valores
    printf("****Programa para calcular o volume de um cilindro circular****\n");
    printf("Digite o valor da altura e o raio do cilindro respectivamente: ");
    scanf("%f%f", &H, &R);
    //Calcula a area e imprime o resultado
    printf("O volume do cilindro = %.1f u.a\n\n", (3.141592*(R*R)*(H)));
    //Pausa o programa após executar
    system("pause");
}
