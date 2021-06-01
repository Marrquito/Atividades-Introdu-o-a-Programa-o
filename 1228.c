#include <stdio.h>

typedef unsigned short hu;

int main(){
    hu players, largada[25], chegada[25], sla[25];
    hu i, j, mudou = 0, cobaia;

    
    while(scanf("%hu", &players) != EOF){
        for(i = 0; i < players; i++){
            scanf("%hu", &largada[i]);
        }
        for(i = 0; i < players; i++){
            scanf("%hu", &chegada[i]);
        }

        for(i = 0; i < players; i++){
            for(j = 0; j < players; j++){
                if(chegada[j] == largada[i]){
                    sla[j] = i + 25;
                }
            }
        }

        for(i = 0; i < players; i++){
            for(j = i+1; j < players; j++){
                if(sla[i] > sla[j]){
                    cobaia = sla[j];
                    sla[j] = sla[i];
                    sla[i] = cobaia;
                    mudou++;
                }
            }
        }

        printf("%hu\n", mudou);
        mudou = 0;
    }

    return 0;
}