#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;

//função retorna maior fator primo
int retornaFatorPrimo(int num);

int main()
{
    //variaveis
    int valor, maior_fator;
    //instrução
    cout << "Digite um valor:" << endl;
    //le um valor
    cin >> valor;
    //chama a função
    maior_fator = retornaFatorPrimo(valor);
    //mostra maior fator do numero
    cout << "Maior fator primo do numero digitado:" << maior_fator;
    //retorno da main
    return 0;
}
int retornaFatorPrimo(int num)
{
    int maior = 2, verifica_fator = 2, div;
    for(div = 2; div < num; div++)
    {
        if(div <= num)
        {
            while(verifica_fator <= div && div % verifica_fator != 0)
            {
                verifica_fator++;
            }
            if(verifica_fator == div && div > maior){
                maior = div;
            }
            verifica_fator = 2;
        }
    }
    return maior;
}
