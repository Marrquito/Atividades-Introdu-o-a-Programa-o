#include <stdio.h>
#include <math.h>

int ResolveEquacao2Grau(float a, float b, float c, float *x0, float *x1, float *x2, float *delta){
    if(a == 0){
        return -1;
    }

    *delta = pow(b, 2) - 4 * a * c;

    if(*delta < 0 ) return -2;

    *x0 = -b / ( 2 * a );

    *x1 = (-b + sqrt(*delta) ) / ( 2 * a );

    *x2 = (-b - sqrt(*delta) ) / ( 2 * a );

    if(delta >= 0){
        return 0;
    }
}

int main(){
    float a, b, c;
    float x0, x1, x2, delta;

    scanf("%f %f %f", &a, &b, &c);

    ResolveEquacao2Grau(a, b, c, &x0, &x1, &x2, &delta);

    if(delta == 0){
        printf("X1 = %f", x0);
    }else if(delta > 0){
        printf("X1 = %.2f\nX2 = %.2f\n", x1, x2);
    }

    return 0;
}