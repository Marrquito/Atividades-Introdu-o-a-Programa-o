#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, delta, x1, x2, x0;

    printf("----------------------------------------\n");
    printf("                BHASKARA                \n");
    printf("----------------------------------------\n");

    printf("Digite os valores A, B e C da equacao: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("A = %d, B = %d, C = %d\n", a, b, c);

    if( a == 0){
        printf("Nao representa uma equacao do segundo grau!\n");
        printf("FIM!\n");
        return 1;
    }

    delta = (pow(b, 2) - (4 * a * c));

    x0 = (-b ) / (2*a);
    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);
    
    printf("delta = %d\n", delta);


    if( delta < 0 ) {
        printf("Nao possui solucao real =( \n");
        printf("Fim!\n");
        return 2;

    }else{
        if ( delta == 0 ){
            printf("Uma solucao real: x = %d", x0);
        }else{
            printf("Duas solucoes reais: x1 = %d e x2 = %d", x1, x2);
        }
        
    }
    

    return 0;
}