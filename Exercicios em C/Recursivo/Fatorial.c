#include <stdio.h>
int calcula_fatorial(int n);//Prototipo da fun��o calcula fatorial
int main()
{
    int n = 0, fat = 0;//Declarando variaveis
    scanf("%d", &n);//Recebe valores para variavel
    fat = calcula_fatorial(n);//Chama fun��o
    printf("%d", fat);//Imprime na tela
}
int calcula_fatorial(int n)//Estrutura da fun��o
{
    if(n == 0) return 1;//Quando o x for 1, ele vai chamar fatorial de 0 que � 1
    int x;//variavei para receber a fun��o
    x = calcula_fatorial(n-1);//chama a fun��o e salva o valor em x
    return n*x;//retorno
}
