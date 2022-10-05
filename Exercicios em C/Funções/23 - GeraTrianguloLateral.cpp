#include <string>
#include <iostream>

using namespace std;
void geraTrianguloLateral(int n);
int main()
{
    //variaveis
    int valor;
    //instrução
    cout << "Digite um valor:";
    //le dois valores
    cin >> valor;
    //chama a função
    geraTrianguloLateral(valor);
    //retorno da main
    return 0;
}
void geraTrianguloLateral(int n)
{
        int i, largura, altura, quantDeSimbolos = 1;
        largura = n;
        altura = 2*(n - 1);
        for(i = 1; i <= altura/2 + 1; i++)
        {
            while(i >= quantDeSimbolos)
            {
                cout << "*";
                quantDeSimbolos++;
            }
                cout << endl;
                quantDeSimbolos = 1;
        }
        for(i = altura/2; i >= 1; i--)
        {
                while(i >= quantDeSimbolos)
                    {
                        cout << "*";
                        quantDeSimbolos++;
                    }

                cout << endl;
                quantDeSimbolos = 1;
        }
}
