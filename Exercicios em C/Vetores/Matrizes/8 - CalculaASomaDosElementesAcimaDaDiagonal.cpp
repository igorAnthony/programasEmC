#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //variaveis
    int mat[3][3], i ,j, soma = 0;
    //instrução
    cout << "Digite os valores para matriz 3x3: ";
    for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                cin >> mat[i][j];
                if(i < j)//Os elementos acima da diagonal estão numa posição onde a coluna é maior que a linha
                    soma += mat[i][j];
            }

    }
    cout << "Soma dos elementos acima da diagonal: " << soma << "\n";
    //Pausa o programa após executar
    system("pause");

    return 0;
}
