#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main(){
    char c;
    int a1, r, n, an, as, cobaia, i; 
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
        cobaia = 0;
        an = a1;
        as = 0;
        while(cobaia != n){
            an = a1 + cobaia*r;
            as = as + an;
            printf("A%d = %d\n", cobaia+1, an);    
            cobaia++;
        }
        printf("Soma dos termos da P.A: %d\n", as);
    
    
    }else if(c == 'G'){
        cobaia = 0;
        an = a1;
        as = 0;
        while(cobaia != n){
            if (cobaia == 0){
                an = a1;
                printf("A%d = %d\n", cobaia+1, an);
                cobaia++;
                as = as + an;
            }else{
                an = a1 * (pow(r, cobaia));
                as = as + an;
                printf("A%d = %d\n", cobaia+1, an);
                cobaia++;
            }
        }
        printf("Soma dos termos da P.A: %d\n", as);
    }

    return 0;
}