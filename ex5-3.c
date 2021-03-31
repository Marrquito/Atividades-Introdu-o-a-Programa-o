#include <stdio.h>

int main(){
    float t1, t2, t3, p1, p2, p3, m1, m2, m3, mg;

    printf("Digite suas 3 notas da disciplica TEORICA: ");
    scanf("%f %f %f", &t1, &t2, &t3);
    printf("Agora, digite suas 3 notas da disciplina PRATICA: ");
    scanf("%f %f %f", &p1, &p2, &p3);

    if(t1 > p1){
        m1 = ( (6*t1) + (4*p1) ) / 10.0;
        printf("Sua media entre as primeiras notas foi: %.1f\n", m1);
    }else{
        m1 = ((6*p1) + (4*t1)) / 10;
        printf("Sua media entre as primeiras notas foi: %.1f\n", m1);
    }

    if(t2 > p2){
        m2 = ( (6*t2) + (4*p2) ) / 10.0;
        printf("Sua media entre as segundas notas foi: %.1f\n", m2);
    }else{
        m2 = ((6*p2) + (4*t2)) / 10;
        printf("Sua media entre as segundas notas foi: %.1f\n", m2);
    }

    if(t3 > p3){
        m3 = ( (6*t3) + (4*p3) ) / 10.0;
        printf("Sua media entre as terceiras notas foi: %.1f\n", m3);
    }else{
        m3 = ((6*p3) + (4*t3)) / 10;
        printf("Sua media entre as terceiras notas foi: %.1f\n", m3);
    }

    mg = (m1 + m2 + m3) / 3;
    printf("Sua media geral foi: %.1f\n", mg);

    if(mg >= 9 && mg <= 10){
        printf("Seu conceito foi A, parabens\n");
    }else if(mg >= 8 && mg < 9){
        printf("Seu conceito foi B, parabens\n");
    }else if(mg >= 7 && mg < 8){
        printf("Seu conceito foi C\n");
    }else if(mg >= 6 && mg < 7){
        printf("Seu conceito foi D\n");    
    }else if(mg >= 5 && mg < 6){
        printf("Seu conceito foi E, estudar mais!\n");    
    }else if(mg <5 ){
        printf("Seu conceito foi F, estudar mais!\n");
    }

    return 0;
}