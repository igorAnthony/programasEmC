#include <stdio.h>
void imprime_crescente(int n);
int main(){
    int n;
    scanf("%d", &n);
    imprime_crescente(n);
}
void imprime_crescente(int n){
    if(n>0)
    imprime_crescente(n-1);
    if(n%2==0)
    printf("%d ", n);
}
