#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;
double retornaMediaVetor(double *vet_reais, int tam);
int main()
{
    //variaveis
    double *vet_reais, media;
    int tam, i;
    //instrução
    cout << "Digite o tamanho do seu vetor de reais:";
    //recebe o tamanho do vetor
    cin >> tam;
    //le os valores do vet
    for(i = 0; i < tam; i++)
    {
        cin >> vet_reais[i];
    }
    media = retornaMediaVetor(vet_reais, tam);
    //imprime media
    cout << media;
    return 0;
}
double retornaMediaVetor(double *vet_reais, int tam)
{
    int i;
    double media_vet = 0;
    for(i = 0; i < tam; i++)
    {
        media_vet += vet_reais[i];
    }
    media_vet = media_vet/tam;
    return media_vet;
}
