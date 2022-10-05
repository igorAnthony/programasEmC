#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Função Principal
int main()
{
    //Responsavel por alimentar o random
    srand((unsigned)time(NULL));
    //Variavel que recebe o resto da divisao por 3 (aleatorio que ocorre entre 0 e 2)
    int random1 = rand() % 3;
    //Variavel que recebe o resto da divisão por 5 (aleatorio que ocorre entre 1 e 5)
    int random2 = (rand() % 5) + 1;
    printf("%d\n", random2);
    //Pausa o programa após executar
    system("pause");
}
