#include <stdio.h>

typedef unsigned long long int llu;

int main(){
    llu p;

    while(1){
        scanf("%llu", &p);
        if(p == -1) return 0;

        if(p == 0) puts("0");

        if(p > 0) printf("%llu\n", p-1);
    }

    return 0;
}