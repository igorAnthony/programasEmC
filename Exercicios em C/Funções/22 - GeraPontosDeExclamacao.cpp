#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;
void geraPontosExclamacao(int num);
int main()
{
    //variaveis
    int num;
    //instrução
    cout << "Digite um valor:";
    //le valor
    cin >> num;
    //chama a função
    geraPontosExclamacao(num);
    //retorno da main
    return 0;
}
void geraPontosExclamacao(int num)
{
    int linha, quantDeSimbolos = 1;
    for(linha = 1; linha <= num; linha++)
    {
        while(linha >= quantDeSimbolos)
        {
                cout << "!";
                quantDeSimbolos++;
        }
        cout << endl;
        quantDeSimbolos = 1;
    }
}
