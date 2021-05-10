#include <stdio.h>
#include <math.h>

float Delta(float a, float b, float c){
    float delta;

    delta = (b * b ) - (4 * a * c);

    return delta;
}


float RaizX0(float a, float b) {
    float x0;

    x0 = -b / ( 2 * a );

    return x0;
}


float RaizX1(float a, float b, float delta){
    float x1;

    x1 = (-b + sqrt(delta)) / (2 * a );

    return x1;
}


float RaizX2(float a, float b, float delta){
    float x2;

    x2 = (-b - sqrt(delta) ) / ( 2 * a );

    return x2;
}


int main(){
    float a, b, c;
    float delta, x0, x1, x2;

    printf("----------------------------------------\n");
    printf("                BHASKARA                \n");
    printf("----------------------------------------\n");

    printf("Digite A: ");
    scanf("%d", &a);
    printf("Digite B: ");
    scanf("%d", &b);
    printf("Digite C: ");
    scanf("%d", &c);
    
    puts("\n");

    printf("A = %d, B = %d, C = %d\n\n", a, b, c);


    if(a == 0){
        puts("A = 0. Nao forma equacao 2 grau");
        puts("FIM");
        return 1;
    }

    delta = Delta(a, b, c);

    printf("Delta = %.1f\n", delta);

    if(delta < 0){
        puts("Sem solução real =/");
        puts("FIM");
        return 2;
    }else if(delta == 0){
        x0 = RaizX0(a, b);
        printf("Raiz unica: %.1f\n", x0);
    }else{
        x1 = RaizX1(a, b, delta);
        printf("X1: %.1f\n", x1);
        x2 = RaizX2(a, b, delta);
        printf("X2: %.1f\n", x2);
    }

    puts("Obrigado por usar o programa!");
    puts("FIM");
    return 0;
}