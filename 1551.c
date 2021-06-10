#include <stdio.h>
#include <string.h>

int main(){
    int testes, i, cont[26], j;
    char alfa[27] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w','x', 'y', 'z', '\0'};
    char frase[1002];

    scanf("%d%*c", &testes);

    while(testes--){
        int soma = 0;
        
        fgets(frase, 1002, stdin);
        memset(cont, 0, sizeof(cont));

        for(i = 0; frase[i] != '\0'; i++){
            for(j = 0;  j < 26; j++){
                if(frase[i] == alfa[j]){
                    if(cont[j] == 0)
                        cont[j] = 1;
                }
            }
        }

        soma = 0;
        for(i = 0; i < 26; i++){
            soma += cont[i];
        }

        if(soma == 26){
            printf("frase completa\n");
        }else if(soma >= 13 ){
            printf("frase quase completa\n");
        }else printf("frase mal elaborada\n");

        soma = 0;
        
    }

    return 0;
}