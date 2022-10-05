#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;

void limpaTela();

int main()
{
    //VARIAVEIS
    char modelo[5][20];
    float consumo[5];
    int i, maisEcon = 0, save1;

    //le o modelo do carro e o consumo por litro
    for(i = 0; i < 5; i++)
    {
        cout << "Digite o " << i + 1 << " modelo do carro:";
        cin.getline(modelo[i], 20);
        cout << "Quantos km por litro faz: ";
        cin >> consumo[i];
        fflush(stdin);
    }
    maisEcon = consumo[0];//start para o maisEcon
    //Condição para ver qual carro é mais economico
    for(i = 0; i < 5; i++)
    {
        if(consumo[i] > maisEcon)
        {
            maisEcon = consumo[i];
            save1 = i;
        }
    }
    limpaTela();
    //Imprime modelo mais economico
    cout << "Modelo mais economico:" << endl << modelo[save1] << " consome: " << consumo[save1] << "km/l" << endl;
    //Imprime quanto cada carro gastaria
    cout << endl << "Quanto cada carro gastaria para andar 1000km:" << endl;
    for(i = 0; i < 5; i++)
    {
        cout << modelo[i] << " gastaria: " << 1000/consumo[i] << " litros" << endl;
    }

    return 0;
}
void limpaTela()
{
    system("cls");
}

