#include <stdio.h>

void OrdenaArray(int ar[], int size, int *aux2){ // utilização de ponteiro para conseguir enviar um valor para main em função void
    int i, j, cobaia, aux = 0; // aux para contar as trocas

    for(i = 0; i < size; i++){ // dois laços for para percorrer o vetor comparando um elemento com os outros
        for(j = 0; j < size-1; j++){
            if(ar[j] < ar[j+1]){ // se o elemento atual [j] for menor do que o proximo [j + 1] ocorre  troca deles para fazer a ordenação
                cobaia = ar[j+1];
                ar[j+1] = ar[j];
                ar[j] = cobaia;
                aux++; // quando há uma troca a variavel aux é incrementada
            }
        }   
        if(aux > 0){ // se aux foi incrementada, foi porque o array for percorrido. Porem, não interessa quantas vezes houveram trocas, e sim quantas vezes o array foi percorrido
            *aux2 += 1; // com isso, a variavel aux2 recebe +1 a cada vez que o array é percorrido
            aux = 0; //aux é zerada para quando entrar no for novamente não haja erro na contagem
        }
    }
}

void MostraArray(int ar[], int size){ // função feita exclusivamente para imprimir o array
    int i;
    
    for(i = 0; i < size - 1; i++){ // size - 1 para acabar o for com o ultimo elemento que deve ter imprimido com um espaço ao seu lado
        printf("%d ", ar[i]);
    }
    printf("%d\n", ar[size-1]); // imprime o ultimo elemento com \n, como solicitado
}

int main(){
    int qtd, valores[300];
    int i, ordem = 1; // ordem começando com 1 pois o array sempre será percorrido uma vez pelo menos

    scanf("%d", &qtd); // leitura do numero de valores do array

    for(i = 0; i < qtd; i++){
        scanf("%d", &valores[i]); // preenchimento do array
    }
    
    OrdenaArray(valores, qtd, &ordem);  //chama a função que faz a ordenaçao decrescente do array e passa o endereço da variavel ordem
    MostraArray(valores, qtd); // chamada da função de uso excluisivo para printar os elementos do array

    printf("%d\n", ordem); // mostra a quantidade de vezes que o array for percorrido
    
    return 0;
}