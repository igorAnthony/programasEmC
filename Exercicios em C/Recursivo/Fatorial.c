#include <stdio.h>
int calcula_fatorial(int n);//Prototipo da função calcula fatorial
int main()
{
    int n = 0, fat = 0;//Declarando variaveis
    scanf("%d", &n);//Recebe valores para variavel
    fat = calcula_fatorial(n);//Chama função
    printf("%d", fat);//Imprime na tela
}
int calcula_fatorial(int n)//Estrutura da função
{
    if(n == 0) return 1;//Quando o x for 1, ele vai chamar fatorial de 0 que é 1
    int x;//variavei para receber a função
    x = calcula_fatorial(n-1);//chama a função e salva o valor em x
    return n*x;//retorno
}
