#include <stdio.h>
#include <stdlib.h>
//Função Principal
int main()
{
    //Definindo Variaveis
    int cont;

    //Contando até 10
    for(cont = 0; cont <= 10; cont++){
        printf("%d\n", cont);
    }
    printf("\n\n");
    //Tabuada do 5
    printf("****Tabuada do 5****\n");
    for(cont = 1; cont <= 10; cont++){
        printf("5 X %d = %d\n", cont, cont*5);
    }
    printf("\n\n");
    //Contando de 2 em 2
    for(cont = 0; cont <=10; cont = cont + 2){
        printf("%d\n", cont);
    }
    printf("\n\n");
    //Contagem Regressiva
    for(cont = 10; cont >= 1; cont--){
        printf("%d\n", cont);
    }
    //Pausa o programa após executar
    system("pause");
}
