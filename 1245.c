#include <stdio.h>


int main(){
    int qtdPares, i, j;

    while( scanf("%d", &qtdPares) != EOF ){
        int tamanho[qtdPares], cont = 0;
        char lado[qtdPares];
        
        
        for(i = 0; i < qtdPares; i++){
            scanf("%d %c", &tamanho[i], &lado[i]);
        }


        for(i = 0; i < qtdPares; i++){
            for(j = i+1; j < qtdPares; j++){
                if(tamanho[i] != -1 && tamanho[j] != -1){
                    if(tamanho[i] == tamanho[j] && lado[i] != lado[j]){
                        tamanho[i] = tamanho[j] = -1;
                        cont++;
                    }
                }
            }
        }

        printf("%d\n", cont);
    }

    return 0;
}