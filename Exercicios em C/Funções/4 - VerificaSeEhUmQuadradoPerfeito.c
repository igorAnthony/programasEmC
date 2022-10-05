#include<stdio.h>
#include<math.h>
void verificaNumero(float x);
int main ()
{
    float numero;
    scanf("%f",&numero);
    verificaNumero(numero);
    return 0;
}
void verificaNumero(float x)
{
    int aux;
    aux = sqrt(x);

        if(sqrt(x) == aux)
        {
                printf("quadrado perfeito");
        }
        else{
            printf("nao e quadrado perfeito");
        }
}
