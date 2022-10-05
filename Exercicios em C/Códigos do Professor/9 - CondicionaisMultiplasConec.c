#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Definindo Variaveis
    int a = 10;

    //Conectivo lógico "e"(AND), se uma comparação for falsa não entra no bloco
    if(a > 5 && a < 15)
    {
        printf("A variavel esta entre 5 e 15.\n");
    }
    //Conectivo lógico "ou"(OR), se uma comparação for verdadeira necessariamente a outra nao precisa ser verdadeira, ela já entra no bloco
    if(a > 5 || a > 20)
    {
        printf("A variavel a eh maior que 5 ou 15.\n");
    }
    //Misturando Conectivos
    if((a > 5 && a < 15) || a == 20)
    {
        printf("A variavel esta entre 5 e 15 ou vale 20.\n");
    }

    //Pausa o programa após executar
    system("pause");
}
