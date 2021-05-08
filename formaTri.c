#include <stdio.h>
#include <math.h>

#ifdef __linux__ 
    #include <unistd.h>
#elif _WIN32
    #include <windows.h>
#else
    #error "OS not supported!"
#endif


int Ehtriangulo(int a, int b, int c){
    int cate, hip;

    hip = pow(a, 2);
    cate = pow(b, 2) + pow(c, 2);

    if(hip == cate){
        return 1;
    }else
        return 0;
    

}

int FormaTrianguloRetangulo(int a, int b, int c){
   int cat, hip;

    hip = pow(a, 2);
    cat = pow(b, 2) + pow(c, 2);

    if(a <= 0 && b <= 0 || a <= 0 && c <= 0 || b <= 0 && c <= 0){
        return -1;
    }else if(a <= 0){
        a = cat;
        return sqrt(a);
    }else if( b <= 0){
        b = hip - pow(c, 2);
        return sqrt(b);
    }else if(c <= 0){
        c = hip - pow(b, 2);
        return sqrt(c);
    }

}


int main(){
    int a, b, c, maior;
    int ehTri, formaTri;

    
    puts("Digite a hipotenusa A do triangulo: ");
    scanf("%d", &a);
    puts("Digite os catetos B e C do triangulo: ");
    scanf("%d %d", &b, &c);

    
    if(a > 0 && b > 0 && c > 0){
        ehTri = Ehtriangulo(a, b, c);
        if(ehTri == 1){
            puts("Forma triangulo retangulo.");
        }else{
            puts("Nao forma triangulo retangulo.");
        }
    }else if(a <= 0 || b <= 0 || c <= 0){
        formaTri = FormaTrianguloRetangulo(a, b, c);
        
        if(formaTri == -1){
            puts("Mais de um valor invalido! ERRO");
        }else {
            puts("Um valor invalido.\n");
            puts("Calculando novo valor possivel...");
            sleep(3);
            printf("\tPossivel valor para seu valor invalido: %d\n\n", formaTri);
        }

    }

    return 0;
}