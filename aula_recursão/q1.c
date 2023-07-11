#include <stdio.h>

int multiplica_adicao(int n, int m){

    if (n == 0 || m == 0){
        return 0;

    return m + multiplica_adicao(n-1, m);
    }
}

int main(){

    int n = multiplica_adicao(3,5);
    printf("%d ", multiplica_adicao(3,5));
    
    return 0;
}