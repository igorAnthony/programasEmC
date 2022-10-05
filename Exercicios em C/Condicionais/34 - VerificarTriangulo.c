#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Dados tres valores, A, B, C, verificar se eles podem ser valores dos lados de um triangulo
e, se forem, se e um triangulo escaleno, equilatero ou isoscele, considerando os seguintes conceitos:
• O comprimento de cada lado de um triangulo e menor do que a soma dos outros dois lados.
• Chama-se equilatero o triangulo que tem tres lados iguais.
• Denominam-se isosceles o triangulo que tem o comprimento de dois lados iguais.
• Recebe o nome de escaleno o triangulo que tem os tres lados diferentes.*/

//Função Principal
int main()
{
    //Definindo variaveis
    float lado1 = 0, lado2 = 0, lado3 = 0, aux = 0, a = 0, b = 0, c =0;
    printf("Entre com 3 valores qualquer para saber se podem se tornar um triangulo\n");
    scanf("%f%f%f", &lado1, &lado2, &lado3);
    //Caso o usuario digite os valores em uma outra ordem
    if(lado2 - lado3 < 0){
        aux = lado2;
        lado2 = lado3;
        lado3 = aux;
    }else if(lado1 - lado3 < 0){
        aux = lado1;
        lado1 = lado3;
        lado3 = aux;
    }else if(lado1 - lado2 < 0){
        aux = lado1;
        lado1 = lado2;
        lado2 = aux;
    }
    a = lado1;
    b = lado2;
    c = lado3;
    if((b - c) < a && a < (b + c) && (a - b) < c && c < (a + b) && (a - c) < b && b < (a + c)){
        if(a == b && a == c && b == c){
            printf("Ele tem todos os lados iguais, entao e um triangulo equilatero\n");
        }else if(a == b && a!= c && b != c){
            printf("Ele tem dois lados iguais e um diferente, entao e um triangulo isosceles\n");
        }else if(a == c && a != b && c != b){
            printf("Ele tem dois lados iguais e um diferente, entao e um triangulo isosceles\n");
        }else if(b == c && b != a && c != a){
            printf("Ele tem dois lados iguais e um diferente, entao e um triangulo isosceles\n");
        }else if(a != b && b != a && a != c){*/
            printf("Todos os lados diferentes, entao e um triangulo escaleno\n");
    }}else{
        printf("nao e possivel criar um triangulo com esses valores\n");
    }
    //Pausa o programa após executar
    system("pause");
}

