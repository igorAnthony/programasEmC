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
    int i, posicao_maior = 0, posicao_menor = 0, maior = 0, menor = 0, A[10];
    //Le vetor
    for(i = 0; i < 10; i++){
        cin >> A[i];
    }
    maior = menor = A[0];
    //Compara valores
    for(i = 1; i < 10; i++)
    {
        if(A[i] > maior){
            maior = A[i];
            posicao_maior = i;
        }
        if(A[i] < menor){
            menor = A[i];
            posicao_menor = i;
        }
    }
    for(i = 0; i < 10; i++)
    {
        cout << "A[" << i << "] = " << A[i] << "\n";
    }
    cout << "maior valor A[" << posicao_maior << "] = " << maior << "\n";
    cout << "menor valor A[" << posicao_menor << "] = " << menor << "\n";
     //cout << "menor valor: " << menor;
    //Pausa o programa após executar
    system("pause");
    return 0;
}
