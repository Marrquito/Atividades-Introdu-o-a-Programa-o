#include <stdio.h>

int main(){
    int a, maior, menor, i;
    
    a = 1;
    i = 1;
    
    while ( a != 0 ){
        if(i == 1){
            scanf("%d", &a);
            maior = a;
            menor = a;
        }else {
            scanf("%d", &a);
            if( a > maior && a != 0 ){
                maior = a;
            }
            if (a < menor && a != 0 ){
                menor = a;
            }
        }
        i++;
    }
    printf("Maior numero digitado: %d\n", maior);
    printf("Menor numero digitado: %d\n", menor);

    return 0;
}