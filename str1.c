#include <stdio.h>
#include <string.h>

/* int Comprimento(const char *str){

    return strlen(str);

} */

int Comprimento(const char *str){
    int tamanho = 0;

    while(str[tamanho] != '\0'){
        tamanho++;
    }

    return tamanho;
}


int main(){
    const char *str = "Marquito";
    int retornei;

    retornei = Comprimento(str);

    printf("%d\n", retornei);

    return 0;
}