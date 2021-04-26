#include <stdio.h>

int main(){
    int t, max, n, peso, i, viagens, soma;
    scanf("%d", &t);

    while(t--){
        scanf("%d %d", &n ,&max); // n = qtd present entregue // max = peso maximo da viagem

        scanf("%d", &peso);
        while(soma <= max) {
            soma += peso;
        }
        if( soma % max == 0){
            puts("1");
        }else{
            while(peso % max != 0){
                viagens++;
            }
            printf("%d", viagens);
        }
    }

    return 0;
}