#include <stdio.h>

unsigned long long Fibo(int n){
    unsigned long long int fib[62];
    int i, j;
 

    fib[0] = 0;
    fib[1] = 1;
        

    for(i = 2, j = 0; j < n; i++, j++  ){
        fib[i] = fib[i-1] + fib[i-2];
    } 

    return fib[n];
}

int main(){
    int t, n;
    unsigned long long int fib[62];

    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        
        fib[n] = Fibo(n);

        printf("Fib(%d) = %lld\n", n, fib[n]);
        
    }

    return 0;
}