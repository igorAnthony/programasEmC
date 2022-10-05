#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    //variaveis
    int mat[4][4], mat2[4][4], mat3[4][4], i, j;
    //instrução
    cout << "Digite os valores da primeira matriz 4x4:";
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            cin >> mat[i][j];
        }
    }
    cout << "Digite os valores da segunda matriz 4x4:";
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            cin >> mat2[i][j];
        }
    }
    system("cls");//limpa a tela
    //Compara os valores para ver qual é maior e passa pro novo vetor
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(mat[i][j] >= mat2[i][j])
            {
                mat3[i][j] = mat[i][j];
            }else{
                mat3[i][j] = mat2[i][j];
            }
        }
    }
    //Imprime o novo vetor
    cout << "Novo vetor: " << "\n";
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            cout << mat3[i][j] << " ";
        }
        cout << "\n";
    }
    //Pausa o programa após executar
    system("pause");

    return 0;
}
