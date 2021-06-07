#include <stdio.h>

void Troca(int *i, int *j){
    int *temp;

    *temp = *i;
    printf("%p\n", temp);
    /* *i = *j;
    *j = *temp; */
}

int main(){
    int a = 2, b = 3;

    printf("a = %d, b = %d\n", a, b);
    Troca(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}