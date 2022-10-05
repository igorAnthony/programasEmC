#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    //variaveis
    char frase[255];
    int i;
    //instrução
    cout << "Digite uma frase: " << endl;
    setbuf(stdin, NULL);
    cin.getline(frase, 255);
    //Condição para imprimir
    if(frase[0] == 'a' || frase[0] == 'A'){
        cout << frase << endl;
    }else{
        cout << "Nao comeca com 'a' ou 'A'." << endl;

    }
}
