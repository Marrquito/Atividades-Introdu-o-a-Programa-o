#include <stdio.h>

void ExibeMenu(){
    printf("--------------Menu--------------\n"
           "\t1 - Soma\n"
           "\t2 - Subtracao\n"
           "\t3 - Multiplicacao\n"
           "\t4 - Divisao\n"
           "\t5 - Sair\n");
}

int Soma(int a, int b){
    return a + b;
}

int Subtracao(int a, int b){
    return a - b;
}

int Multiplicacao(int a, int b){
    return a * b;
}

float Divisao(float a, float b){
    return a / b;
}

int main(void){
    int op, x, y, res;
    float a, b, resf;

    puts("Essa eh uma calculadora.");
    while(1){
        puts("\n");
        ExibeMenu();
        printf("Escolha uma opcao: ");
        scanf("%d", &op);

        if (op == 5){
            break;
        }

        if(op != 4){
            printf("Digite x: ");
            scanf("%d", &x);
            printf("Digite y: ");
            scanf("%d", &y);            
        }else{
            printf("Digite a: ");
            scanf("%f", &a);
            printf("Digite b: ");
            scanf("%f", &b);            

        }

        switch(op){
            case 1:
                res = Soma(x, y);
                printf("Resultado: %d + %d = %d\n", x, y, res);
                break;
            case 2:
                res = Subtracao(x, y);
                printf("Resultado: %d - %d = %d\n", x, y, res);
                break;
            case 3:
                res = Multiplicacao(x, y);
                printf("Resultado: %d X %d = %d\n", x, y, res);
                break;
            case 4:
                resf = Divisao(a, b);
                printf("Resultado: %.1f / %.1f = %.1f\n", a, b, resf);
                break;
            default:
                puts("Opcao invalida.");
        }

    }

    puts("Obrigado.");
    return 0;
}