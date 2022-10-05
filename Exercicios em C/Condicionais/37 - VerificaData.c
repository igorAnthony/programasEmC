#include <stdio.h>
#include <stdlib.h>
/*Leia uma data e determine se ela é valida. Ou seja, verifique se o mes esta entre 1 e 12,
e se o dia existe naquele mes. Note que Fevereiro tem 29 dias em anos bissextos, e é 28
dias em anos nao bissextos. */
//Função Principal
int main()
{
    //Definindo variaveis
    int dia = 0, mes = 0, ano = 0;
    printf("****Programa para verificar se a data e valida****\n");
    printf("Entre com uma data qualquer coloque dia, mes e ano respectivamente:");
    scanf("%d%d%d", &dia, &mes, &ano);
    if(dia <= 31){
        if(mes <= 12){
            if(mes == 2){
                if(ano % 4 == 0){
                    if(dia > 28){
                        printf("dia invalido ano bissexto so tem 28 dias\n");
                    }else{
                    printf("data existe\n");
                    }
                }if(dia > 29){
                printf("mes de fevereiro so tem 29 dias em anos nao bissexto\n");
                }else{
                    printf("data existe\n");
                }
            }else{
                printf("data existe!!!\n");
            }
        }else{
            printf("mes nao existe");
        }
    }else{
        printf("dia nao existe\n");
    }
    //Pausa o programa após executar
    system("pause");
}
