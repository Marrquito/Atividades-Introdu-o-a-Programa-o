#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int comp(const void *p1, const void *p2){
    return strcmp(p1, p2);
}

int main(){
    int testes, i;
    char cod[1000][5];

    while(scanf("%d", &testes) != EOF){

        for(i = 0; i < testes; i++){
            scanf("%s", cod[i]);
        }

        qsort(cod, testes, 5, comp);

        for(i = 0; i < testes; i++){
            printf("%s\n", cod[i]);
        } 
    }

    return 0;
}