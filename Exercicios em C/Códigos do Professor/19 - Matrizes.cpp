#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;
//Função Principal
int main()
{
    //vetor = [0][1][2];

    /*matriz = [0,0][0,1][0,2]
               [1,0][1,1][1,2]
               [2,0][2,1][2,2]*/
    int matriz [2][2], i, j;

    //Passando valores
    matriz [0][0] = 1;
    matriz [0][1] = 2;
    matriz [1][0] = 3;
    matriz [1][1] = 4;
    //Imprimindo valores da matriz
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            //cout << "i = " << i << ", j = "  << j << "\n";
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }
    //Lendo valores de matriz
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            //scanf("%d", &matriz[i][j]);
            cin >> matriz[i][j];
        }
    }
    //Imprimindo valores na tela
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            //cout << "i = " << i << ", j = "  << j << "\n";
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }
    //Pausa o programa após executar
    system("pause");
    return 0;
}
