#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#define TAM 20

using namespace std;

int main()
{
    //variaveis
    int vet[TAM];
    int i, j, k, n = TAM;
    //INSTRUÇÃO
    cout << "Digite 20 valores: ";
    for(i = 0; i < n; i++){
        cin >> vet[i];
    }
    //Condição para remover os valores repetidos
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(vet[i] == vet[j])
            {
                    for(k = j + 1; k < n; k++)
                    {
                        vet[j] = vet[k];
                    }
                n--;
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        cout << "vet[" << i << "] = " << vet[i] << "\n";
    }
    //Pausa o programa após executar
    system("pause");

    return 0;
}

