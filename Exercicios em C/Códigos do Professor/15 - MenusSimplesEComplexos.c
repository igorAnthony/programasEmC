#include <stdio.h>
#include <stdlib.h>
//Função Principal
int main()
{
    //Definindo Variaveis
    int opcao;
    //Confere e valida a opcao
    while(opcao < 1 || opcao > 3){

        printf("Escolha uma opcao:\n");
        printf("1-Opcao 1\n");
        printf("2-Opcao 2\n");
        printf("3-Opcao 3\n");

        //Lendo a opcao
        scanf("%d", &opcao);
        //Limpa a tela
        system("cls");
        //Resultado de acordo com a opcao escolhida
        switch(opcao){
            case 1:
                printf("Opcao 1 escolhida\n");
                break;
            case 2:
                printf("Opcao 2 escolhida\n");
                break;
            case 3:
                printf("Opcao 3 escolhida\n");
                break;
            default:
                printf("Opcao Invalida\n");
                break;
        }
    }
    //Pausa o programa após executar
    system("pause");
}
