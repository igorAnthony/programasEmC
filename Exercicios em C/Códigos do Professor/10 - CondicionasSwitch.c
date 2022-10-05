#include <stdio.h>
#include <stdlib.h>

//Função Principal
int main()
{
    //Definindo Variaveis
    int a = 500;
    char b = 'x';
    //Usando if
    if(a == 1){
        printf("Opcao escolhida 1\n");
    }else if(a == 2){
        printf("Opcao escolhida 2\n");
    }else if(a == 3){
        printf("Opcao escolhida 3\n");
    }else{
        printf("Opcao invalida\n");
    }
    //Usando switch case
    switch(a)
    {
    case 1:
        printf("Opcao escolhida 1\n");
        break;
    case 2:
        printf("Opcao escolhida 2\n");
        break;
    case 3:
        printf("Opcao escolhida 3\n");
        break;
    default:
        printf("Opcao invalida\n");
        break;
    }
    switch(b)
    {
    case 'x':
        printf("A letra é x\n");
        break;
    default:
        printf("Opcao invalida\n");
        break;
    }
    //Pausa o programa após executar
    system("pause");
}
