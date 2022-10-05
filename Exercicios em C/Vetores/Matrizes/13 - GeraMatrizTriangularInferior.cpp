#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;

int main()
{
    //variaveis
    int mat[4][4], i ,j;
    srand((unsigned)time(NULL));
    //instrução
    cout << "Matriz Original:\n";
    for(i = 0; i < 4; i++){
            for(j = 0; j < 4; j++){
               mat[i][j] = (rand() % 20) + 1;
            }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            cout << mat[i][j] << " ";//linha vira coluna e coluna vira linha
            }
        cout << "\n";
    }
    cout << "\nMatriz Transformada\n";
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
                if(i < j)
                {
                    mat[i][j] = 0;

                }
            cout << mat[i][j] << " ";//linha vira coluna e coluna vira linha
            }
        cout << "\n";
    }
    //Pausa o programa após executar
    system("pause");

    return 0;
}



