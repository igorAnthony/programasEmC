#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;
//struct com variaveis de um aluno
void limpaTela();
typedef struct
{
    int matricula;
    string nome;
    string curso;
}Aluno;
int main()
{
    //variaveis
    int i;
    //definindo nome da struct
    Aluno aluno[5];
    //condição para pegar as informações
    for(i = 0; i < 5; i++)
    {
        cout << "Digite a matricula do " << i + 1 << " aluno:";
        cin >> aluno[i].matricula;
        cin.ignore();
        cout << "Digite o nome:";
        getline(cin, aluno[i].nome);
        cout << "Digite o curso:";
        getline(cin, aluno[i].curso);
        limpaTela();
    }

    //mostra na tela informações
    for(i = 0; i < 5; i++)
    {
        cout << i + 1 << " - Matricula:" << aluno[i].matricula << " Nome:" << aluno[i].nome << endl << " Curso:" << aluno[i].curso << endl;
    }
    //retorno da main
    return 0;
}
void limpaTela()
{
    system("cls");
}
