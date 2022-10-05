#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    //variaveis
    int mat[4][4], i, j;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++)
        {
            mat[i][j] = (i + 1)*(j + 1);
        }
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
    //Pausa o programa após executar
    system("pause");

    return 0;
}
