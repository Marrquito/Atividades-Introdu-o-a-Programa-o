#include <stdio.h>

int main(){
    int tempo, horas, minutos, segundos;

    printf("----------------------------------------\n");
    printf("                TEMPO                   \n");
    printf("----------------------------------------\n");


    printf("Informe um tempo em segundos: ");
    scanf("%d", &tempo);

    horas = tempo / 3600;
    tempo = tempo % 3600;
    minutos = tempo / 60;
    tempo = tempo % 60;
    segundos = tempo / 1 ;
    tempo = tempo % 1 ;

    printf("Seu tempo digitado foi: %d hora (s) %d minuto (s) %d segundo (s)", horas, minutos, segundos);


    return 0;
}