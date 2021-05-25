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
    int n, i, cont, j;

    scanf("%d", &n);

    int ar[n];

    for(i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }

    OrdenaArray(ar, n);

    int aux;

    aux = ar[0];
    cont = 1;
    i = 1;

    while(1){
        if(i == n+1) break;

        if(ar[i] == aux){
            cont++;
            i++;
        }else{
            printf("%d aparece %d vez(es)\n", aux, cont);
            aux = ar[i];
            cont = 0;
        }

    }
    
    return 0;

}