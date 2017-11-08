#include <stdio.h>

int busca(int vet[], int ini, int fim, int valor){
    int pos = (ini+fim)/2;
    if(vet[pos] == valor){
        return pos;
    }else if(vet[pos] < valor){
        return busca(vet, pos+1, fim, valor);
    }else if(vet[pos] > valor){
        return busca(vet, ini, pos-1, valor);
    }else{
        return -1;
    }
}

int main(){
    int vet[5] = {1, 2, 3, 4, 5};
    printf("%d\n", busca(vet, 0, 4, 5));
    return 0;
}