#include <stdio.h>
#include <stdlib.h>
/*Fa�a um programa que some os numeros impares contidos em um intervalo definido
pelo usuario.*/
//Fun��o Principal
int main()
{
    //Definindo Variaveis
    int soma = 0, valorinicial = 0, valorfinal = 0;
    printf("Digite o valor inicial e o valor final: ");
    scanf("%d%d", &valorinicial, &valorfinal);
    //La�o de repeti��o caso o usuario digite um valor invalido
    while(valorinicial > valorfinal){
            printf("Intervalo de valores invalido, digite novamente:\n");
            scanf("%d%d", &valorinicial, &valorfinal);
    }
    //La�o de repeti��o para somar os valores do intervalo
    for(valorinicial; valorinicial <= valorfinal; valorinicial++){
        if(valorinicial % 2 != 0){
                soma += valorinicial;
        }
    }
     printf("soma: %d\n", soma);
    //Pausa o programa ap�s executar
    system("pause");
}


