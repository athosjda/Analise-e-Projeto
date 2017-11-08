#include <stdio.h>
#include <stdlib.h>

int solidezI(int A[], int p, int r);
int solidezIII(int A[], int p, int r);

int main(){
    int A[] = {20, -30, 15, -10, 30, -20, -30, 30};
    printf("SolidezI : %d\n", solidezI(A, 0, 7));
    printf("SolidezI : %d\n", solidezIII(A, 0, 7));
    return 0;
}

int solidezI(int A[], int p, int r){
    int x = A[r];
    for(int q = r; q >= p; q--){
        int s = 0;
        for(int j = q; j < r; j++){
            s = s + A[j];
            if(s > x){
                x = s;
            }
        }
    }
    return x;
}

int solidezIII(int A[], int p, int r){
    int F[r];
    F[p] = A[p];
    for(int q = p+1; q < r; q++){
        if(F[q-1] > 0){
            F[q] = F[q-1]+A[q];
        }else{
            F[q] = A[q];
        }
    }
    int x = F[p];
    for(int q = p+1; q < r; q++){
        if(F[q] > x){
            x = F[q];
        }
    }
    return x;
}