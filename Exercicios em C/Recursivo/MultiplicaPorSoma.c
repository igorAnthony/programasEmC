#include <stdio.h>
int MultipRec(int n1, int n2);
int main(){
    int n1, n2, result;
    scanf("%d%d", &n1, &n2);
    result = MultipRec(n1,n2);
    printf("%d", result);
}
int MultipRec(int n1, int n2){
    if(n2 == 1) return n1;
    int x;
    x = MultipRec(n1, n2 - 1);
    return n1 + x;
}
