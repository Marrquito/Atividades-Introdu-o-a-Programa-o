#include <stdio.h>

int main(){
    int n, r, m, j;

    
    while(scanf("%d", &n) != 0){
        if ( n == 0 ) break;
        m = j = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &r);

            if(r == 0){
                m++;
            }else j++;
        }
        printf("Mary won %d times and John won %d times\n", m, j);
    }

    return 0;
}