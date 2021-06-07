#include <stdio.h>

int Somando(int a, int b){ // declaração e passagem dos parametros inteiros A e B
    int soma, maior; // duas variaveis, uma para a soma e outra para deixar os numeros em ordem decrescente

    maior = a; // ja asumo que A vai ser o maior numero lido para facilitar a condição a baixo

    if(b > maior){ // condição para caso o segundo numero digitado seja maior, se for, faremos uma troca
        maior = b;
        b = a;
    }

    soma = ( (maior + b) * (maior - b + 1) ) / 2; // implementação da formula da soma dos termos de uma PA 

    return soma; // retorno do resultado para a função main
}

int main(void){
    int a, b, soma;

    scanf("%d %d", &a, &b); // leitura das variaveis
    
    soma = Somando(a, b); // atribuição do resultado à variavel soma

    printf("%d\n", soma); // impressao do resultado

    return 0;
}