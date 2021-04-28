#include <stdio.h>

int main(){
    int  rpa, rpg, a1, a2, i, aux1, flagA = -1, flagG = -1; 
    //rpa e rpg representam a razao da PA e PG respectivamente.
    //a1 e a2 representam os primeiros termos lidos e posteriormente a2 é usado também para os outros termos da sequencia.
    // aux1 para auxiliar nas contas e i para o laço for.
    //flagA e flagB vao indicar dentro do laço quando o valor digitado nao formar mais uma PA ou uma PG.
    //flagA e flagB iniciam com -1 pois quando a flag for TRUE --> nao é uma PA/PG, e quando for FALSE ( == 0) será uma PA/PG
    
    
    scanf("%d %d", &a1, &a2); 
    
    rpa = a2 - a1; // começo calculando as razoes da PA e PG respectivamente.
    rpg = a2 / a1;

    for(i = 2; a2 >= 0; i++){ //variavei i começando com 2 pois ja foram armazenados 2 valores antes do laço for e o proximo digitado será o tereceiro
        aux1 = a2; // aux1 vai receber o primeiro valor digitado de a2 para ser comparado com o proximo e ver se ainda se encaixa nos padrões da PA/PG
        scanf("%d", &a2);
        if( ( a2 - aux1 ) != rpa ) flagA++; //caso a nova razao entre os dois ultimos termos forem diferentes da razao incial entre A1 e A2, será adicionado 1 unidade a flag, tornando-a falsa.
        if( ( a2 / aux1 ) != rpg ) flagG++;
    }

    if(!flagA){ // como quero a que a flag seja FALSE para que seja uma PA/PG utilizei essa condição no if para PA e para PG
        printf("PA com %d termos e razao %d.\n", i-1, rpa);
    }

    if(!flagG){
        printf("PG com %d termos e razao %d.\n", i-1, rpg);
    }

    if(flagA && flagG) printf("Sequencia com %d termos.\n", i-1); //sendo a flagA e flagG TRUE, elas nao entrarão nos if's acima portanto, entrarão nesse if que representa quando a sequencia não se encaixa nos padros de PA ou PG.

    return 0;
}