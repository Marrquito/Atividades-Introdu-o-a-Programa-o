#include <stdio.h>

int main(){
    int x, i;

    scanf("%d", &x);

    if(x % 2 == 0){
        x -= 1;
    }

    for(i = 1; i <= x; i+=2){
        printf("%d\n", i);
    }

    return 0;
}