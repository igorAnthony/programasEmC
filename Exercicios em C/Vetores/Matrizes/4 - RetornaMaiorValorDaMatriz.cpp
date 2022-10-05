#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    //variaveis
    int mat[4][4], i, j, maior = 0, linha = 0, coluna = 0;
    //instrução
    cout << "Digite os valores da matriz:";
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            cin >> mat[i][j];
        }
    }
    maior = mat[0][0];
    system("cls"); //limpa a tela
    //imprime a matriz na tela
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            cout << mat[i][j] << " ";
            if(mat[i][j] > maior)//Compara se é maior e salva na variavel maior
            {
                maior = mat[i][j];
                linha = i;
                coluna = j;
            }
        }
        cout << "\n";
    }
    //imprime o maior valor e fala a posição onde está
    cout << "o maior valor:" << maior << " Linha:" << linha + 1 << " Coluna:" << coluna + 1 << "\n";
    //Pausa o programa após executar
    system("pause");

    return 0;
}
