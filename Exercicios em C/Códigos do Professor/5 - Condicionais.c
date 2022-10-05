#include <stdio.h>
#include <stdlib.h>
//Função principal do programa
int main()
{
    //Definindo as variaveis e os valores
    int a = 5, opcao = 11;
    float b = 2.5;
    char c = 'x';
    //Condicionais Simples
    if(a==9)
    {
        printf("\nA variavel a = %d\n", a);
    }
    if(b==2.5)
    {
        printf("\nA variavel b = %.2f\n", b);
    }
    if(c=='x')
    {
        printf("\nA variavel c = letra %c\n", c);
    }
    //Condicionais Compostas(Par ou impar)
    if(a%2==1)
    {
        printf("\nO valor de a eh impar!!!\n");
    }
        else
        {
        printf("\nO valor de a eh par!!!\n");
        }
     //Verificar com else if
     if(opcao == 1)
     {
         printf("\nopcao eh igual a %d\n", opcao);
     }
     else if(opcao > 1 && opcao < 10)
     {
         printf("\nopcao = %d eh maior que 1 e menor que 10\n", opcao);
     }
        else
        {
         printf("\nopcao nao eh um numero 1 e nem esta entre 1 e 10\n");
        }
     //pausa o programa após executar
     system("pause");
}
