#include <stdlib.h>
#include <stdio.h>
typedef struct
{
    int dia;
    int mes;
    int ano;
}Data;
typedef struct
{
    int id;
    Data nascimento;
}Aluno;
int main()
{
    //criando um aluno
    Aluno aluno1;
    //modificando valores
    aluno1.id = 15;
    aluno1.nascimento.dia = 05;
    aluno1.nascimento.mes = 1;
    aluno1.nascimento.ano = 1999;
    //exibindo os valores
    printf("id:%d %d/%d/%d\n", aluno1.id, aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);
    return 0;
}
