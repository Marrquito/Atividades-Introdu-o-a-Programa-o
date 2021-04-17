#include <stdio.h>

int main(){
    int num, div;

    scanf("%d", &num);


    for(div = 1; div <= num; div++){
        if(num % div == 0){
            printf("%d\n", div);
        }
    }

    return 0;
}