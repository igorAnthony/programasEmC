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
    cout << "maior valor na posicao: " << posicao_maior << " valor: " << maior << "\n";
    cout << "menor valor na posicao: " << posicao_menor << " valor:" << menor << "\n";
     //cout << "menor valor: " << menor;
    //Pausa o programa após executar
    system("pause");
    return 0;
}
