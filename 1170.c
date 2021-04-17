#include <stdio.h>

int main(){
    int n, dias, i = 0;
    float qtd;

    scanf("%d", &n);

    for(i; i < n; i++){
        scanf("%f", &qtd);
        dias = 0;

        while(qtd > 1){
            qtd /= 2;
            dias++;
        }

        printf("%d dias\n", dias);
    }

    return 0;
}