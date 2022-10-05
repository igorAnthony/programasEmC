#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct
{
    float x;
    float y;
    float z;
}Vetor;
void SomaVetores(Vetor *vet, int tam);
void ExibeVetores(Vetor *vet, int tam);
int main()
{
    Vetor vetor[2];
    SomaVetores(vetor, 2);
    ExibeVetores(vetor, 2);
    return 0;
}
void SomaVetores(Vetor *vet, int tam)
{
    int i;
    for(i = 0; i < tam; i++)
    {
        cout << i + 1 << " Vetor:" << endl;
        cout << "Digite o valor de x:";
        cin >> vet[i].x;
        cout << "Digite o valor de y:";
        cin >> vet[i].y;
        cout << "Digite o valor de z:";
        cin >> vet[i].z;
        system("cls");
    }
}
void ExibeVetores(Vetor *vet, int tam)
{
    int i;
    for(i = 0; i < tam; i++)
    {
        cout << "Valores do " << i + 1 << " vetor" << endl;
        cout << "x:" << vet[i].x << " y:" << vet[i].y << " z:" << vet[i].z  << endl;
    }
}
