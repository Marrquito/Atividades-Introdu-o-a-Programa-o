#include <stdio.h>
#include <math.h>

int Ehprimo(int x){
    int cont = 0, i;  

    if(x == 0 || x == 1){;
        return -1;
    }

    if(x == 2){;
        return 0;
    }
   
    for(i = 2; i <= sqrt(x); i++){
        if(x % i == 0) cont++;
        if(cont == 2) break;
    }
    
    if(cont >= 1){
        return -1;
    }else return 0;

}

int main(){
    int n, primo;
    unsigned long long int  x;

    scanf("%d", &n);

    while(n--){
        scanf("%llu", &x);

        primo = Ehprimo(x);

        if(primo){
            puts("Not Prime");
        }else if(!primo) puts("Prime");

    }

    return 0;
}