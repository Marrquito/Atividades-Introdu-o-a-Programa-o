#include <stdio.h>

int main(){
    int age;

    printf("Digite sua idade: ");
    scanf("%d",&age);

    if (age <= 18){
        printf("Voce eh um jovem!");
    }else if(18 < age && age <= 60){ 
        printf("Voce eh adulto!");
    }else{
        printf("Voce eh muito velho!");
    }
    
    return 0;
}