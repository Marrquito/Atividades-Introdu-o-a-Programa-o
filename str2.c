#include <stdio.h>
#include <string.h>

int contaChar(const char *str, char letra){
    int i, cont = 0;

    for(i = 0; strlen(str), i++;){
        if(str[i] == letra){
            cont++;
        }
    }

    return cont;
}

int main(){
    const char *str = "programacao";
    int cont;

    cont = contaChar(str, 'a');

    printf("%d\n", cont);

    return 0;
}