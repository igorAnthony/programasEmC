#include <stdio.h>
#include <stdlib.h>
#define TAM 1000
/*Ler uma sequencia de n�meros inteiros e determinar se eles s�o pares ou n�o.
Dever� ser informado o numero de dados lidos e n�mero de valores pares.
O processo termin� quando for digitado o numero 1000.*/
//Fun��o Principal
int main()
{
    //Definindo Variaveis
    int i, pares = 0, dados = 0;
    //Condicional para ler numero par e nao par
    printf("****Digite valores aleatorios para saber se e par ou nao, programa ira parar ao digitar 1000****\n\n");
    while(i < TAM || i > TAM)
    {
        scanf("%d", &i);
        if(i % 2 != 0){
            printf("numero nao par\n");
        }else{
            printf("numero par\n");
            pares++;
        }
        dados++;
    }
    printf("Numero de dados lidos:%d\nQuantidade de numeros pares lidos: %d\n", dados, pares);
    //Pausa o programa ap�s executar
    system("pause");
}
