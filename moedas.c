#include <stdio.h>

int main(){
    int n, i, d;
    int dinheiro;
    printf("Quantia a ser dada em moedas.\n");
    printf(">>> ");
    scanf("%d", &d);
    dinheiro = (int)d*100.00;
    printf("Quantidade de diferentes tipos de moeda em ordem crescente.\n");
    printf(">>> ");
    scanf("%d", &n);
    int vet[n];
    int vetMoedas[n];
    for(i = 0; i < n; i++){
        printf("%d moeda\n", i+1);
        printf(">>> ");
        scanf("%d", &vet[i]);
    }
    i--;
    while(i >= 0){
        vetMoedas[i] = dinheiro/vet[i];
        dinheiro = dinheiro%vet[i];
        i--;
    }
    for(i = 0; i < n; i++){
        printf("Moedas de %d: %d\n", vet[i], vetMoedas[i]);
    }
    return 0;
}