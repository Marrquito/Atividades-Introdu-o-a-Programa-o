#include <stdio.h>

int main(){
    int num, cont;

    num = 1;
    cont = 1;
    do{
        if (num % 6 == 0 && num % 10 == 4){
            printf("%d ", num);
        }
        cont++;
        num++;
    }while(cont != 1001);

    return 0;
}