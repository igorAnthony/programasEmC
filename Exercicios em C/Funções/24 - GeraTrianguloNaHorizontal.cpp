#include <string>
#include <iostream>

using namespace std;
void geraTrianguloHorizontal(int n);
int main()
{
    //variaveis
    int valor;
    //instrução
    cout << "Digite um valor:";
    //le dois valores
    cin >> valor;
    //chama a função
    geraTrianguloHorizontal(valor);
    //retorno da main
    return 0;
}
void geraTrianguloHorizontal(int n)
{
    int linha, quant_simb = 1, aux_quant = 1, espaco, quant_espacos;
    espaco = 0;
    for(linha = 0; linha < n; linha++)
    {
            //quant max é a quantidade de espaços que preciso dar, vai diminuindo conforme passa o programa
            quant_espacos = n - 1 - linha;
            /*gera os espaços para o triangulo nao ficar colado na parede,
            enquanto meu espaco for menor que minha quant maxima de espaços que posso dar na linha, ele vai executar*/
            while(espaco < quant_espacos)
            {
                cout << " ";
                espaco++;
            }
            espaco = 0;
            /*vai imprimir os simbolos a minha quantidade de simbolos tem que ser maior ou = ao
            meu aux de quant, se não nem executa, ele começa em 1, então na primeira executa uma vez, na segunda 3x e assim vai*/
            while(quant_simb >= aux_quant)
            {
                cout << "*";
                aux_quant++;
            }
            //a quantidade de simbolos aumenta +2 a cada linha que pula
            quant_simb = quant_simb + 2;
            //zera para poder fazer novamente
            aux_quant = 1;
            cout << endl;
    }
}
