#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    //variaveis
    char frase1[255];
    char frase2[255];
    int i;
    //instrução
    cout << "Digite uma frase:";
    cin.getline(frase1, 255);
    cout << "Digite outra uma frase:";
    cin.getline(frase2, 255);
    system("cls");
    //Compara se sao iguais, a primeira condição do exercicio é ser distintas
    if(strcmp(frase1, frase2) != 0)
    {
        cout << "A primeira frase de tras pra frente:" << endl;
            for(i = strlen(frase1) - 1; i >= 0; i--){
                if(frase1[i] == 'a' || frase1[i] == 'A')//a segunda codição é se for 'A' troca por '*'
                {
                    frase1[i] = '*';
                }
            cout << frase1[i];
            }
        cout << endl << "A segunda frase de tras pra frente:" << endl;
            i = 0;
            for(i = strlen(frase2) - 1; i >= 0; i--){
                if(frase2[i] == 'a' || frase2[i] == 'A')
                {
                frase2[i] = '*';
                }
            cout << frase2[i];
            }
    }else{
        cout << "Frases iguais!!";
    }
    return 0;
}
