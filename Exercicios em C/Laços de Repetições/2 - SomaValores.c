#include <stdio.h>
#include <stdlib.h>
//Faça um programa que peça ao usuario para digitar 10 valores e some-os.
//Função Principal
int main()
{
    //Definindo variaveis
    int valor = 0, i = 0, soma = 0;
    for(i = 0; i < 10; i++){
        scanf("%d", &valor);
        soma += valor;
        }
    printf("soma = %d\n", soma);
    //Pausa o programa após executar
    system("pause");
}
