#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;
void mostraMensagem(float consumo);
int main()
{
        //variaveis
        float kilometros, litros, consumo;
        //intru��o
        cout << "Quantos km teu carro faz por litros? Digite a distancia em km:";
        //le valor
        cin >> kilometros;
        //intru��o
        cout << "Digite a quantidade de litros necessaria para fazer o percurso:";
        //le o segundo valor
        cin >> litros;
        //faz quanto ele consome
        consumo = kilometros/litros;
        //chama a fun��o mostraMensagem e passa um parametro
        mostraMensagem(consumo);
        //retorno da fun��o main
        return 0;
}
void mostraMensagem(float consumo)
{
    if(consumo < 8)
    {
        cout << "Venda o carro!" << endl;
    }
    else if(consumo > 8 && consumo < 12)
    {
        cout << "Economico!" << endl;
    }
    else if(consumo > 12)
    {
        cout << "Super economico!" << endl;
    }
}
