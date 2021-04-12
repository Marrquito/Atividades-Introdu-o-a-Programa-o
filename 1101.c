#include <stdio.h>

int main(){
    int a, b, i, soma;

    scanf("%d %d", &a, &b);
    
    soma = 0;
    while(a > 0 && b > 0 ){
        if( a > b ){
            a = a;
            b = b;
        }else{
            a = a + b;
            b = a - b;
            a = a - b;
        }
        
        for(i = b; i <= a; i++){
            soma += i;
            printf("%d ", i);
        }
        printf("Sum=%d\n", soma);
        scanf("%d %d", &a, &b);
        soma = 0;
    }

    return 0;
}