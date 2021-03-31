#include<stdio.h>

int main(void){
    int hora, minutos, segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    hora = segundos / 3600;
    minutos = ((hora * 3600) / 60) / 60;
    segundos = ((hora * 3600) / 60) / 10;

    printf("Que horas sao? %dhora(s), %dminuto(s), %dsegundo(s)", hora, minutos, segundos);

    return 0;
}