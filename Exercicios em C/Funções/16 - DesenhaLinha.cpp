#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;
void DesenhaLinha(int tam);
int main()
{
    //variaveis
    int tamanho;
    //instrução
    cout << "Quantos sinais devem ser mostrados?";
    //le um valor, as quantidades de sinais de '=' vao ser mostrados na tela
    cin >> tamanho;
    DesenhaLinha(tamanho);
}
void DesenhaLinha(int tam)
{
    int quant = 0;
    while(quant < tam)
    {
        cout << "=";
        quant++;
    }
}
