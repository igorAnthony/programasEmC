#include <stdio.h>
#include <stdlib.h>
//Programa que verifica se o valor é par ou impar
//Função Principal
int main()
{
    //Definindo variaveis
    int a = 0;
    printf("Informe um valor para descobrir se e par ou impar:");
    scanf("%d", &a);
    if(a % 2 == 0){
        printf("Valor e par\n");
    }else{
        printf("Valor e impar\n");
    }
    //Pausa o Programa após executar
    system("pause");
}
