#include <stdio.h>

int main(){
    unsigned long long int soma = 0, a, b;

    scanf("%llu %llu",&a, &b);

    soma = ((a + b) * (b - a + 1)) / 2;
    
    printf("%llu\n", soma);

    return 0;
}