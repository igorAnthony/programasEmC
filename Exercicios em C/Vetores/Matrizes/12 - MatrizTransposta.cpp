#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //variaveis
    int mat[3][3], i ,j;
    //instrução
    cout << "Digite os valores para matriz 3x3: ";
    for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                cin >> mat[i][j];
            }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cout << mat[j][i] << " ";//linha vira coluna e coluna vira linha
            }
        cout << "\n";
    }
    //Pausa o programa após executar
    system("pause");

    return 0;
}


