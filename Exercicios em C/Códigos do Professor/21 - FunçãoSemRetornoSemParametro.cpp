#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;
//Função que desenha borda
void desenhaborda()
{
    cout << "|=============|\n";
}
int main()
{

    //Chamando a função
    desenhaborda();

    //Imprime texto na tela
    cout << "      hi       \n";

    //Chamando a função
    desenhaborda();

    return 0;
}
