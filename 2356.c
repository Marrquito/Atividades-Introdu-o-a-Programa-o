#include <stdio.h>
#include <string.h>

int main(){
    char d[150];
    char s[150];
    int i;

    while(scanf("%s %s", d, s) != EOF){
       
        if(strstr(d, s)){
            puts("Resistente");
        }else{
            puts("Nao resistente");
        }
    }

    return 0;
}