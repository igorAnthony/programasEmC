#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

//Fun��o Principal
int main()
{
    //Definindo uma string
    string palavra;

    //Imprimindo na tela
    cout << "Digite uma palavra: ";

    //Lendo uma string
    cin >> palavra;

    //Imprimindo uma variavel
    cout << "A palavra e: " << palavra;
    cout << "\n\n";
    //Pausa o programa ap�s executar
    system("pause");

    return 0;
}
