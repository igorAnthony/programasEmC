#include <string>
#include <iostream>

using namespace std;
typedef struct
{
    int idade;
    string nome;
    string endereco;
}Pessoa;
int main()
{
    int i;
    Pessoa pessoa;
    cout << "Digite o nome da pessoa:";
    getline(cin, pessoa.nome);
    cout << "Digite a idade:";
    cin >> pessoa.idade;
    //finaliza a extração de caractere, ai o caractere /n do inteiro é zerado do buffer
    cin.ignore();
    cout << "Digite o endereco:";
    getline(cin, pessoa.endereco);
    //cout << "Nome:" << pessoa.nome << endl << "Idade:" << pessoa.idade << endl << "Endereco:" << pessoa.endereco << endl;
    //tamanho maximo de uma string
    cout << (pessoa.nome).max_size();
    //tamanho atual da string
    cout << (pessoa.nome).size();
    //capacidade corrente da string, quantos elementos ela poderá conter antes de necessitar mais memória
    cout << (pessoa.nome).capacity();
    return 0;
}
