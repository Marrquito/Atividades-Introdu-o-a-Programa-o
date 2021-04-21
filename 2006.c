#include <stdio.h>

int main(){
    int tea, a, resp =0, i;

    scanf("%d", &tea);

    for(i=0; i < 5; i++){
        scanf("%d", &a);
        if(a == tea){
            resp++;
        }
    }

    printf("%d\n", resp);

    return 0;
}

/*
    int tea, a, b, c, d, e, resp = 0;

    scanf("%d", &tea);

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);


    if(a == tea){
        resp++;
    }
    if(b == tea){
        resp++;
    }
    if(c == tea){
        resp++;
    }
    if(d == tea){
        resp++;
    }
    if(e == tea){
        resp++;
    }

*/