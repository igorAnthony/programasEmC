#include <stdio.h>
#include <stdlib.h>

//Fun��o Principal
int main()
{
    //Definindo Variaveis
    int a = 1;
    //Primeiro executa e dps verifica a condi��o
    do{
        printf("%d\n", a);
        a++;
    }while(a <= 10);
    a = 1;
    //While simples primeiro verifica a condi��o e dps repete o bloco
    while(a <= 10){
        printf("%d\n", a);
        a++;
    }
   //Pausa o programa ap�s executar
    system("pause");
}
