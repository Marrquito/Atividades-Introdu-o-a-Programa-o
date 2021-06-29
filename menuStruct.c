/**
    Laboratorio de Introducao a Programacao para Engenharia da Computacao.
    Atividade do dia 21 de junho de 2021.

    Descricao:

    Complete esse codigo fonte para criar um programa dirigido por menus que mantem um
    cadastro de um tesouro e sua localizacao.

    O tesouro sera representado por:
      - Uma descricao (dinheiros, chocolate, feriado, ponto extra)
      - Um valor em reais
      - Uma coordenada X
      - Uma coordenada Y

    As funcionalidades do programa sao:
      - Cadastro do tesouro
      - Impressao das informacoes do tesouro cadastrado
      - Informar a distancia do tesouro a partir de um determinado ponto
        inserido pelo usuario

*/

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>

#ifdef __linux__ 
    #include <unistd.h>
    #define COMMAND "clear"
#elif _WIN32
    #include <windows.h>
    #define COMMAND "cls"
#else
    #error "OS not supported!"
#endif

#define MAX_DESCRICAO 51

typedef struct {
    char descricao[MAX_DESCRICAO];
    float valor;
    int x;
    int y;
    }tRegistro;

void ApresentaMensagem() {
    printf("Ola, esse programa vai cadastrar um tesouro e motratar sua localizacao!\n");
}

void ApresentaMenu() {
    printf("\n*** Opcoes *** \n"
                "\n1 - Cadastra"
                "\n2 - Imprime"
                "\n3 - Distancia a partir de um ponto"
                "\n5 - Sair\n");
}

tRegistro * CadastroRegistro(tRegistro *reg) {
    //ler do usuario e preencher, use prompts e scanf e preencha a estrutura no parametro
    printf("Qual sera o tesouro? ");
    scanf("%s", reg->descricao);

    printf("Qual o valor de \'%s\' ? R$ ", reg->descricao);
    scanf("%f", &reg->valor);

    printf("Agora, informe a coordenada X: ");
    scanf("%d", &reg->x);

    printf("Por ultimo, a coordenada Y: ");
    scanf("%d", &reg->y);

    puts("\nCadastrando...");

    sleep(1);

    puts("\nItem cadastrado com sucesso!");

    sleep(1);

    system(COMMAND);

    return reg;
}

void ImprimeRegistro(const tRegistro *reg) {
    //mostrar as informacoes do registro do parametro de forma organizad
    int op, sair = 1;

    menu: printf("\n\n*** Escolhas *** \n"
                "\n1 - Tesouro"
                "\n2 - Valor"
                "\n3 - Coordenadas X e Y"
                "\n4 - Descrição completa"
                "\n5 - Sair\n");

    scanf("%d", &op);

    switch(op){
        case 1:
            printf("\tNome do tesouro: %s\n", reg->descricao);
            break;
        case 2:
            printf("\tValor do tesouro: R$ %.2f\n", reg->valor);
            break;
        case 3:
            printf("\tCoordenadas: X: %d e Y: %d\n", reg->x, reg->y);
            break;
        case 4:
            printf("\tNome: %s\n"
                    "\tValor: %.2f\n"
                    "\tCoordenadas: X: %d e Y: %d\n", reg->descricao, reg->valor, reg->x, reg->y);
            break;
        case 5:
            sair = 0;
            break;
        default:
            puts("Opcao Invalida\n");
            break;
    }
    
    if(sair){
        puts("\n");

        printf("1 - Voltar ao menu de Escolhas\n"
                "2 - Voltar ao menu principal\n");
        
        scanf("%d", &op);

        if(op == 1){
            system(COMMAND);
            goto menu;
        }
    }
    
    system(COMMAND);
}

void Distancia(tRegistro reg, int *x, int *y){
	//funcao q retorna a distancia da coordenada dos parametros ate a coordenada do registro
    float distancia;

    printf("Digite sua coordenada X e Y: ");
    scanf("%d %d", x, y);

    distancia = sqrt( pow(*x - reg.x, 2) + pow(*y - reg.y, 2));

    puts("\nCalculando distancia...");
    
    sleep(2);

    system(COMMAND);
    
    if(!distancia){
        printf("\n\tVoce esta em cima do tesouro!\n");
    }else printf("\n\tDistancia ate o tesouro: %.1fm\n", distancia);
}

int main(void){
    tRegistro reg; //guarda o registro
    int opcao;
    int x, y;

    ApresentaMensagem();

    while(1){
        ApresentaMenu();
        scanf("%d", &opcao);

        if (opcao == 5){
            break;
        }

        switch(opcao){
            case 1:
                system(COMMAND);
                CadastroRegistro(&reg);
                break;
            case 2:
                system(COMMAND);
                ImprimeRegistro(&reg);
                break;
            case 3:
                system(COMMAND);
                Distancia(reg, &x, &y);
                break;
            default:
                puts("Opcao Invalida\n");
                break;
        }
    }
    
    system(COMMAND);

    puts("Adeus");

    return 0;
}