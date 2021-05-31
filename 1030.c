#include <stdio.h>

typedef unsigned short hu;

hu Viveu(hu people, hu salto){
    int i, viveu;

    for(i = 2; i <=people; i++){               
        viveu = (viveu + salto) % i;
    }

    return viveu;
}

int main(){
    hu casos, i, j;
    hu people, salto, viveu;

    scanf("%hu", &casos);

    for(i = 0; i < casos; i++){
        scanf("%hu %hu", &people, &salto);

        printf("Case %hu: %hu\n", i+1, Viveu(people, salto)+1);

    }

    return 0;
} 