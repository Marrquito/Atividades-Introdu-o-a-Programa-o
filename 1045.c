#include <stdio.h>

int main(){
    double a, b, c, cobaia;

    scanf("%lf %lf %lf", &a, &b, &c);

    if(a < b){
        cobaia = a;
        a = b;
        b = cobaia;
    }
    if(a < c){
        cobaia = a;
        a = c;
        c = cobaia;
    }
    if(b < c){
        cobaia = b;
        b = c;
        c = cobaia;
    }
    
    if(a >= (b+c)){
        printf("NAO FORMA TRIANGULO\n");
    }else if( pow(a, 2) == pow(b, 2) + pow(c, 2)){
        printf("TRIANGULO RETANGULO\n");
    }else if(pow(a,2) >  pow(b,2) + pow(c,2)){
        printf("TRIANGULO OBTUSANGULO\n");
    }else if(pow(a,2) < pow(b,2) + pow(c,2)){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a == b && b == c){
        printf("TRIANGULO EQUILATERO\n");
    }else if( a == b || b == c){
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}