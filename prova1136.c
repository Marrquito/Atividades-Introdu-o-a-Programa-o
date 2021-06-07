#include <stdio.h>

void MaiorMenor(int ar[], int size, int n, int *min, int *max){ 
    //parametro size indica o tamanho do vetor que, mesmo sem ser usado na função, deve ser passsado para que a torne o mais generico possivel.
    // parametros *min e *max como ponteiros para mudar o valor das variaveis diretamente.
    int i;

    for(i = 0; i < n; i++){ // laço for para varrer o array e encontrar o max e min
        if(ar[i] > *max){ // caso o valor do array na posição i seja maior do que o maior valor:
            *max = ar[i]; // *max passa a valer esse valor
        }else if(ar[i] < *min){ // caso o valor do array na posição i seja menor do que o menor valor:
            *min = ar[i]; // *min passa a valer esse valor
        }
    }
}

int main(void){
    int ar[100];
    int n, i, min, max;

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }

    min = max = ar[0]; // max e min começam com o mesmo valor para que não recebam o lixo de memória e facilite na comparação 

    MaiorMenor(ar, 100, n, &min, &max); // passando o array, tamanho do array, numero de elementos usados, variável para min e max para a função
    
    printf("%d %d\n", min, max); // print dos resultados

    return 0;
}