#include <stdio.h>

int main(){
    int a, b; // inicialização das variáveis A e B para serem lidos 2 numeros inteiros nos scanf's a seguir.
    
    scanf("%d", &a);
    scanf("%d", &b);

    if( a == b ){  //condição para levar em conta o que vai acontecer se as variáveis digitadas forem iguais.
        puts("A e B sao iguais."); 
        return 0; 
// o return 0; foi usado para que o progorama se encerre após ter imprimido o resultado da condição e não entre entre nas condições futuras.
    } 

    if( a > b ){ // condição para avaliar caso A seja maior do que B
        if( a % 2 == 0){ // dentro da condição de avaliação acima, eu criei uma outra condição para avaliar se a maior variável é par ou ímpar, exibindo uma mensagem diferente para cada um dos casos.
            puts("A eh maior e PAR.");
        }else puts("A eh maior e IMPAR.");
    }else{ // se B não for maior do que A, então pela lógica B vai ser maior do que A assim, não precisando de um "else if" para fazer uma nova condição. Caso B seja maior, o programa entrará nesse "else".
        if(b % 2 == 0){ // dentro do "else" para B > A, novamente fiz uma outra verificação para ver se B é par ou ímpar e assim poder mostrar a mensagem adequada de acordo com o valor digitado.
            puts("B eh maior e PAR.");
        }else puts("B eh maior e IMPAR.");
    }

    return 0;
}