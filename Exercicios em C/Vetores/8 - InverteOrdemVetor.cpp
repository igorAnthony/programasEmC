#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    //variaveis
    int vetor[6], i;
    //instrução
    cout << "Entre com 6 valores: ";
    //le vetor
    for(i = 0; i < 6; i++){
        cin >> vetor[i];
    }
    //inverte a ordem
    cout << "Ordem invertida: ";
    for(i = 5; i >= 0; i--){
        cout << vetor[i] << " ";
    }
    //pausa o programa após executar
    system("pause");
    return 0;
}
