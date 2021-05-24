#include <stdio.h>

unsigned long long FatM(int m){
    unsigned long long i;

    for(i = 1; m > 1; m--){
        i = i * m;
    }

    return i;
}

unsigned long long FatN(int n){
    unsigned long long i;

    for(i = 1; n > 1; n--){
        i = i * n;
    }

    return i;
}


int main(){
    int  m, n;
    unsigned long long somaM, somaN;

    while(scanf("%d %d", &m, &n) != EOF){

        somaM = FatM(m);
        somaN = FatN(n);
        
        printf("%llu\n", somaM+somaN);

    }

    return 0;
}