#include <stdio.h>

int main(){
    int t, pa, pb, cont;
    double g1, g2;

    scanf("%d", &t);

    while(t--){
        cont = 0;
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);

        while(pa <= pb && cont < 101){
            pa += (int) pa * (g1 / 100);
            pb += (int) pb * (g2 / 100);   
            
            cont++;

            if(cont > 100){
                puts("Mais de 1 seculo.");
                break;
            }
        }
        if (cont <= 100) printf("%d anos.\n", cont);

    }

    return 0;
}