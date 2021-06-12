#include <stdio.h>
#include <string.h>

int main(){
    unsigned testes, i;
    char str1[10];
    char str2[10];

    scanf("%u%*c", &testes);

    for(i = 0; i < testes; i++){
        scanf("%s", &str1);
        scanf("%s", &str2);

        if (strcmp(str1, str2) == 0){
            printf("Caso #%u: De novo!\n", i+1);
        }else if (strcmp(str1, "Spock") == 0 && strcmp(str2, "pedra") == 0){
            printf("Caso #%u: Bazinga!\n", i+1);
        }else if (strcmp(str1, "lagarto") == 0 && strcmp(str2, "Spock") == 0){
            printf("Caso #%u: Bazinga!\n", i+1);
        }else if (strcmp(str1, "tesoura") == 0 && strcmp(str2, "lagarto") == 0){
            printf("Caso #%u: Bazinga!\n", i+1);
        }else if (strcmp(str1, "papel") == 0 && strcmp(str2, "Spock") == 0){
            printf("Caso #%u: Bazinga!\n", i+1);
        }else if (strcmp(str1, "tesoura") == 0 && strcmp(str2, "papel") == 0){
            printf("Caso #%u: Bazinga!\n", i+1);
        }else if (strcmp(str1, "papel") == 0 && strcmp(str2, "pedra") == 0){
            printf("Caso #%u: Bazinga!\n", i+1);
        }else if (strcmp(str1, "lagarto") == 0 && strcmp(str2, "papel") == 0){
            printf("Caso #%u: Bazinga!\n", i+1);
        }else if (strcmp(str1, "pedra") == 0 && strcmp(str2, "lagarto") == 0){
            printf("Caso #%u: Bazinga!\n", i+1);
        }else if (strcmp(str1, "Spock") == 0 && strcmp(str2, "tesoura") == 0){
            printf("Caso #%u: Bazinga!\n", i+1);
        }else if (strcmp(str1, "pedra") == 0 && strcmp(str2, "tesoura") == 0){
            printf("Caso #%u: Bazinga!\n", i+1);
        }else printf("Caso #%d: Raj trapaceou!\n", i+1);
    
    }

    return 0;
}