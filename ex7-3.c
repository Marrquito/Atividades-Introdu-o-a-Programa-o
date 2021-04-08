#include <stdio.h>

int main(){
    int  cont;
    char frase1[46] = "So aprende a programar quem escreve programas";
    char frase2[51] = "Quem nao escreve programas nao aprende a programar";


    cont = 1;

    do{
        if(cont % 2 != 0){
            printf("%s\n", frase1);
        }else printf("%s\n", frase2);

        cont++;
    }while (cont != 201);

    return 0;
}