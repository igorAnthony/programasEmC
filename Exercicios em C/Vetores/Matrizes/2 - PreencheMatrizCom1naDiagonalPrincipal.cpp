#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    int mat[5][5], i, j;

    mat[0][0] = 1;
    mat[0][1] = 0;
    mat[0][2] = 0;
    mat[0][3] = 0;
    mat[0][4] = 0;
    mat[1][0] = 0;
    mat[1][1] = 1;
    mat[1][2] = 0;
    mat[1][3] = 0;
    mat[1][4] = 0;
    mat[2][0] = 0;
    mat[2][1] = 0;
    mat[2][2] = 1;
    mat[2][3] = 0;
    mat[2][4] = 0;
    mat[3][0] = 0;
    mat[3][1] = 0;
    mat[3][2] = 0;
    mat[3][3] = 1;
    mat[3][4] = 0;
    mat[4][0] = 0;
    mat[4][1] = 0;
    mat[4][2] = 0;
    mat[4][3] = 0;
    mat[4][4] = 1;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
    //Pausa o programa após executar
    system("pause");

    return 0;
}
