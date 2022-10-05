#include<stdio.h>
#include<stdlib.h>
void somaAlg(int numero);
int main(){
    int numero;
    scanf("%d", &numero);
    if(numero > 0)
        {
        somaAlg(numero);
        }
        else
        {
        printf("Numero invalido");
        }

}
void somaAlg(int numero)
{
  int soma;
  soma=0;

  while(numero>0)
  {
    soma+=numero%10;
    numero/=10;
  }

  printf("%d\n",soma);
}
