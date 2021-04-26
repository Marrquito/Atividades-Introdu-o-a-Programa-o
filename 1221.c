#include <stdio.h>
#include <math.h>

int main(){
    unsigned long long int  x;
    int n, cont, i;

    scanf("%d", &n);

    while(n--){
        scanf("%llu", &x);
        cont = 0;
        if(x == 0 || x == 1){
            puts("Not Prime");
            continue;
        }
        if(x == 2){
            puts("Prime");
            continue;
        }
        for(i = 2; i <= sqrt(x); i++){
            if(x % i == 0) cont++;
            if(cont == 2) break;
        }
        if(cont >= 1){
            puts("Not Prime");
        }else puts("Prime");

    }

    return 0;
}