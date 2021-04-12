#include <stdio.h>

int main(){
    int i, num, qtd, c0, c1;

    scanf("%d", &qtd);

    c0 = c1 = 0;

    for(i = 0; i != qtd; i++){
        scanf("%d", &num);
        if( 10 <= num  && num <= 20){
            c1++;
        }else c0++;
    }

    printf("%d in\n", c1);
    printf("%d out\n", c0);

    return 0;
}