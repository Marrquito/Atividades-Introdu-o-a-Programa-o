#include <stdio.h>

int main(){
    char idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 20){
        printf("Voce ainda nao chegou a idade adulta.\n");
    }else{
        printf("Voce eh chegou a idade adulta ha %d ano(s).\n", idade - 20);
    }

    return 0;
}