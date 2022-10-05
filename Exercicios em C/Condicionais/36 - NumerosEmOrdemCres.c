#include <stdio.h>
#include <stdlib.h>
//Faca um programa que receba tres numeros e mostre-os em ordem crescente
//Função Principal
int main()
{
    float num1 = 0, num2 = 0, num3 = 0, aux = 0;
    printf("Insira 3 numeros diferentes para organizar em ordem crescente:\n");
    scanf("%f%f%f", &num1, &num2, &num3);
    if(num1 > num2){
        aux = num2;
        num2 = num1;
        num1 = aux;
    }if(num1 > num3){
        aux = num3;
        num3 = num1;
        num1 = aux;
    }if(num2 > num3){
        aux = num3;
        num3 = num2;
        num2 = aux;
    }
    printf("%.2f < %.2f < %.2f\n", num1, num2, num3);
    //Pausa o progrma após executar
    system("pause");
}
