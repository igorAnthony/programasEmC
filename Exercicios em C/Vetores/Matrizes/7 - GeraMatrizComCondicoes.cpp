#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //variaveis
    int A[10][10], i, j;
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(i < j)
            {
                A[i][j] = 2*(pow(i,2)) + 7*j - 2;
            }
            if( i == j)
            {
                A[i][j] = 3*(pow(i,2)) - 1;
            }
            if(i > j)
            {
                A[i][j]= 4*(pow(i,3)) - 5*(pow(j,2)) + 1;
            }
        }
    }
    cout << "Matriz gerada:\n";
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
    //Pausa o programa após executar
    system("pause");

    return 0;
}
