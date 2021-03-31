#include <stdio.h>

int main(){
    int a, b;

    printf("Digite dois valores: ");
    scanf("%d %d",&a, &b);
    printf("Os valores digitados foram: a = %d e b = %d\n", a, b);


    a = a + b;
    b = a - b;
    a = a - b;

    printf("Os novos valores sao: a = %d  b = %d", a, b);

    return 0;
}