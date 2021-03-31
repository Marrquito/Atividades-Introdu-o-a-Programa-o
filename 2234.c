#include <stdio.h>

int main(){
    int h, p;
    float media;

    scanf("%d %d", &h, &p);

    media = 1.0*h / p;

    printf("%.2f\n", media);

    return 0;
}