#include <string>
#include <iostream>

using namespace std;
int SomatorioDeUmAteN(int N);
int main()
{
    //variaveis
    int numero, somatorio;
    //instru��o
    cout << "Digite um numero:";
    //le valor
    cin >> numero;
    //chama a fun��o
    somatorio = SomatorioDeUmAteN(numero);
    //imprime a soma
    cout << "Somatorio de 1 ate " << numero << ": " << somatorio << endl;
    //retorno da fun��o
    return 0;
}
int SomatorioDeUmAteN(int N)
{
    int aux_soma = 1, soma = 0;
    while(aux_soma < N)
    {
        soma += aux_soma;
        aux_rep++;
    }
    return soma;
}




