#include <string>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#define TAM 2
using namespace std;
typedef struct{
    string nome;
    int idade;
    char sexo;
    double CPF;
    int codigodosetor;
    string cargo;
    double salario;
    int dia;
    int mes;
    int ano;
}Funcionario;
void preencheFunc(Funcionario *func, int tam);
void exibeFunc(Funcionario *func, int tam);
int main()
{
    int i, j, aux;
    Funcionario funcionario[TAM];
    preencheFunc(funcionario, TAM);
    exibeFunc(funcionario, TAM);
    //organiza pela idade
    for(i = 0; i < TAM; i++)
    {
        for(j = i + 1; j < TAM; j++)
        {
            if(funcionario[j].idade <= funcionario[i].idade)
            {
                    aux = funcionario[i];
                    funcionario[i] = funcionario[j];
                    funcionario[j] = aux;
            }
        }
    }
}
void preencheFunc(Funcionario *func, int tam)
{
    int i;
    for(i = 0; i < tam; i++)
    {
        cout << i + 1 << " funcionario" << endl;
        cout << "Nome:";
        getline(cin, func[i].nome);
        cout << "Idade:";
        cin >> func[i].idade;
        cin.ignore();
        cout << "Sexo masculino coloque M Sexo feminino coloque F:";
        cin >> func[i].sexo;
        cout << "CPF:";
        cin >> func[i].CPF;
        cout << "Data de nascimento dd mm aaaa";
        cin >> func[i].dia >> func[i].mes >> func[i].ano;
        cout << "Codigo do setor onde trabalha:";
        cin >> func[i].codigodosetor;
        while(func[i].codigodosetor > 99 || func[i].codigodosetor < 0)
        {
            cout << "Codigo do setor incorreto, apenas do 0 ate o 99! Digite novamente:";
            cin >> func[i].codigodosetor;
        }
        cout << "Cargo:";
        cin.ignore();
        getline(cin, func[i].cargo);
        cout << "Salario:";
        cin >> func[i].salario;
        cin.ignore();
        system("cls");
    }
}
void exibeFunc(Funcionario *func, int tam)
{
    int i;
    for(i = 0; i < tam; i++)
    {
        cout << i + 1 << " funcionario" << endl;
        cout << "Nome:" << func[i].nome << endl;
        cout << "Idade:" << func[i].idade << endl;
        cout << "Sexo masculino coloque M Sexo feminino coloque F:" << func[i].sexo << endl;
        cout << "CPF:" << func[i].CPF << endl;
        cout << "Data de nascimento " << func[i].dia << "/" << func[i].mes << "/" << func[i].ano << endl;
        cout << "Codigo do setor onde trabalha:" << func[i].codigodosetor << endl;
        cout << "Cargo:" << func[i].cargo << endl;
        cout << "Salario:" << func[i].salario << endl;
    }
}


