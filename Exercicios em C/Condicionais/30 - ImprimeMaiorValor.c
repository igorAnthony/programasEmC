#include <stdio.h>
#include <stdlib.h>
//Programa que recebe dois valores e imprime qual � o maior valor

//Fun��o Principal
int main()
{
    //Definindo variaveis
    float a = 0, b = 0;
    printf("Digite dois valores para saber qual e o maior:");
    scanf("%f%f", &a, &b);
    if(a > b){
        printf("O primeiro e maior\n");
    }else{
        printf("O segundo e maior\n");
    }
    //Pausa o programa ap�s executar
    system("pause");
}
