#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;
//Função Principal
int main()
{
    //variaveis
    int A[6] = {1, 0, 5, -2, -5, 7}, soma = 0, i;
    //Soma os vetores da posicao
    soma = A[0] + A[1] + A[5];
    //Imprime a soma
    cout << "soma: " << soma << "\n";
    //Modifica o valor da 4 posição
    A[4] = 100;
    //Imprime todas as posicoes um em cada linha
    for(i = 0; i < 6; i++){
        //printf("Posicao[%d]: %d\n", i, vetor[i]);
        cout << "A[" << i << "] = " << A[i] << "\n";
    }
    //Pausa o programa após executar
    system("pause");
    return 0;
}

