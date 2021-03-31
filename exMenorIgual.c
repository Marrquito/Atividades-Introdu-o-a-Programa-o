#include <stdio.h>

int main(){
    int a, b;


    printf("----------------------------------------\n");
    printf("              MENOR IGUAL               \n");
    printf("----------------------------------------\n");


    printf("Digite dois numero inteiros: ");
    scanf("%d %d", &a, &b);

    if(a == b){
        printf("Os numero sao iguais! \n");
    }else{
        if(a > b){
            printf("%d eh maior que %d \n", a, b);
        }else{
            printf("%d eh maior que %d \n", b, a);
        }
    }

    return 0;
}