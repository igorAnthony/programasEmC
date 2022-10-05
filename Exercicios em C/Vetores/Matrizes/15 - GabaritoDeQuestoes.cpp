#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    char peg[5][10];
    char gab[10] = {'a','b','d','a','b','b','b','d','a','a'};
    int nota[5], i, j, pont = 0;

    for(i = 0; i < 5; i++){
            cout << "Aluno: " << i + 1 << "\n";
        for(j = 0; j < 10; j++)
        {
            cout << j + 1 <<" - Pergunta\nReposta: ";
            cin >> peg[i][j];
            if(peg[i][j] == gab[j])
            {
                nota[i] = pont + 1;
                pont++;
            }
        }
        pont = 0;
    }
    system("cls"); //limpa a tela
    for(i = 0; i < 5; i++){
            cout << "Aluno(" << i + 1 << ") tirou = " << nota[i] << "\n";
    }
    //Pausa o programa após executar
    system("pause");

    return 0;
}
