#include <stdio.h>

int main(){
    int n, a, b, dad, son, i;

    while(scanf("%d", &n) && n != 0){
        dad = son = 0;

        while(n--){
            scanf("%d %d", &a, &b);
            if(a == b){
                dad += 0;
                son += 0;
            }else if(a > b){
                dad++;
            }else if (a < b) son++;
        }

        printf("%d %d\n", dad, son);
    }

    return 0;
}