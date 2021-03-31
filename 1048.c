#include <stdio.h>

int main(){
    float salary, newSal, reajuste;
    int percent;

    scanf("%f", &salary);

    if(salary >= 0 && salary <= 400){
        newSal = salary + (salary*0.15);
        percent = 15;
        printf("Novo salario: %.2f\n", newSal);
        reajuste = newSal - salary;
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %d %%\n", percent);
        }else{
            if(salary > 400.01 && salary <= 800){
            newSal = salary + (salary*0.12);
            percent = 12;
            printf("Novo salario: %.2f\n", newSal);
            reajuste = newSal - salary;
            printf("Reajuste ganho: %.2f\n", reajuste);
            printf("Em percentual: %d %%\n", percent);
            }else{
                if(salary > 800.01 && salary <= 1200){
                newSal = salary + (salary*0.10);
                percent = 10;
                printf("Novo salario: %.2f\n", newSal);
                reajuste = newSal - salary;
                printf("Reajuste ganho: %.2f\n", reajuste);
                printf("Em percentual: %d %%\n", percent);
                }else{
                    if(salary > 1200.01 && salary <= 2000){
                    newSal = salary + (salary*0.07);
                    percent = 7;
                    printf("Novo salario: %.2f\n", newSal);
                    reajuste = newSal - salary;
                    printf("Reajuste ganho: %.2f\n", reajuste);
                    printf("Em percentual: %d %%\n", percent);
                    }else{
                        if(salary > 2000){
                        newSal = salary + (salary*0.04);
                        percent = 4;
                        printf("Novo salario: %.2f\n", newSal);
                        reajuste = newSal - salary;
                        printf("Reajuste ganho: %.2f\n", reajuste);
                        printf("Em percentual: %d %%\n", percent);
                    
                    }
                } 
            }  
        }
    }
    
    return 0;
}