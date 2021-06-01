#include <stdio.h>

void CheckRepetidas(int ar[], int *repetidas, int freq, int quest){
    int i;
    for(i = 0; i < quest; i++){
        if(ar[i] >= freq){
            *repetidas += 1;
        }
    }
}

int main(){
    int perguntas, freq, answ;
    int i, repetidas = 0;

    scanf("%d %d", &perguntas, &freq);

    while(perguntas && freq){
        int perg[1001] = { 0 };
        int igual;
        
        for(i = 0; i < perguntas; i++){
            scanf("%d", &answ);
            perg[answ - 1]++;
        }
        
        CheckRepetidas(perg, &repetidas, freq, perguntas);

        printf("%d\n", repetidas);
        repetidas = 0;
        scanf("%d %d", &perguntas, &freq);
    }

    return 0;
}