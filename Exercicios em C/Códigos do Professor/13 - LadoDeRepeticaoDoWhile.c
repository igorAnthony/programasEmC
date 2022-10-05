#include <stdio.h>
#include <stdlib.h>

//Função Principal
int main()
{
    //Definindo Variaveis
    int a = 1;
    //Primeiro executa e dps verifica a condição
    do{
        printf("%d\n", a);
        a++;
    }while(a <= 10);
    a = 1;
    //While simples primeiro verifica a condição e dps repete o bloco
    while(a <= 10){
        printf("%d\n", a);
        a++;
    }
   //Pausa o programa após executar
    system("pause");
}
