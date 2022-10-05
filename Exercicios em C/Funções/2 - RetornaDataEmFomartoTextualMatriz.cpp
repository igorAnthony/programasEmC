#include <string>
#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;
void retornaData(int dia, int mes, int ano);
int main()
{
    //variaveis
    int dia, mes, ano;
    //instrução
    cout << "Digite uma data no formato dd/mm/aaaa:";
    cin >> dia >> mes >> ano;
    retornaData(dia, mes, ano);
}
void retornaData(int numerod, int numerom, int numeroa)
{
    char strings [12][10] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
    cout << numerod << " de " << strings[numerom - 1] << " de " << numeroa << endl;
}
