#include <stdio.h>

int main(){
    int n, i, j, cont = 0;
    int soma[100000];

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &soma[i]);
    }

    for(i = 0; i < n; i++){
        if(soma[i] == 0){
            if(soma[i-1] == 0){
                j = i;
                while(soma[j] == 0){
                    j--;
                }
                soma[j] = 0;
            }else soma[i-1] = 0;
        }
    }

    for(i = 0; i < n; i++){
        cont += soma[i];
    }

    printf("%d\n", cont);

    return 0;
}