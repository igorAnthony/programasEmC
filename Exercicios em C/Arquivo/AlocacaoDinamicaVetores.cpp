#include <string>
#include <iostream>
#include <new>
using namespace std;
int main()
{
    int tam, i;

    //lendo o tamanho
    cout << "Digite o tamanho do vetor:";
    cin >> tam;
    //criando um ponteiro que recebe o novo vetor vazio
    int *vet = new int[tam];
    //imprimindo os valores
    for(i = 0; i < tam; i++)
    {
        vet[i] = i;
        cout << vet[i] << endl;
    }
    free(vet);
    return 0;
}
