#include <stdio.h>

int main(){
    int a, b;

    printf("----------------------------------------\n");
    printf("                 MENOR                  \n");
    printf("----------------------------------------\n");


    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);
    printf("Os numeros digitados foram: a = %d e b = %d\n", a, b);

    if( a < b ) { 
        printf("%d eh o menor \n", a);

    }else{
        printf("%d eh o menor \n", b);

    }

    return 0;
}