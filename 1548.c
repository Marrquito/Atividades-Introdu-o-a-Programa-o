#include <stdio.h>

void OrdenaArray(int ar[], int size){
    int i, j, cobaia;

    for(i = 0; i < size; i++){
        for(j = 0; j < size; j++){
            if(ar[i] > ar[j]){
                cobaia = ar[i];
                ar[i] = ar[j];
                ar[j] = cobaia;
            }
        }
    }

}

int main(){
    int casos, alunos, notas[1000] = { 0 };
    int cont = 0,  i, j, help[1000] = { 0 };

    scanf("%d", &casos);

    while(casos--){
        scanf("%d", &alunos);

        for(i = 0; i < alunos; i++){
            scanf("%d", &notas[i]);
            help[i] = notas[i];
        }

        OrdenaArray(help, alunos);

        for(i = 0; i < alunos; i++){
            if(notas[i] == help[i]){
                cont++;
            }
        }

        printf("%d\n",cont);
        cont = 0;
    }

    return 0;
}