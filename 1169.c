#include <stdio.h>

#define KILO_GRAO 12000


int main(){
    int n;

    scanf("%d", &n);

    while(n--){
        int x, i;

        scanf("%d", &x);

        if(x < 11){
            puts("0 kg");
        }else{
            unsigned long long ar[x], soma = 1;
            ar[0] = 1;
            for(i = 1; i < x; i++){
                ar[i] = ar[i-1] * 2;
                soma += ar[i];
            }
            soma /= KILO_GRAO;
            printf("%llu kg\n", soma);
        }              

    }

    return 0;
}