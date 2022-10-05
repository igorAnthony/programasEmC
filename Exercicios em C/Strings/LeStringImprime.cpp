#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>
using namespace std;
void limpaTela()
{
    system("cls");
}
int main()
{
    //variaveis
    char palavra[255];
    //instrução
    cout << "Digite uma palavra:" << endl;
    cin.getline(palavra, 255);
    limpaTela();
    cout << "Palavra:" << palavra << endl;

    return 0;
}
