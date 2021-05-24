#include <stdio.h>

int main(){
    int n, i, posicao = 0;

    scanf("%d", &n);
    
    int vet[n];

    for(i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }

    int menor = vet[0];

    for(i = 0; i < n; i++){
        if(vet[i] < menor){
            menor =vet[i];
            posicao = i;

        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

    return 0;
}