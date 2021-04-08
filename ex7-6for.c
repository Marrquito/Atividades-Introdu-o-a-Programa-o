#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main(){
    char c;
    int a1, r, n, an, as, i;
    //an = termo N ; as = Soma

    printf("Digite 'A' para uma PA e 'G' para uma PG\n");
    c = getchar();
    c = toupper(c);
    printf("%c\n", c);

    printf("Informe o primeiro termo da progressao: ");
    scanf("%d", &a1);
    printf("Informe a razao da progressao: ");
    scanf("%d", &r);
    printf("Informe o numero de termos da progressao: ");
    scanf("%d", &n);

    printf("A1 = %d , R = %d , N = %d\n\n", a1, r, n);

    if(c == 'A'){
        an = a1;
        as = 0;
        for(i=0; i < n; i++){
            an = a1 + i*r;
            as = as + an;
            printf("A%d = %d\n", i+1, an);
        }

        printf("Soma dos termos da P.A: %d\n", as);
    
    }else if(c == 'G'){
        an = a1;
        as = 0;
        for(i=0; i < n; i++){
            an = a1 * (pow(r, i));
            as = as + an;
            printf("A%d = %d\n", i+1, an);
        }
        
        printf("Soma dos termos da P.G: %d\n", as);    
    }

    return 0;
}