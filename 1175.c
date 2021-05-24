#include <stdio.h>

int main(){
    int i, j, vet[20], cobaia;

    for(i = 0; i < 20; i++){
        scanf("%d", &vet[i]);
    }

    for(i = 0, j = 19; i < 11, j >= 10; i++, j--){
        cobaia = vet[i];
        vet[i] = vet[j];
        vet[j] = cobaia;
    }

    for(i = 0; i < 20; i++){
        printf("N[%d] = %d\n", i, vet[i]);
    }

    return 0;
}