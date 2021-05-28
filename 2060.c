#include <stdio.h>

int EhMultiplo2(int numbers[], int tamanho){
    int cont = 0, i;

    for(i = 0; i < tamanho; i++){
        if(numbers[i] % 2 == 0) cont++;
    }

    return cont;
}

int EhMultiplo3(int numbers[], int tamanho){
    int cont = 0, i;

    for(i = 0; i < tamanho; i++){
        if(numbers[i] % 3 == 0) cont++;
    }

    return cont;
}

int EhMultiplo4(int numbers[], int tamanho){
    int cont = 0, i;

    for(i = 0; i < tamanho; i++){
        if(numbers[i] % 4 == 0) cont++;
    }

    return cont;
}

int EhMultiplo5(int numbers[], int tamanho){
    int cont = 0, i;

    for(i = 0; i < tamanho; i++){
        if(numbers[i] % 5 == 0) cont++;
    }

    return cont;
}



int main(){
    int qtdNumbers;
    int multiplos, i;

    scanf("%d", &qtdNumbers);

    int numbers[qtdNumbers];

    for(i = 0; i < qtdNumbers; i++){
        scanf("%d", &numbers[i]);
    }

    printf("%d Multiplo(s) de 2\n", EhMultiplo2(numbers, qtdNumbers));
    printf("%d Multiplo(s) de 3\n", EhMultiplo3(numbers, qtdNumbers));
    printf("%d Multiplo(s) de 4\n", EhMultiplo4(numbers, qtdNumbers));
    printf("%d Multiplo(s) de 5\n", EhMultiplo5(numbers, qtdNumbers));

    return 0;
}