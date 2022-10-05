#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que some os numeros impares contidos em um intervalo definido
pelo usuario.*/
//Função Principal
int main()
{
    //Definindo Variaveis
    int soma = 0, valorinicial = 0, valorfinal = 0;
    printf("Digite o valor inicial e o valor final: ");
    scanf("%d%d", &valorinicial, &valorfinal);
    //Laço de repetição caso o usuario digite um valor invalido
    while(valorinicial > valorfinal){
            printf("Intervalo de valores invalido, digite novamente:\n");
            scanf("%d%d", &valorinicial, &valorfinal);
    }
    //Laço de repetição para somar os valores do intervalo
    for(valorinicial; valorinicial <= valorfinal; valorinicial++){
        if(valorinicial % 2 != 0){
                soma += valorinicial;
        }
    }
     printf("soma: %d\n", soma);
    //Pausa o programa após executar
    system("pause");
}


