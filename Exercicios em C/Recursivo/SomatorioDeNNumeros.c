#include <stdio.h>
int calcula_somatorio(int n);//Função para calcular o somatorio
int main()
{
    //declaração de variaveis
    int n = 0, soma = 0;
    scanf("%d", &n);//recebe valores para variavel
    soma = calcula_somatorio(n);//variavel soma recebe o resultado da função
    printf("%d", soma);//imprime na tela
}
int calcula_somatorio(int n)
{
    if(n == 1) return 1;
    int soma;
    soma = calcula_somatorio(n - 1);
    return soma + n;
}
n calcula_somatorio soma
10       9              55
9         8             45
8           7           36
7           6           28
6           5           21
5           4           15
4           3           10
3           2          6
2           1          3
1                      1
