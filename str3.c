#include <stdio.h>
#include <string.h>

int contaPalavra(const char *str){
    int i, cont = 1;

    for(i = 0; i < strlen(str); i++){
        if(str[i] == ' ') cont++;
    }

    return cont;
}


int main(){
    const char *str = "bolo de chocolate doce";
    int qtd;

    qtd = contaPalavra(str);

    printf("%d\n", qtd);

    return 0;
}