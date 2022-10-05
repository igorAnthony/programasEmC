#include <stdio.h>
#include <stdlib.h>

//Função Principal
int main()
{
    //Definindo Variaveis
    int a = 1, b = 10;
    //Contando ate 10
    while(a <= 10){
        printf("%d\n", a);
        a++;
    }
    //Contagem Regressiva
    while(b >= 1){
        printf("%d\n", b);
        b--;
    }
   //Pausa o programa após executar
    system("pause");
}
