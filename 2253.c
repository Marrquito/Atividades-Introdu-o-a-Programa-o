#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char pass[1000];
    
    while(scanf("%[^\n]%*c", pass) != EOF){
        int valida = 1, i;
        int lower = 0, upper = 0, esp = 0;

        if(strlen(pass) < 6 || strlen(pass) > 32){
            valida = 0;
        }else{
            for(i = 0; pass[i] != '\0'; i++){
                if(ispunct(pass[i]) || isspace(pass[i])){
                    esp++;
                    valida = 0;
                    break;
                }
            }
            if(valida){
                for(i = 0; pass[i] != '\0'; i++){
                    if(islower(pass[i]) != 0 && isalnum(pass[i])){
                        lower++;
                        break;
                    }
                }
                for(i = 0; pass[i] != '\0'; i++){
                    if(isupper(pass[i]) != 0 && isalnum(pass[i])){
                        upper++;
                        break;
                    }
                }
            }
        }
        if(valida && !esp && lower && upper){
            puts("Senha valida.");
        }else puts("Senha invalida.");
    } 

    return 0;
}