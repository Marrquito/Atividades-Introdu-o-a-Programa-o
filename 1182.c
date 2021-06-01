#include <stdio.h>
#include <ctype.h>

float Calcula(float matriz[][12], int columns, int coluna, char op){
    int i;
    float soma = 0;

    if(op == 'S'){
        for(i = 0; i < columns; i++){
            soma += matriz[i][coluna];
        }

        return soma;
    }else{
        for(i = 0; i < columns; i++){
            soma += matriz[i][coluna];
        }

        return soma / columns;
    }
}

int main(){
    float matriz[12][12];
    int coluna, i, j;
    char op;

    scanf("%d%*c", &coluna);
    op = getchar();
    toupper(op);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("%.1f\n", Calcula(matriz, 12, coluna, op));

    return 0;
}