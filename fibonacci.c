#include <stdio.h>

int fibonacci(int vet[]){
    for(int i = 2; i < 47; i++){
        vet[i] = vet[i-1]+vet[i-2];
    }
}

int main(){
    int vet[47], n;
    vet[0] = 0;
    vet[1] = 1;
    fibonacci(vet);
    scanf("%d", &n);   
    return 0;
}