#include <stdio.h>
#include <string.h>

void inverte(char *word){ // função para inverter a string
    int i;
    int len = strlen(word); // pega o tamanho da string

    for(i = 0; i < len / 2; i++){ // laço for para inverter letra a letra o array
        char aux = word[i];
        word[i] = word[len - i - 1];
        word[len - i - 1] = aux;
    }
}

int main(){
    int i;
    char word[30];

    scanf("%[^\n]", word); // le a string a ser invertida

    inverte(word); // chama a função para inverter a string

    for(i = 0; word[i] != '\0'; i++){ // imprime a string já invertida
        printf("%c\n", word[i]);
    } 

    return 0;
}