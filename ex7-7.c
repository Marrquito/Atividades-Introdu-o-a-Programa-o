#include <stdio.h>

int main(){
    int num, i, cont;

    scanf("%d", &num);
    
    cont = 0;
    for(i = 1; i <= num; i++){
        if(num % i == 0){
            cont++;
        }
    }

    if(cont == 2){
        printf("eh primo!\n");
    }else printf("n eh primo!\n");

    return 0;
}