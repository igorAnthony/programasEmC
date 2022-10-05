#include <stdlib.h>
#include <string>
#include <iostream>
#include <math.h>
#define TAM 1
using namespace std;
typedef struct{
    int matricula;
    string nome;
    double nota[3];
    double media = 0;
}Alunos;
void limpaTela();
int main()
{
    int i, j, auxposMaior, auxposMenor, auxposNOTA;
    double menormedia, maiormedia, maiornota;
    Alunos aluno[TAM];
    //pega os dados dos alunos
    for(i = 0; i < TAM; i++){
        cout << "Matricula do aluno " << i + 1 << ":";
        cin >> aluno[i].matricula;//le a matricula
        cin.ignore();
        cout << "Digite o nome do aluno:";
        getline(cin, aluno[i].nome);
        for(j = 0; j < 3; j++)
        {
            cout << "Digite a nota da " << j + 1 << " prova:";
            cin >> aluno[i].nota[j];
        }
        limpaTela();
    }
    cout << "Status dos alunos:\n";
    //faz a media de cada a aluno
    for(i = 0; i < TAM; i++){
            for(j = 0; j < 3; j++)
            {
                aluno[i].media += aluno[i].nota[j];

            }
            aluno[i].media = aluno[i].media/3;
    }
    maiormedia = menormedia = aluno[0].media;
    //procura a maior media e menor media
    for(i = 0; i < TAM; i++)
    {
        if(aluno[i].media > maiormedia)
        {
            maiormedia = aluno[i].media;
        }
        if(aluno[i].media < menormedia)
        {
            menormedia = aluno[i].media;
        }
    }
    //verifica a maior nota
    maiornota = aluno[0].nota[0];
    for(i = 0; i < 5; i++)
    {
        if(aluno[i].nota[0] > maiornota)
        {
            maiornota = aluno[i].nota[0];
        }
    }
    for(i = 0; i < 5; i++)
    {
        cout << "Nome: " << aluno[i].nome << endl << " Matricula:" << aluno[i].matricula << endl << "Media: " << aluno[i].media;
            if(aluno[i].media >= 6)
            {
                cout << " Foi aprovado!\n";
            }
            else
            {
                cout << " Foi reprovado!\n";
            }
    }
    for(i = 0; i < 5; i++)
    {
        if(aluno[i].nota[0] == maiornota)
        {
            cout << "**Aluno com maior nota na primeira prova eh o " << aluno[i].nome << " com nota:" << aluno[i].nota[0] << endl;
        }
        if(aluno[i].media == maiormedia)
        {
            cout << "**Aluno com maior media eh o " << aluno[i].nome << " com media: " << aluno[i].media << endl;
        }
        if(aluno[i].media == menormedia)
        {
            cout << "**Aluno com menor media eh o " << aluno[i].nome << " com media: " << aluno[i].media << endl;
        }
    }
    return 0;
}
void limpaTela()
{
    system("cls");
}

