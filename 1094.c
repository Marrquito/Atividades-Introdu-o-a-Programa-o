#include <stdio.h> 

int main(){
    int n, qtd, total, c, r, s;
    char tp;
    double percentC, percentR, percentS;

    scanf("%d", &n);

    total = c = r = s = 0;

    while(n--){
        scanf("%d %c", &qtd, &tp);
        total += qtd;
        if(tp == 'C'){
            c += qtd;
        }else if(tp == 'R'){
            r += qtd;
        }else if(tp == 'S'){
            s += qtd;
        }
    }
    percentC = c*100.0 / total;
    percentR = r*100.0 / total;
    percentS = s*100.0 / total;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %%\n", percentC);
    printf("Percentual de ratos: %.2f %%\n", percentR);
    printf("Percentual de sapos: %.2f %%\n", percentS);


    return 0;
}