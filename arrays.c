#include <stdio.h>

#ifdef __linux__ 
    #include <unistd.h>
#elif _WIN32
    #include <windows.h>
#else
    #error "OS not supported!"
#endif


void FazArray(int array1[]){
    int i;

    for(i = 1; i < 11; i++){
        array1[i-1] = 10*i;
    }

   
}

void MostraArray(int array1[], int i){

    if(i == 0){
        for(i; i < 10; i++){
            printf("array[%d] = %d\n",i, array1[i]);
        }
    }else{
        for(i; i>=0; i--){
            printf("array[%d] = %d\n",i, array1[i]);
        }
    }

}

float MediaArray(int soma, float tamanho){
    return soma / tamanho ;
}

int EmArray(int array1[], int tamanho, int procurado){
    int i = 0, cont = 0;

    while(i == 0 && cont < tamanho){
        if(array1[cont] == procurado){
            i = 1;
        }

        cont++;
    }
    return i;
}

int MaximoValorArray(int array[], int tamanho){
    int max, i;

    max = array[0];

    for(i = 0; i < tamanho; i++){
        if(array[i] > max){
            max = array[i];
        }
    }

    return max;
}

int EhArrayOrdenado(int array1[], int tamanho){
    int i = 0, emOrdem = 1;


    while(emOrdem == 1 && i < tamanho){
        
        if(i > 0 && array1[i-1] > array1[i]) emOrdem = 0;

        i++;
    }

    return emOrdem;

}

int main(){
    // Questão 1;

    int array1[10];
    int i, j, soma = 0;

    FazArray(array1);

    puts("Ordem CRESCENTE:");
    MostraArray(array1, i = 0);
    puts("");

    puts("Ordem DESCRESCENTE");
    MostraArray(array1, i = 9);
    puts("");

    puts("Elemento na posicao 5: ");
    printf("array[5] = %d\n\n", array1[5]);

    puts("Elementos de indices impares: ");
    for(j = 0; j < 10; j++){
        if(j % 2 != 0){
            printf("array[%d] = %d\n", j, array1[j]);
        }
    }

    puts("");

    for(j = 0; j < 10; j++){
        soma += array1[j];
    }

    printf("Soma dos elementos do array = %d\n\n", soma);

 
    puts("Reformulando questão...");
    sleep(2.5);
    puts("");

    // Questão 2;

    for(j = 0; j < 10; j++){
        printf("Digite o elemento do array[%d]: ", j);
        scanf("%d", &array1[j]);
    }

    puts("");
    MostraArray(array1, i = 0);
    puts("");

    puts("Ordem CRESCENTE:");
    MostraArray(array1, i = 0);
    puts("");

    puts("Ordem DESCRESCENTE");
    MostraArray(array1, i = 9);
    puts("");

    puts("Elemento na posicao 5: ");
    printf("array[5] = %d\n\n", array1[5]);
    puts("");

    
    puts("Elementos de indices impares: ");
    for(j = 0; j < 10; j++){
        if(j % 2 != 0){
            printf("array[%d] = %d\n", j, array1[j]);
        }
    }

    puts("");
    
    soma = 0;
    
    for(j = 0; j < 10; j++){
        soma += array1[j];
    }

    printf("Soma dos elementos do array = %d\n\n", soma);

    // Questao 3;

    float media;

    media = MediaArray(soma, 10.0);

    printf("Media dos elementos do array = %.1f\n\n", media);

    // Questão 4;

    int procurado, find;

    printf("Digite o elemento que vc quer procurar no array: ");
    scanf("%d", &procurado);

    find = EmArray(array1, 10, procurado);

    if(find)
        printf("O elemento procurado %d esta no array.\n\n", procurado);
    else printf("O elemento procurado %d nao esta no array.\n\n", procurado);

    // Questao 5;

    int max;

    max = MaximoValorArray(array1, 10);

    printf("Valor maximo no conjunto: %d\n\n", max);

    // Questao 6;

    int ordenado;

    ordenado = EhArrayOrdenado(array1, 10);

    if(ordenado)
        puts("Array ordenado.");
    else puts("Array desordenado.");


    return 0;
}