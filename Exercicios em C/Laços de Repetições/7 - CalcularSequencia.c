#include <stdio.h>
#include <stdlib.h>
/*Faca programas para calcular as seguintes sequencias:
1 + 2 + 3 + 4 + 5 ... n
1 + 3 + 5 + 7  ... (2n - 1)*/
//Função Principal
int main()
{
    //Definindo Variaveis
    int i, N = 0, soma = 0;
    printf("Digite um valor para calcular a sequencia ate ele: ");
    scanf("%d", &N);
    //Laço de repetição para ocorrer sequencia
    printf("A sequencia:");
    for(i = 0; i < N; i++){
        soma += i;
        printf(" %d", i);
        }
    printf("\nA soma da sequencia: %d\n", soma);
    //Pausa o programa após executar
    system("pause");
}
