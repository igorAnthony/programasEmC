#include <stdio.h>
#include <stdlib.h>

//Função Principal
int main()
{
    //Variaveis
    char palavra[255];

    //Instrução
    printf("Digite uma palavra: ");

    //Limpa o buffer
    setbuf(stdin, 0);

    //Lê a string
    fgets(palavra, 255, stdin);

    //Limpa as casas nao utilizadas
    palavra[strlen(palavra) - 1] = '\0';

    //Imprime na tela
    printf("%s", palavra);

}
