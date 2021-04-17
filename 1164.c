#include <stdio.h>

int main(){
    int num, i = 1, cont, j, tent;

    scanf("%d", &tent);

    while(i <= tent){
        cont = 0;
        scanf("%d", &num);
        for(j = 1; j < num; j++){
            if(num % j == 0){
                cont+= j;
            }
        }
        if(cont == num){
            printf("%d eh perfeito\n", num);
        }else printf("%d nao eh perfeito\n", num);
        i++;
    }  
    return 0;
}