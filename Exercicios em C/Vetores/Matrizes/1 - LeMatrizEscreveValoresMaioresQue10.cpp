#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    //variaveis
    int mat[4][4], i , j, maior = 0;

    //instrução
    cout << "Digite os valores da matriz:";
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            cin >> mat[i][j];
        }
    }
    system("cls");//limpa a tela
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            cout << mat[i][j] << " ";
            if(mat[i][j] > 10)
            {
                maior++;
            }
        }
        cout << "\n";
    }
    cout << "Valores maiores que 10: " << maior;
    cout << "\n";
    //Pausa o programa após executar
    system("pause");

    return 0;
}
