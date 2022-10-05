#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#define TAM 100

using namespace std;

int main()
{
    //variaveis
    int vet[TAM];
    int i, n = 0;
    cout << "Lista com os valores nao multiplos de 7 e que nao terminam em 7:\n";
    for(i = 0; i < TAM; i++)
    {
        if(n % 7 == 0 || (n + 3) % 10 == 0)
        {
            n++;//se o numero for divisivel por 7 ou terminar em 7 ele pula uma casa
        }
        vet[i] = n;
        n++;
        cout << "vet[" << i << "] = " << vet[i] << "\n";//Imprime vetor

    }

    //Pausa o programa após executar
    system("pause");

    return 0;
}
