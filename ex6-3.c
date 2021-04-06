#include <stdio.h>

int main(){
    int num1, num2;

    printf("Digite 2 numeros inteiros: ");
    scanf("%d %d", &num1, &num2);


    if(num1 < num2){
        printf("Os numero digitados foram: %d e %d", num1, num2);

    }else{
        num1 = num1 + num2 ;
        num2 = num1 - num2;
        num1 = num1 - num2;
        printf("Os numero digitados foram: %d e %d\n", num1, num2);
    }

    puts(" ");

    while (num1 <= num2){
        printf("%d\n", num1);
        num1++;
    }
    return 0;
}