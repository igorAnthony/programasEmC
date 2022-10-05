#include <stdio.h>
#include <stdlib.h>
void converteEmSegundos(int hrs, int min, int s);
int main()
{
    //variaveis
    int horas, minutos, segundos;
    //instrução
    printf("Digite um valor de horas, minutos e segundos respectivamente:");
    //le valor
    scanf("%d%d%d", &horas, &minutos, &segundos);

    converteEmSegundos(horas, minutos, segundos);

    //retorno da função
    return 0;
}
void converteEmSegundos(int hrs, int min, int s)
{
    hrs = hrs*60*60;
    min = min*60;
    printf("O horario convertido em segundos: %d\n", hrs + min + s);
}
