#include <stdio.h>
#include <stdlib.h>

int somaLin(int *vet, int n){

    if(n==1){
        return vet[0];
    }
    else{
        return vet[n-1] + somaLin(vet, n-1);
    }
}

int main(){

    int *vet;
    int n = 5;

    vet = (int*)malloc(sizeof(int)*n);

    for(int i = 0; i < n; i++){
        vet[i] = rand() % 10;
        printf("%d ", vet[i]);
    }

    printf("\n%d\n", somaLin(vet,n));
    return 0;
}