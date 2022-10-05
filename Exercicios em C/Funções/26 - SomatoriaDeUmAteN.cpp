#include <string>
#include <iostream>

using namespace std;
int SomatorioDeUmAteN(int N);
int main()
{
    //variaveis
    int numero, somatorio;
    //instrução
    cout << "Digite um numero:";
    //le valor
    cin >> numero;
    //chama a função
    somatorio = SomatorioDeUmAteN(numero);
    //imprime a soma
    cout << "Somatorio de 1 ate " << numero << ": " << somatorio << endl;
    //retorno da função
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




