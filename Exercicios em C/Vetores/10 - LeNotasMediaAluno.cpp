#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    //variaveis
    float alunos[15], media = 0;
    int i;
    //instrução
    cout << "Digite a nota dos 15 alunos:";
    //Le notas alunos
    for(i = 0; i < 15; i++)
    {
        cin >> alunos[i];
        media += alunos[i];
    }
    media = (media)/15;//calcula media geral
    cout << "A media geral da sala: " << media << "\n"; //imprime media geral
    //Pausa o programa após executar
    system("pause");
    return 0;
}
