#include <stdio.h>

int main(){
    unsigned long int num, test, i = 1, cont, j;

    scanf("%ld", &test);

    while(i <= test){
        scanf("%d", &num);

        cont = 0;
        for(j = 1; j <= num; j++){
            if(num % j == 0){
                cont++;
            }
        }

        if(cont == 2){
            printf("%ld eh primo\n", num);
        }else printf("%ld nao eh primo\n", num);
        i++;
    }

    return 0;
}