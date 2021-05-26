#include <stdio.h>

void OrdenaArray(int ar[], int tamanaho){
    int i, j, cobaia;
    
    for (i = 0; i < tamanaho; i++){
        for (j = 0; j < tamanaho; j++){
            if (ar[i] < ar[j]){
                cobaia = ar[i];
                ar[i] = ar[j];
                ar[j] = cobaia;
            }
        }
    }
}


int main(){
    int nBilhetes, pFest;
    int i, j, cont = 0, ant;

    scanf("%d %d", &nBilhetes, &pFest);
    
    while(nBilhetes && pFest){
        int numBilhete[pFest];
        int aux[pFest];

        for(i = 0; i < pFest; i++){
            scanf("%d", &numBilhete[i]);
        }
        for(i = 0; i < pFest; i++){
        aux[i] = 0;
        }

        OrdenaArray(numBilhete, pFest);

        ant = 0;

        for(i = 0; i < pFest; i++){
            for(j = i+1; j < pFest; j++){
            if(numBilhete[i] == numBilhete[j] && numBilhete[i] != ant){
                    aux[i] = 1;
                    aux[j] = 0;
                    ant = numBilhete[i];
                }
            }
        }

        for(i = 0; i < pFest; i++){
            if(aux[i] >= 1){
                cont++;
            }
        }

        printf("%d\n", cont);
        cont = 0;
        scanf("%d %d", &nBilhetes, &pFest);
    }
    
    return 0;
}