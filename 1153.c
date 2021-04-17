#include <stdio.h>

int main(){
    int num, i = 1;

    scanf("%d", &num);

    for(i; num > 1; num--){
        i = i * num;
    }
    
    printf("%d\n", i);
    
    return 0;
}