#include <stdio.h>

int main(){
    int m, n, p, i; // variavel i para usar no for. M sendo o menor numero e N o maior, P sendo o numero que diz se a sequencia impressa vai ser par ou impar

    // leitura das variaveis
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &p);

    // resolução matematica para trocar os valor das variaveis M e N, caso M (que é para ser a menor) esteja com um valor maior do que N
    if(m > n){
        m = m + n;
        n = m - n;
        m = m - n;
    }

    // caso as variaveis M e N sejam iguais, entao o intervalo entre elas é inexistente. 
    if(m == n){
        if(p % 2 == m % 2){ // desvio condicional para ver se o P e M (ou N) são numeros pares ou ímpares, caso sejam iguais, exibe o valor M (ou N).
            printf("%d.\n", m);
        }else puts("Nada para exibir."); // caso um deles seja par e o outro impar (ou o inverso), vai ser exibida a mensagem do puts().
        return 0; // return 0, para encerrar o programa e nao deixar que ele siga para as proximas condiçoes.
    }

    for(i=m; i <= n; i++){ // laço for criado para gerar a sequencia e manipular os valores de m atraves da variavel i.
        if( p % 2 == 0 && i % 2 == 0){ // primeira condição para quando o valor de P é par e os valores impressos de I tambem tem que ser par.
            if(i == n - 2 || i == n - 3){ // condição para avaliar quando o valor de N é impar e o valor de P é impar ou quando o valor de N é par e o valor de P também é par
                printf("%d e ", i); // vai fazer exibir o penultimo valor de I seguido de um "e", para que no final da sequencia esteja de forma correta conforme a lingua portuguesa.
            }else if(i == n || i == n - 1){ // condição para quando o valor P é ímpar e o valor de N é par, ou vice-versa.Ex: quando N é impar e P é impar o ultimo valor de I será impar tambem. Mas quando N é impar e P é par, o ultimo valor de N tem que ser uma unidade menor para que termine no ultimo par. 
                printf("%d.\n", i); // irá exibit o ultimo valor com um "." final pulando a proxima linha.
            }else if(i != n) printf("%d, ", i); // valor de i nao for nem o ultimo nem o penultimo, ele sera impresso com uma "," ao lado para dar continuidade na sequencia
        }else if ( p % 2 != 0 && i % 2 != 0){ // else if para valores de P que sao impares e valores de I que tem que serem impressor tambem impares
            if(i == n - 2 || i == n - 3){ // a partir dessa linha 34, todas as linhas abaixo até a linha 38 repetem a mesma lógica da linha 27 até a linha 32
                printf("%d e ", i);
            }else if(i == n || i == n - 1){
                printf("%d.\n", i);
            }else if(i != n ) printf("%d, ", i);
        }
    }
    
    return 0;
}