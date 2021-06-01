#include <stdio.h>
#include <ctype.h>

float Calcula(float matriz[][12], int columns, int linha, char op){
    int j;
    float soma = 0;

    if(op == 'S'){
        for(j = 0; j < columns; j++){
            soma += matriz[linha][j];
        }

        return soma;
    }else{
        for(j = 0; j < columns; j++){
            soma += matriz[linha][j];
        }

        return soma / columns;
    }
}

int main(){
    float matriz[12][12];
    int linha, i, j;
    char op;

    scanf("%d%*c", &linha);
    op = getchar();
    toupper(op);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("%.1f\n", Calcula(matriz, 12, linha, op));

    return 0;
}