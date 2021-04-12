#include <stdio.h>

int main(){
    int i, qtd, num;
    
    scanf("%d", &qtd);
    
    for(i = 0; i != qtd; i++){
        scanf("%d", &num);
        if( num == 0){
            puts("NULL");
        }else if(num > 0){
            if(num % 2 == 0){
                puts("EVEN POSITIVE");
            }else puts("ODD POSITIVE");
        }else if(num < 0 && num%2 == 0 ){
            puts("EVEN NEGATIVE");
        }else puts("ODD NEGATIVE");
    }
    return 0;
}