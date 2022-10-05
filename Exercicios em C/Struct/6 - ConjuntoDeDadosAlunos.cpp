#include <string>
#include <iostream>
#include <stdlib.h>
#define TAM 10
using namespace std;
typedef struct
{
    int matricula;
    string nome;
    int codigo;
    float nota[2];

}Alunos;

void preencheAlunos(Alunos *al, int tam);

int main()
{
    Alunos alunos[TAM];
    preencheAlunos(alunos, TAM);
    return 0;
}

void preencheAlunos(Alunos *al, int tam)
{
    int i, j;
    for(i = 0; i < TAM; i++)
    {
        cout << "Nome do aluno:";
        getline(cin, al[i].nome);
        cout << "Matricula:";
        cin >> al[i].matricula;
        cout << "Codigo da Disciplina:";
             cin >> al[i].codigo;
        for(j = 0; j < 2; j++)
        {
            cout << "A nota da " << j + 1 << " prova:";
            cin >> al[i].nota[j];
        }
        system("cls");
    }
}
