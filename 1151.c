#include<stdio.h>

int main(){
    int n, i, a = 0, b = 1, result = 0;
    
    scanf("%d", &n);
    
    for(i = 1; i < n; i++){
        if(i % 2 == 1){
            printf("%d ", result);
           
            result = a +  b;
            a = result;
        }else if(i == 2){
            printf("%d ", result);
        } 
        else if(i % 2 == 0){
            printf("%d ", result);
            
            result = a + b;
            b = result;
        }
    }
    printf("%d\n",result);
    
    return 0;
}