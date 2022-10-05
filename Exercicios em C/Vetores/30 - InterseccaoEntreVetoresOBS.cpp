#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#define TAM 4

using namespace std;

int main()
{
    //variaveis
    int v1[TAM] = {1,1,2,4}, v2[TAM] = {1,1,2,6}, v3[TAM], i, j, k, n = 0;

    //instrução
    cout << "Digite 10 valores: ";
    for(i = 0; i < TAM; i++)
    {
        cin >> v1[i];
    }
    cout << "Digite novamente 10 valores: ";
    for(i = 0; i < TAM; i++)
    {
        cin >> v2[i];
    }*/
    //Compara os valores e manda para o v3
    for(i = 0; i < TAM; i++)
    {
        for(j = 0; j < TAM; j++)
        {
            if(v1[i] == v2[j])
            {
                v3[n] = v1[i];
                n++;
            }
        }
    }
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(v3[i] == v3[j])
            {
                for(k = j + 1; k < TAM; k++)
                {
                    v3[k-1] = v3[k];
                }
             n--;
            }
        }
    }
    cout << "Valor de n: " << n << "\n";
    cout << "O vetor de interseccao: ";
    for(i = 0; i < n; i++)
    {
        cout << "v3[" << i << "] = " << v3[i] << " ";
    }
    //Pausa o programa após executar
    system("pause");

    return 0;
}
