#include <stdio.h>

int main(){
    int x, i = 1;

    scanf("%d", &x);

    while(x != 0){
        for(i; i <= x; i++){
            if(i != x){
                printf("%d ", i);
            }else printf("%d\n", i);
        }
        scanf("%d", &x);
        i = 1;
    }

    return 0;
}