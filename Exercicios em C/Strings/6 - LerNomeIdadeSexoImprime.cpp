#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;
typedef struct
{
    char nome[255];
    int idade;
    int sexo;
} Pessoa;
int main()
{
    //variaveis
    Pessoa pessoa;
    //instrução
    cout << "Digite seu nome:" << endl;
    cin.getline(pessoa.nome, 255);
    cout << "Qual sua idade?" << endl;
    cin >> pessoa.idade;
    cout << "Eh de qual sexo?" << endl << "1 - Masculino\n2 - Feminino" << endl;
    cin >> pessoa.sexo;
    switch(pessoa.sexo)
    {
        case 1:
        {
            cout << "Nao aceito!!" << endl;
            break;
        }
        case 2:
        {
            if(pessoa.idade < 25){
                cout << "Aceita" << endl;
            }
            else{
                cout << "Nao aceita" << endl;
            }
        break;
        }
        default:
        {
            cout << "Opcao invalida!!!" << endl;
            break;
        }
    }

    //Pausa o programa após executar
    system("pause");

    return 0;
}
