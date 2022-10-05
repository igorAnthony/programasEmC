#include <string>
#include <iostream>
#include <new>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
struct Fruta
{
    string cor;
    string nome;
};
int main()
{
    int tam, i;
    //criando um ponteiro para struct fruta
    Fruta *primeiraFruta = new Fruta;
    //modificado valores
    primeiraFruta->cor = "Amarelo";
    primeiraFruta->nome = "Banana";
    cout << "Cor:" << primeiraFruta -> cor << " Nome:" << primeiraFruta -> nome << endl;
    //tamanho variavel da struct
    cout << "Quantas frutas deseja?";
    cin >> tam;
    Fruta *ListaDeFruta = new Fruta[tam];
    for(i = 0; i < tam; i++)
    {
        cout << "Nome da " << i + 1 << " fruta:";
        cin >> ListaDeFruta[i].nome;
        cout << "Cor da fruta:";
        cin >> ListaDeFruta[i].cor;
    }
    system("cls");
    //imprimindo
    for(i = 0; i < tam; i++)
    {
        cout << "Nome da " << i + 1 << " fruta:" << ListaDeFruta[i].nome;
        cout << endl << "Cor da fruta:" << ListaDeFruta[i].cor << endl;
    }

}
