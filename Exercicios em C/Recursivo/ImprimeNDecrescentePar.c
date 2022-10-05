#include <stdio.h>
void imprime_decrescente(int n);
int main(){
    int n;
    scanf("%d", &n);
    imprime_decrescente(n);
}
void imprime_decrescente(int n){
    if(n%2==0)
    printf("%d ", n);
    if(n > 0)
    imprime_decrescente(n-1);}

