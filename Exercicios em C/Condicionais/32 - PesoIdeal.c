#include <stdio.h>
#include <stdlib.h>
//Programa que calcula o peso ideal recebedendo a altura ideal e o sexo, homem 72.7*h - 58 mulher 62.1*h - 44.7
//Função Principal
int main()
{
    //Definindo variaveis
    float altura = 0, pesoideal = 0;
    int sexo = 0;
    printf("****Programa para saber seu peso ideal****\n\n");
    printf("Qual sexo vc e?\n");
    printf("Sexo masculino digite 0\nSexo Feminino digite 1\n");
    scanf("%d", &sexo);
    printf("Digite sua altura em metros:");
    scanf("%f", &altura);
    //Limpa a tela
    system("cls");
    if(sexo == 0){
        pesoideal = 72.7*altura - 58;
        printf("O peso ideal para o sexo masculino nessa altura = %.2f\n\n", pesoideal);
    }else{
        pesoideal = 62.1*altura - 44.7;
        printf("O peso ideal para o sexo feminino nessa altura = %.2f\n\n", pesoideal);
    }
    system("pause");
}
