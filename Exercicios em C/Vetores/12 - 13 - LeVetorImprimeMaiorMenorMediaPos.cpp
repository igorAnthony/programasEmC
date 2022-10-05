#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    //variaveis
    int vetor[5], i, media = 0, maior = 0, posicao1 = 0, posicao2 = 0, menor = 0;
    //instrução
    cout << "Digite 5 valores para definir um vetor: ";
    for(i = 0; i < 5; i++){
        cin >> vetor[i];
        media += vetor[i]; //soma todos os valores
    }
    maior = menor = vetor[0]; //Define um valor fixo para comparar qual é o maior
    //Imprime o vetor
    for(i = 0; i < 5; i++)
    {
            cout << "Vetor[" << i << "] = " << vetor[i] << "\n";
    }
    //Compara valores e acha a posição do maior e menor valor
    for(i = 0; i < 5; i++){
        if(vetor[i] > maior){ //Caso seja maior, meu valor fixo se altera e compara com o restante
            maior = vetor[i];
            posicao1 = i;
        }
        if(vetor[i] < menor){
            menor = vetor[i];
            posicao2 = i;
        }
    }
    media = (media)/5;//calcula a media
    //Imprime na tela o maior, menor e a media
    cout << "o maior valor:\nVetor[" << posicao1 << "] = " << maior << "\n";
    cout << "o menor valor:\nVetor[" << posicao2 << "] = " << menor << "\n";
    cout << "a media desse vetor: " << media << "\n";
    //Pausa o programa após executar
    system("pause");

    return 0;
}
