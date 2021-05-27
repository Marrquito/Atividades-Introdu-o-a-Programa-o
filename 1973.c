#include <stdio.h>

typedef long long int lld;

int main(){
    unsigned int fazendas;
    int i, j;

    scanf("%u", &fazendas);

    lld carneiros[fazendas], stars[fazendas];
    lld somaT= 0, contC = 0, estrelas = 0;

    for(i = 0; i < fazendas; i++){
        scanf("%lld", &carneiros[i]);
        somaT += carneiros[i];
    }

    for(i = 0; i < fazendas; i++){
        if(carneiros[i] % 2 != 0){
            estrelas++;
            if(carneiros[i] >= 1){
                contC++;
                carneiros[i]--;
            }
        }else{
            estrelas++;
            for(j = i; j >= 0; j--){
                if(carneiros[j] >= 1){
                    carneiros[j]--;
                    contC++;
                }
            }
            break;
        }
    }

    printf("%llu %llu\n", estrelas, somaT - contC);

    return 0;
}