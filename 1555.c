#include <stdio.h>
#include <math.h>


int Rafael(int x, int y){
    int r;

    r = pow(3*x, 2) + pow(y, 2);

    return r;
}

int Beto(int x, int y){
    int b;

    b = 2 * pow(x, 2) + pow(5*y, 2);

    return b;
}

int Carlos(int x, int y){
    int c;

    c = -100 * x + pow(y, 3);

    return c;
}


int main(){
    int n, x, y, maior;
    int r, b, c;

    scanf("%d", &n);

    while(n--){
        scanf("%d %d", &x, &y);

        int r = Rafael(x, y);
        int b = Beto(x, y);
        int c = Carlos(x, y);

        maior = r;

        if(maior < b){
            maior = b;
        }
        if(maior < c){
            maior = c;
        }

        if(maior == r){
            puts("Rafael ganhou");
        }else if(maior == b){
            puts("Beto ganhou");
        }else if (maior == c) puts("Carlos ganhou");

    }

    return 0;
}