#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    //variaveis
    int vetor[6], i;
    //Le vetor
    for(i = 0; i < 6; i++){
        cin >> vetor[i];
    }
    //imprime vetor
    for(i = 0; i < 6; i++){
        cout << "Vetor[" << i << "] = " << vetor[i] << "\n";
    }
    //Pausa o programa após executar
    system("pause");
    return 0;
}
