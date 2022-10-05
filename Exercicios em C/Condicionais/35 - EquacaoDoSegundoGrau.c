#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Calcule as raızes da equacao de 2 grau.
A variavel a tem que ser diferente de zero. Caso seja igual, imprima a mensagem
"Nao é equacao de segundo grau"*/
//Função Principal
int main()
{
    //Definindo as variaveis
    float delta = 0, x = 0, x1 = 0, x2 = 0, a = 0, b = 0, c = 0;
    printf("Entre com os valores de a b e c para calcular a equacao do segundo grau:\n a.x.x  b.x + c = 0\n");
    scanf("%f%f%f", &a, &b, &c);
    //Formula para calcular a equação do segundo grau
    delta = b*b - 4*c*a;
    if(delta > 0){
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("Existem dois valores para essa equacao x1 = %.2f e x2 = %.2f\n", x1, x2);
    }else if(delta = 0){
        x = -b/(2*a);
        printf("Raiz unica x = %.2f\n", x);
    }else{
        printf("Nao existe raiz real\n");
    }
    //Pausa o programa após executar
    system("pause");
}
