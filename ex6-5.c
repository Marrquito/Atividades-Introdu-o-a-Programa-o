#include <stdio.h>

int main(){
    int a, maior, menor;
    
    a = 1;
    maior = 0;
    menor = 10000000;
    while ( a != 0 ){
        scanf("%d", &a);
        if( a > maior && a != 0 ){
            maior = a;
        }
        if (a < menor && a != 0 ){
            menor = a;
        }
    }
    printf("Maior numero digitado: %d\n", maior);
    printf("Menor numero digitado: %d\n", menor);

    return 0;
}