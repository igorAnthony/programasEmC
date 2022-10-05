#include <stdio.h>
#include <stdlib.h>
//Programa para converter jardas em metros
//Função Principal
int main()
{
   //Definindo variaveis
   float J = 0, M = 0;
   //Pede para o usuario informar o valor em jardas para converter em Jardas
   printf("*******Programa para converter Jardas em Metros*******\n");
   printf("Informe o valor em Jardas: ");
   scanf("%f", &J);
   //Formula para converter
   M = (J) * 0.91;
   //Imprime o resultado da conversão
   printf("Para Metros = %.2fm\n", M);
   //Pausa o programa após executar
   system("pause");
}
