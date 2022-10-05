#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

//Função Principal
int main()
{
    //variaveis
    int vetor1[10], vetor2[10], i;
    //Le valores do vetor
    for(i = 0; i < 10; i++){
    cin >> vetor1[i];
    vetor2[i] = vetor1[i]*vetor1[i];
    }
    //Imprime os vatores
    for(i = 0; i < 10; i++){
    cout << "vetor1[" << i << "] = " << vetor1[i] << ", ";
    cout << "vetor2[" << i << "] = " << vetor2[i] << "\n";
    }
    //Pausa o programa após executar
    system("pause");
}
