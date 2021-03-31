#include <stdio.h>

int main(){
    int a, b, c, maior;


    printf("----------------------------------------\n");
    printf("               MAIOR DE 3               \n");
    printf("----------------------------------------\n");

    printf("Digite 3 valores: ");
    scanf("%d %d %d", &a, &b, &c);

    maior = a;

    if(maior < b){
        maior = b;
    }
    if(maior < c){
        maior = c;
    }
    
    printf("%d eh maior", maior);
    return 0;

}