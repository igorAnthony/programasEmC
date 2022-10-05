int menor_valor(int *vet, int tamanho);
int main()
{
    int menor, vet[5] = {4,7,2,3,5};
    menor = menor_valor(vet, 5);
    printf("%d", menor);
}
int menor_valor(int *vet, int tamanho)
{
    if(tamanho<= 0) return vet[0];
    int x;
    x = menor_valor(vet,tamanho - 1);
    return vet[tamanho] < x ? vet[tamanho]:x;
}
