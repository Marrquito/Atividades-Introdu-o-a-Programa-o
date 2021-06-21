#include <stdio.h>

int main(){
    char jogo;
    int cont = 0, i;

    for(i = 0; i < 6; i++){
        scanf("%c%*c", &jogo);
        if(jogo == 'V') cont++;
    }    

    if(cont == 5 || cont == 6){
        puts("1");
    }else if(cont == 3 || cont == 4){ 
        puts("2");
    }else if(cont == 1 || cont == 2){ 
        puts("3");
    }else puts("-1");

    return 0;
}