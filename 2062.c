#include <stdio.h>
#include <string.h>

int main(){
    int casos;
    char word[150];

    scanf("%d", &casos);

    while(casos--){
        scanf("%s", word);

        if(strlen(word) == 3 && word[0] == 'O' && word[1] == 'B'){
            printf("OBI");
        }else if(strlen(word) == 3 && word[0] == 'U' && word[1] == 'R'){
            printf("URI");
        }else printf("%s", word);

        if(casos) printf(" ");
    }

    printf("\n");

    return 0;
}