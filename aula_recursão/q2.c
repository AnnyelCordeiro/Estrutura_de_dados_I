#include <stdio.h>

int fat(int n){

    if (n == 0)
    {
        return 1;
    }else{
        printf("%d ", n);
        return n * fat(n - 1);
    }

}

int main(){

    printf("\n%d\n", fat(5));
}