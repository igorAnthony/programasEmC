#include <stdio.h>
#include <stdlib.h>
//Programa que calcula a conversão de real para dollar

//Função Principal
int main()
{
    //Definindo variaveis
    float D = 0, R = 0;
    int T;
    //Pede para o usuario o que ele deseja calcula
    printf("***Conversor de Moeda***\n");
    printf("Qual tipo de conversão vc deseja calcular:\n0 - Real para Dolar\n1 - Dolar para Real\n");
    scanf("%d", &T);
    //Condição se quer converter para dolar/real ou real/dolar
    if(T == 0)
    {
        printf("Digite o valor em Real: R$");
        scanf("%f", &R);
        D = R*3.96;
        printf("O valor em Dolar: $%.2f\n\n", D);

    }else{
        printf("Digite o valor em Dolar: $");
        scanf("%f", &D);
        R = (D)/3.96;
        printf("O valor em Real: R$%.2f\n\n", R);
    }
    //Pausa o programa após executar
    system("pause");
}
