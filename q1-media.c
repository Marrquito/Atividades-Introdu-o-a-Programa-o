#include <stdio.h>

/****
* Media(): Calcula a media de dois valores.
*
* Parametros:
*    valor1 (entrada): o primeiro valor.
*    valor2 (entrada): o segundo valor.
*
* Retorno: retorna sempre a media dos valores recebidos.
****/
float Media(int valor1, int valor2){  //a função estava retornando um (int), mudando seu tipo para float e 
    int soma = valor1 + valor2;       // adicionando o ".0" no denominador para tornar o valor inteiro 2 um decimal 2.0.
    return soma / 2.0;              // Se nao fizer isso, a soma de dois inteiros pela divisao de outro inteiro, vai
                                    // vai continuar sendo um inteiro.
}

int main(void){
    float nota1, nota2; /* os valores a serem lidos do usuario */
    float media;        /* para calcular e guardar o resultado */

    /* leitura dos valores */
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    /* calular a media a partir da chamada da funcao */
    media = Media(nota1, nota2);

    /* imprime o resultado */
    printf("A media das notas %.1f e %.1f eh %.1f\n", nota1, nota2, media);

    return 0;
}