#include <stdio.h>
#include <stdlib.h>
//Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana correspondente a este numero. Isto e, domingo se ´ 1, segunda-feira se 2, e  assim por diante
//Função Principal
int main()
{
    int dia = 0;

    printf("Que dia vc quer saber entre um numero de 1 a 7?");
    scanf("%d", &dia);
    switch(dia){
case 1:
    printf("Domingo!\n");
    break;
case 2:
    printf("Segunda-Feira!\n");
    break;
case 3:
    printf("Terca-Feira!\n");
    break;
case 4:
    printf("Quarta-Feira!\n");
    break;
case 5:
    printf("Quinta-Feira!\n");
    break;
case 6:
    printf("Sexta-Feira!\n");
    break;
case 7:
    printf("Sabado!\n");
    break;
    }
//Pausa o programa após executar
system("pause");
}
