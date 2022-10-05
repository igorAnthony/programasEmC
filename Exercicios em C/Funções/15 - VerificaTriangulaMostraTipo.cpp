#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;
void verificaTriangulo(float l1, float l2, float l3);
int main()
{
    //variaveis
    float lado1, lado2, lado3;
    //instrução É OBRIGATORIO SEREM VALORES EM ORDEM CRESCENTE
    cout << "Digite os 3 valores aleatoriamente em ordem crescente para saber se forma um triangulo:";
    //le os 3 valores
    cin >> lado3 >> lado2 >> lado1;
    //caso o valor seja menor que 0, ele obriga ao usuario que digite todos os valores maiores que 0
    while(lado3 < 0 || lado2 < 0 || lado1 < 0)
    {
        cout << "APENAS VALORES MAIORES QUE ZERO, DIGITE NOVAMENTE OS 3 VALORES!" << endl;
        cin >> lado3 >> lado2 >> lado1;
    }
    //chama a funcao para verificar se sao triangulos
    verificaTriangulo(lado1, lado2, lado3);
}
void verificaTriangulo(float a, float b, float c)
{
    bool verifica = false;
    int l1 = 5, l2 = 3;
    //condicao de existencia do triangulo
    if(b - c < a && a < b + c)
    {
        if(a - c < b && b < a + c)
        {
            if(a - b < c && c < a + b)
            {
                verifica = true;//caso ele entre nesse if, a variavel bool recebe o valor true
            }
        }
    }
    if(verifica != 0)//se for diferente de 0, ela é true, entao pode se formar um triangulo
    {
        //triangulo equilatero
        if(a == b && b == c && a == c)
        {
            cout << "Pode formar um triangulo equilatero com essas medidas!" << endl;
        }
        //triangulo isoscele
        else if((a == b && a != c && b != c)|| (b == c && c != a && b != a) || (a == c && a != b && c != b))
        {
            cout << "Pode formar um triangulo isoscele com essas medidas!" << endl;
        }
        //triangulo escaleno
        else if(a != b && a != c && b != c)
        {
            cout << "Pode formar um triangulo escaleno com essas medidas!" << endl;
        }
    }else{
        cout << "As medidas nao atendem a condicao de existencia para formar um triangulo!" << endl;
    }
}
