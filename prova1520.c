#include <stdio.h>
#include <string.h>

void GeraEmail(const char *nome, char *email){
    int i, j = 1;
    char letra[101]; //string letra que armazenará a inicial de cada nome
    char mail[] = "@academico.ufpb.br"; // armazena o sufixo do email para concatenar na outra string

    letra[0] = nome[0]; // pega a primeira letra do nome
    for(i = 0; nome[i] != '\0'; i++){ 
        if(nome[i] == ' ' && nome[i+1] != '\0'){  // condição para ver onde tem um espaço e verificar se apos esse espaço não é o fim da string
            letra[j] = nome[i+1]; // se tiver um espaço, pega o proximo caractere e armazena na string letra
            j++;
        }
    }
    // junção das strings para formar o texto do email 
    strcat(letra, mail);
    strcpy(email, "");
    strcpy(email, letra);
}

int main(){
    char nome[101], email[101];

    fgets(nome, 101, stdin);
    GeraEmail(nome, email);
    puts(email);

    return 0;
}