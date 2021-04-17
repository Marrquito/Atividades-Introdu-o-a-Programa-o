#include <stdio.h>

int main(){
    int num, maior, posi = 0, i;
    
    scanf("%d", &num);
    
    maior = num;

    for(i = 1; i != 100; i++){
        scanf("%d", &num);
        if(num > maior){
            maior = num;
            posi = i+1;
        }
    }

    printf("%d\n", maior);
    printf("%d\n", posi);
    
    return 0;
}