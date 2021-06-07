#include <stdio.h>

int main(){
    int a, b;

    printf("Digite a e b: ");
    scanf("%d%d", &a, &b); // a = 2  e  b = 0

    while( (a++ % 2 != 0) || (b++ % 2 == 0) ){ // se a for impar  ou  b for par
        printf("a=%d, b=%d\n", a, b);
        if (a > b){
            printf("aqui\n");
        }else{
        	continue;
        }
    }

    return 0;
}

// 20200011020

// a = 2  e  b = 0
//sendo a um numero par, ele vai acrescentar uma unidade por vez no laço até a variavel chegar no prox valor par, sendo b um valor par, o programa vai acrescentar uma unidade a B, tornando assim a condição falsa. Isso com A > b;
// a = 0  e  b = 2
// como B > A, enquanto nao sera impressa a mensagem "aqui" e fará com que vá direto para o desvio incondicional "continue", que faz com que o programa vá direto avaliar o a condição. Avaliando a condição, vai adicionar 1 unidade a A e B até que A se admita o próximo valor par e B o proximo valor ímpar.