#include <stdio.h>

int main(){
    int num, cont;
    float media;
    
    scanf("%d", &num);

    cont = 1;
    media = num;

    
    while(num >= 0){
        scanf("%d", &num);
        cont++;
        media = media + num;
    }

    printf("%.2f\n", (media - num) / (cont -1));


    return 0;
}