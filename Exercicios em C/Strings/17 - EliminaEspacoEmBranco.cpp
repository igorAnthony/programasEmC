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
    char frase[255];
    char fraseRESUL[255];
    int i, j = 0;

    //INSTRUÇÃO
    cout << "Digite uma frase:" << endl;
    cin.getline(frase, 255);
    cout << "Frase sem os espacos: " << endl;
    //condicao para eliminar os espaços
    for(i = 0; i < strlen(frase); i++)
    {
        if(frase[i] == ' ')
        {
            i++;
            fraseRESUL[j] = frase[i];
        }else{
            fraseRESUL[j] = frase[i];
        }
        j++;
    }
    cout << fraseRESUL;
    return 0;
}
