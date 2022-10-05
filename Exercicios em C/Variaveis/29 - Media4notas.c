#include <stdio.h>
#include <stdlib.h>
//Programa para receber 4 notas e calcular a média aritmetica
typedef struct Aluno
{
    char nome[50];
    float nota[4];
    float media;
}Aluno;
//Função Principal
int main()
{
    //Defenindo variaveis
    Aluno aluno;
    int i;
    float media = 0;
    //Pede para o usuario informar 4 notas para fazer a média
    printf("****Programa para calcular a media aritmetica entre 4 notas****\n\n");
    printf("Informe o nome do aluno: ");
    scanf("%s", &aluno.nome);
    printf("Informe as 4 notas para efetuar a media: ");
    for(i = 0; i < 4; i++)
    {
        scanf("%f", &aluno.nota[i]);
        aluno.media += aluno.nota[i];
    }
    //Formula para calcular a media entre elas
    media = (aluno.media)/4;
    //Imprime na tela a media
    printf("O aluno %s ficou com media = %.1f\n\n", aluno.nome, media);
    //Pausa o programa após executar
    system("pause");
}

