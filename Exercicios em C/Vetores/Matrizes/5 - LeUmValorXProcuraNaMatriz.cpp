#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    //variaveis
    int mat[5][5], x = 0, i ,j, enc = 0;
    //instrução
    cout << "Digite os valores da matriz 5x5:";
    for (i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            cin >> mat[i][j];
        }
    }
    cin >> x;
    for (i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(mat[i][j] == x)
            {
                cout << "Valor encontrado na matriz, esta na linha: ";
                cout << i + 1 << " coluna: " << j + 1 << "\n";
                enc++;
            }
        }
    }
    if(enc == 0)
    {
        cout << "Valor nao encontrado!!" << "\n";
    }
    //Pausa o programa após executar
    system("pause");

    return 0;
}
