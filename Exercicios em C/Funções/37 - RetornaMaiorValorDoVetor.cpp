#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;
int retornaMaiorValor(int *vet_inteiros, int tam);
int main()
{
    //variaveis
    int i, *vet_inteiros, tam = 0, maior_valor;
    //instrução
    cout << "Digite o tamanho do seu vetor:";
    cin >> tam;
    //le valores pro vet
    cout << "Digite os valores:";
    for(i = 0; i < tam; i++)
    {
        cin >> vet_inteiros[i];
    }
    maior_valor = retornaMaiorValor(vet_inteiros, tam);
    //mostra o maior valor
    cout << "O maior valor eh o da posicao " << maior_valor << " que eh " << vet_inteiros[maior_valor] << endl;
    //retorna maior valor
    return 0;
}
int retornaMaiorValor(int *vet_inteiros, int tam)
{
    int i, maior_val = vet_inteiros[0], maior_pos;
    for(i = 0; i < tam; i++)
    {
        if(vet_inteiros[i] > maior_val)
        {
            maior_val = vet_inteiros[i];
            maior_pos = i;
        }
    }
    return maior_pos;
}
