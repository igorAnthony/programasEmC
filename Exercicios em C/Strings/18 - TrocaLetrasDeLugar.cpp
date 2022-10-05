#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;
void limpaTela()
{
    system("cls");
}
int main()
{
    //VARIAVEIS
    char frase[255], L1, L2, aux;
    int i;
    //INSTRUÇÃO
    cout << "Digite uma frase:" << endl;
    cin.getline(frase, 255);
    cout << "Escolha uma letra digitada: ";
    cin >> L1;
    cout << "Escolha outra letra para trocar de lugar com essa: ";
    cin >> L2;
    limpaTela();
    cout << "frase final trocando de lugar as letras " << L1 << " e " << L2 << " de lugar:" << endl;
    for(i = 0; i < strlen(frase); i++)
    {
        if(frase[i] == L1)
        {
            frase[i] = L2;
        }else if(frase[i] == L2){
            frase[i] = L1;
        }
        cout << frase[i];
    }
    return 0;
}
