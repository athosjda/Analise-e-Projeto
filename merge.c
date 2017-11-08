#include<stdlib.h>
#include<stdio.h>
 
void mergeSort(int vet[], int n);
void merge(int vet[], int l, int m, int r);
void printVet(int vet[], int t);
 
int min(int x, int y){ 
    return (x<y)?x:y;
}

int main(){
    int vet[] = {5, 4, 3, 2, 1, 0};
    int n = sizeof(vet)/sizeof(vet[0]);
 
    printf("Vetor não Ordenado\n");
    printVet(vet, n);

    mergeSort(vet, n);
 
    printf("Vetor não Ordenado\n");
    printVet(vet, n);
    return 0;
}
 
void mergeSort(int vet[], int n){
   for(int i = 1; i <= n-1; i = 2*i){
       for(int j = 0; j < n-1; j += 2*i){
           int meio = j + i - 1; 
           int fim = min(j + 2*i - 1, n-1);
           merge(vet, j, meio, fim);
       }
   }
}
 
void merge(int vet[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    int E[n1], D[n2];
 
    for(i = 0; i < n1; i++){
        E[i] = vet[l + i];
    }
        for(j = 0; j < n2; j++){
        D[j] = vet[m + 1+ j];
    }
 
    i = 0;
    j = 0;
    k = l;
    while(i < n1 && j < n2){
        if(E[i] <= D[j]){
            vet[k] = E[i];
            i++;
        }else{
            vet[k] = D[j];
            j++;
        }
        k++;
    }
 
    while(i < n1){
        vet[k] = E[i];
        i++;
        k++;
    }
 
    while(j < n2){
        vet[k] = D[j];
        j++;
        k++;
    }
}

void printVet(int vet[], int t){
    for(int i=0; i < t; i++)
        printf("%d ", vet[i]);
    printf("\n");
}