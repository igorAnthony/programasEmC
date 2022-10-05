#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <math.h>

using namespace std;
typedef struct{
    int matricula;
    char gab[10];
    int nota;
}Alunos;
int main()
{
    int i, j, pont = 0;
    char gabarito[10];
    Alunos aluno[3];
    cout << "Digite o gabarito da prova: ";
    for(i = 0; i < 10; i++)
    {
        cin >> gabarito[i];
    }
    for(i = 0; i < 3; i++){
        cout << "Matricula do aluno:";
        cin >> aluno[i].matricula;//le a matricula
        cout << "Gabarito do " << aluno[i].matricula << ": ";
        for(j = 0; j < 10; j++)
        {
            cin >> aluno[i].gab[j];// pegas as respostas das perguntas do aluno
            if(aluno[i].gab[j] == gabarito[j])
            {
                aluno[i].nota = pont + 1;
                pont++;
            }
        }
        pont = 0;
    }
    system("cls"); //limpa a tela
    cout << "Matricula = Nota  Status:\n";
    for(i = 0; i < 3; i++){
            if(aluno[i].nota >= 7)
            {
                cout << aluno[i].matricula << " = " << aluno[i].nota << "  Foi aprovado!\n";
            }
            else if(aluno[i].nota < 7 && aluno[i].nota >= 5)
            {
                cout << aluno[i].matricula << " = " << aluno[i].nota << "  Vai fazer a recuperacao\n";
            }
            else if(aluno[i].nota < 5)
            {
                cout << aluno[i].matricula << " = " << aluno[i].nota << "  Foi reprovado!\n";
            }
    }
    //Pausa o programa após executar
    system("pause");

    return 0;
}

