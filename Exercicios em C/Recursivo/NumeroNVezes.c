#include <stdio.h>
int eleva_numero(int k, int n);
int main(){
    int k = 0, n = 0, result;
    scanf("%d%d", &k ,&n);
    result = eleva_numero(k, n);
    printf("%d", result);}
int eleva_numero(int k, int n){
    if(n==0) return 1;
    int x;
    x = eleva_numero(k, n-1);
    return k*x;}
