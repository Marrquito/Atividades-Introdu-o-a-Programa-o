#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{ // estrutura criada para receber os dados lidos do arquivo
    char nome[100];
    int cod, qtdItem;
    float valor, total;

}item;

item itens[100];

void Ledados(){
    FILE *fp;
    int  i;

    fp = fopen("listaDeProdutos.txt", "r");
    if(fp == NULL){
        return;
    }

    for(i = 1; i < 11; i++){ // leitura dos 10 itens presentes no arquivo
        fscanf(fp, "%[^\n]", itens[i].nome);
        fscanf(fp, "%d %f%*c", &itens[i].cod, &itens[i].valor);
        itens[i].qtdItem = 0;
        itens[i].total = 0;
    }

    fclose(fp);
}

void Calcula(int cod, int qtd){ // função para calcular a quantidade de cada item
    int i, j;  

    for(i = 1; i < 11; i++){
        if(cod == itens[i].cod){
            itens[i].qtdItem += qtd; //incrementando a quantidade de determinado item e calculando seu preço
            itens[i].total += itens[i].valor * qtd; 
        }
    }
}

void Resumo(int ordem[], float total){ // função para mostrar o resumo da compra
    int i, j;

    puts("RESUMO DA COMPRA");
    puts("-----");
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            if (ordem[i] == itens[j].cod && itens[j].qtdItem) { // caso o item do array formado para ordem seja igual ao item da struct e tenha mais de um item comprado, irá mostrar no resumo
                printf("%dx %s: R$ %.2lf\n", itens[j].qtdItem, itens[j].nome, itens[j].total);
            }
        }
    }
    puts("-----");
    printf("TOTAL: R$%.2f\n", total);
}

float Total(){ // função para calcular o valor total de itens
    float total = 0;

    for(int i = 0; i < 11; i++){
        total += itens[i].total;
    }

    return total;
}

int main(){
    int cod, qtd;
    int i, j;
    int ordem[11] = {0};
    float total;
    int sla = 0, sla2 = 0; // variaveis de controle 

    Ledados(); // chadada da função que le os dados do arquivo

    while(1){ // loop infinito para as leituras ate serem lidos 0 e 0
        scanf("%d %d", &cod, &qtd);

        if(cod == 0 && qtd == 0){
            break;
        }else{
            Calcula(cod, qtd); 

            // dois for's aninhados para percorrer o array e deixar na ordem da entrada o array ordem[]. Depois o array ordem[] será utilizado para ordenar a saida do resumo da compra
            for(i = 0; i < 11; i++){
                if(cod == itens[i].cod){
                    for(j = 0; j < 11; j++){
                        if(ordem[j] == itens[i].cod){
                            sla++;
                        }

                        if(sla) break;
                    }

                    if(!sla){
                        ordem[sla2] = itens[i].cod;
                        sla2++;
                    }
                    sla = 0;
                    break;
                }else continue;
            }
        }
    }

    total = Total(); // total recebe-ra o resultado da função Total que será o valor total da compra

    Resumo(ordem, total); // impreme o resumo da compra total

    return 0;
}