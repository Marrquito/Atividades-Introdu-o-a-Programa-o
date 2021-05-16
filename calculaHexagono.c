#include <stdio.h>
#include <math.h>

void CalculaHexagono(float lado, float *area, float *perimetro){
    
    *area = ( 3 * pow(lado, 2) * sqrt(3) ) / 2;

    *perimetro = 6 * lado;

}


int main(){
    float lado, area = 0, perimetro = 0;

    scanf("%f", &lado);


    CalculaHexagono(lado, &area, &perimetro); 

    printf("Area do Hexagono = %f\n", area);
    printf("Perimetro do Hexagono = %f\n", perimetro);

    return 0;
}
