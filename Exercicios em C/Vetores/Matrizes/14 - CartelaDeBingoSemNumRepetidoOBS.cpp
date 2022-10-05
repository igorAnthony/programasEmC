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
    int mat[5][5], i ,j, k, h, rep = 0;
    srand((unsigned)time(NULL));
    //instrução
    cout << "Matriz Original:\n";
    for(i = 0; i < 5; i++){
            for(j = 0; j < 5; j++){
               mat[i][j] = rand()%100;
            }
    }
    //nao sei como tirar a repetição
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
        }
    }
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            cout << mat[i][j] << " ";//linha vira coluna e coluna vira linha
            }
        cout << "\n";
    }
    cout << "Rep:" << rep;
    //Pausa o programa após executar
    system("pause");

    return 0;
}
