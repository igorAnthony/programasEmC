#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    //variaveis
    int A[10], i, j, semrep = 0;
    //instrução
    cout << "Digite 10 valores para definir o vetor: ";
    for(i = 0; i < 10; i++){
        cin >> A[i];
    }
    for(i = 0; i < 10; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            if(A[i] == A[j])
            {
                cout << "Valor " << A[i] << " se repete\n" << "\n";
            }
            else{
                semrep++;
            }
        }
    }
        if(semrep == 45)
        {
            cout << "Nenhum valor se repete" << "\n";
        }
    //Pausa o programa após executar
    system("pause");

    return 0;
}
