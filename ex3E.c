#include <stdio.h>

int main(){
    int valor;

    printf("----------------------------------------\n");
    printf("                CEDULAS                 \n");
    printf("----------------------------------------\n");


    printf("Digite um valor em R$: ");
    scanf("%d", &valor);

    printf("R$%d,00\n", valor);

    printf("%d nota(s) de R$ 100,00\n", valor / 100);
    valor = valor % 100;
    printf("%d nota(s) de R$ 50,00\n", valor / 50);
    valor = valor % 50;
    printf("%d nota(s) de R$ 20,00\n", valor / 20);
    valor = valor % 20;
    printf("%d nota(s) de R$ 10,00\n", valor / 10);
    valor = valor % 10;
    printf("%d nota(s) de R$ 5,00\n", valor / 5);
    valor = valor % 5;
    printf("%d nota(s) de R$ 2,00\n", valor / 2);
    valor = valor % 2;
    printf("%d nota(s) de R$ 1,00\n", valor / 1);
    valor = valor % 1;
    
    
    return 0;
}