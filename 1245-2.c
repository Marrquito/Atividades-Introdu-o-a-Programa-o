#include <stdio.h>

struct sapato{
    int tamanho;
    char lado;
};

typedef struct sapato Sapato;

int main(){
    int qtdPares, i, j;

    while(scanf("%d", &qtdPares) != EOF){
        int cont = 0;

        Sapato sapatos[qtdPares];

        for(i = 0; i < qtdPares; i++){
            scanf("%d %c", &sapatos[i].tamanho, &sapatos[i].lado);
        }


        for(i = 0; i < qtdPares; i++){
            for(j = i+1; j < qtdPares; j++){
                if(sapatos[i].tamanho != -1 && sapatos[j].tamanho != -1){
                    if(sapatos[i].tamanho == sapatos[j].tamanho && sapatos[i].lado != sapatos[j].lado){
                        sapatos[i].tamanho = sapatos[j].tamanho = -1;
                        cont++;
                    }
                }
            }
        }

        printf("%d\n", cont);
    }

    return 0;
}