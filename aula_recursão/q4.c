#include <stdio.h>

int fibonacci(int n){

    if(n == 0 || n == 1){
        return n;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){

    for (int i = 0; i < 30; i++)
    {
        int x = fibonacci(i);
        printf("%d  ", x);
        //printf("%d\n", fibonacci(5));
    }
    printf("\n");
    

}