#include <stdio.h>

int main(){
    int a, b, cobaia;

    printf("----------------------------------------\n");
    printf("                PERMUTA                 \n");
    printf("----------------------------------------\n");

    printf("Digite um valor: ");
    scanf("%d", &a);
    printf("Digite outro valor: ");
    scanf("%d", &b);

    printf("Os valores digitados foram: a = %d e b = %d\n", a, b);

    cobaia = a;
    a = b;
    b = cobaia;


    printf("Os novos valores sao: a = %d e b = %d\n", a, b);


    return 0;
}