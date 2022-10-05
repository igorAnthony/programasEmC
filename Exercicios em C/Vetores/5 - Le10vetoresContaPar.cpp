#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>
using namespace std;

//Função Principal
int main()
{
    //variaveis
    int i, vetor[10], par = 0;
    //instrução
    cout << "Digite 10 valores: ";
    //Le os valores do vetor
    for(i = 0;i < 10;i++){
        cin >> vetor[i];
        if(vetor[i] % 2 == 0){
            par++;  //conta as quantidades de pares
        }
    }
    //Imprime os valores pares e as posições no vetor
    cout << "Valores digitados que sao pares: " << "\n";
    for(i = 0;i < 10;i++){
        if(vetor[i] % 2 == 0){
            cout << "Vetor[" << i << "] = " << vetor[i] << "\n";
        }
    }
    cout << "\n" <<"Quantidade de numeros pares digitados: " << par;
    //Pausa o programa após executar
    system("pause");
    return 0;
}
