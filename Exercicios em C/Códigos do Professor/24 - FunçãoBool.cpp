#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;
//Fun��o que retorna true
bool retornaBooleano();
int main()
{
    //variaveis
    bool variavelBooleana;

    //Recebe o valor da fun��o
    variavelBooleana = retornaBooleano;

    //Imprimindo o valor da variavel
    cout << variavelBooleana << "\n";

    //Se for verdadeiro executa o primeiro bloco
    if(variavelBooleana){
        cout << "eh verdadeiro";
    }//Se n�o executa o segundo bloco
    else{
        cout << "eh falso";
    }

    return 0;
}
bool retornaBooleano()
{
    return true;
}
