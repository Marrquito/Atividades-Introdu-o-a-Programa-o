#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifdef __linux__ 
    #include <unistd.h>
    #define COMMAND "clear"
#elif _WIN32
    #include <windows.h>
    #define COMMAND "cls"
#else
    #error "OS not supported!"
#endif

#define MAX_NAME 40
#define MAX_DISCIPLINA 50
#define MAX_ALUNOS 30

typedef struct{
    int matricula;
    char name[MAX_NAME];
    float nota1, nota2, nota3;
    float media, notaRec;
    int situacao;
}discentes;

void bV(){
    puts("\tBem-vindo(a) ao cadastramento de discentes.\n");
}

void ApresentaMenu() {
    system(COMMAND);
    printf("*** Opçoes *** \n"
                "\n1 - Cadastrar disciplina"
                "\n2 - Cadastrar alunos"
                "\n3 - Ver alunos cadastrados"
                "\n4 - Cadastrar notas"
                "\n5 - Ver tabela de notas completa"
                "\n6 - Gerar tabela de notas em Arquivo"
                "\n7 - Salvar dados"
                "\n8 - Carrega dados salvos"
                "\n0 - Sair\n");
}

void cadastraDisciplina(char *disciplina, int *qtdAlunos){

    printf("Qual o nome da disciplina que voce leciona? ");
    scanf("%[^\n]", disciplina);

    printf("Ok, agora digite o numero de discentes que \'%s\' possui. ", disciplina);
    scanf("%d%*c", qtdAlunos);

    printf("\nCadastrando...\n");
    sleep(1);
    printf("Disciplina cadastrada!\n");
    sleep(1);
}

void cadastraAluno(discentes aluno[], int alunos){
    int i;
    printf("\n\tCadastramento de aluno no sistema\n\n");

    for(i = 0; i < alunos; i++){
        printf("Digite o NOME do aluno #%d: ", i+1);
        scanf("%[^\n]", aluno[i].name);
        printf("Digite a MATRICULA do aluno #%d: ", i+1);
        scanf("%d%*c", &aluno[i].matricula);
    }
}

void mostraAluno(discentes aluno[], const char disciplina[], const int qtdAlunos){
    int j = 10;
    for(int i = 0; i < 11; i++){
        printf("----------------------------------------------------\n");
        printf("Disciplina: %s\n", disciplina);
        printf("----------------------------------------------------\n");
        printf("Matricula        NOME\n");
        printf("----------------------------------------------------\n");
        for(int i = 0; i < qtdAlunos; i++){
            printf("%d           %s\n", aluno[i].matricula, aluno[i].name);
        }
        printf("Timer: %d\"\n", j--);
        sleep(1);
        system(COMMAND);
    }
}

void cadastraNota(discentes aluno[], int qtdAlunos){
    printf("\tCadastramento de nota de aluno\n\n");

    printf("Digite as 3 notas do aluno com um espaço entre cada nota.\n");
    for(int i = 0; i < qtdAlunos; i++){
        printf("#%d Aluno: %s - %d. Notas: ", i+1, aluno[i].name, aluno[i].matricula);
        scanf("%f %f %f", &aluno[i].nota1, &aluno[i].nota2, &aluno[i].nota3);

        aluno[i].media = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3) / 3;
    }

    for(int i = 0; i < qtdAlunos; i++){
        if(aluno[i].media >= 4 && aluno[i].media < 7){
            printf("Aluno \"%s\" em recuperaçao, media atual -> %.1f! Insira a nota da prova final: ", aluno[i].name, aluno[i].media);
            scanf("%f", &aluno[i].notaRec);
            if( ( ((aluno[i].notaRec * 4) + (aluno[i].media * 6) ) / 10 ) >= 5){
                aluno[i].situacao = 1;
                aluno[i].media = ( ((aluno[i].notaRec * 4) + (aluno[i].media * 6) ) / 10 );
            }else{
                aluno[i].situacao = 0;
                aluno[i].media = ( ((aluno[i].notaRec * 4) + (aluno[i].media * 6) ) / 10 );
            } 
        }else if(aluno[i].media < 4){
            aluno[i].situacao = 0;
        }else{
            aluno[i].situacao = 1;
            aluno[i].notaRec = 0;
        } 
    }

    printf("Cadastro bem sucedido!\n");
    sleep(1);
}

void mostraNotas(discentes aluno[], const char disciplina[], const int qtdAlunos){
    int j = 10;
    for(int i = 0; i < 11; i++){
        printf("--------------------------------------------------------------------------------------------------------------------------------\n");
        printf("Disciplina: %s\n", disciplina);
        printf("--------------------------------------------------------------------------------------------------------------------------------\n");
        printf(" Matricula\tNome\t\t\tNota 1\tNota 2\tNota 3\t\tRec\tMedia\t\tSituacao\n");
        printf("--------------------------------------------------------------------------------------------------------------------------------\n");
        for(int i = 0; i < qtdAlunos; i++){
            printf(" %d\t\t%s\t\t%.1f\t%.1f\t%.1f\t\t%.1f\t%.1f\t\t%s\n", aluno[i].matricula, aluno[i].name, aluno[i].nota1, aluno[i].nota2, aluno[i].nota3, aluno[i].notaRec == -1 ? '-' : aluno[i].notaRec  ,aluno[i].media ,aluno[i].situacao ? "Aprovado" : "Reprovado" );
        }
        printf("--------------------------------------------------------------------------------------------------------------------------------\n");

        printf("Timer: %d\"\n", j--);
        sleep(1);
        system(COMMAND);
    }
}

void RelatorioEmArquivo(const char *arq, const char disciplina[], discentes aluno[], const int qtdAlunos){
    FILE *fp;
    int i;
    
    fp = fopen(arq, "w");
    if(fp == NULL){
        printf("Erro ao criar o arquivo de relatorio \'%s\'\n", arq);
        return;
    }

    fprintf(fp, "--------------------------------------------------------------------------------------------------------------------------------\n");
    fprintf(fp, "Disciplina: %s\n", disciplina);
    fprintf(fp, "--------------------------------------------------------------------------------------------------------------------------------\n");
    fprintf(fp, " Matricula\tNome\t\tNota 1\tNota 2\tNota 3\t\tRec\t\tMedia\t\tSituacao\n");
    fprintf(fp, "--------------------------------------------------------------------------------------------------------------------------------\n");
    for(int i = 0; i < qtdAlunos; i++){
        fprintf(fp, " %d\t\t%s\t\t%.1f\t\t%.1f\t\t%.1f\t\t\t%.1f\t\t%.1f\t\t\t%s\n", aluno[i].matricula, aluno[i].name, aluno[i].nota1, aluno[i].nota2, aluno[i].nota3, aluno[i].notaRec == -1 ? '-' : aluno[i].notaRec  ,aluno[i].media ,aluno[i].situacao ? "Aprovado" : "Reprovado" );
    }
    fprintf(fp, "--------------------------------------------------------------------------------------------------------------------------------\n");

    if(fclose(fp) == 0){
        puts("Relatorio criado com sucesso!");
    }else puts("Nao foi possivel criar relatorio!");

    sleep(1);
}
/* 
void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
} */

void SalvarDados(const discentes aluno[], const int qtdAlunos, char disciplina[]){
    FILE *fp;
    int i;

    fp = fopen("notas.dat", "w");
    if(fp == NULL){
        printf("Erro ao criar arquivo de dados\n");
        return;
    }else{
        printf("Arquivo de dados criado com sucesso!\n");
    }

    fprintf(fp, "%s\n", disciplina);
    for(i = 0; i < qtdAlunos; i++){
        fprintf(fp, "%d\n%s\n%f %f %f %f %f\n%d\n", aluno[i].matricula, aluno[i].name, aluno[i].nota1, 
        aluno[i].nota2, aluno[i].nota3, aluno[i].media, aluno[i].notaRec, aluno[i].situacao);
    }

    if(fclose(fp) == 0) {
        printf("Dados salvos com sucesso!\n");
    }else{
        printf("Erro ao salvar dados!");
    }

    sleep(1);
}

void CarregaDados(discentes aluno[], int *qtdAlunos, char disciplina[]){
    FILE *fp;
    char str[101];

    fp = fopen("notas.dat", "r");
    if(fp == NULL){
        printf("Erro ao carregar dados\n");
        return;
    }
    
    fscanf(fp, "%[^\n]", disciplina);
    while(1){
        printf("aq %d\n", *qtdAlunos);
        fscanf(fp, "%d%*c", &aluno[*qtdAlunos].matricula);
        if(feof(fp)){
            break;
        }
        fscanf(fp, "%[^\n]", aluno[*qtdAlunos].name);
        fscanf(fp, "%f %f %f %f %f",  &aluno[*qtdAlunos].nota1, &aluno[*qtdAlunos].nota2,
         &aluno[*qtdAlunos].nota3, &aluno[*qtdAlunos].media, &aluno[*qtdAlunos].notaRec);
        fscanf(fp, "%d", &aluno[*qtdAlunos].situacao);
        *qtdAlunos += 1;
    }

    if(fclose(fp) == 0){
        printf("Dados carregados com sucesso!\n");
    }else printf("Erro ao carregar dados!\n");

    sleep(1);
}

int main(){
    int op, qtdAlunos = 0;
    char disciplina[MAX_DISCIPLINA];
    discentes aluno[MAX_ALUNOS];
    char arq[31];

    system(COMMAND);

    bV();
    sleep(1);

    while(1){
        ApresentaMenu();
        scanf("%d%*c", &op);

        if (op == 0){
            break;
        }

        switch(op){
            case 1:
                system(COMMAND);
                cadastraDisciplina(disciplina, &qtdAlunos);
                break;
            case 2:
                system(COMMAND);
                cadastraAluno(aluno, qtdAlunos);
                break;
            case 3:
                system(COMMAND);
                mostraAluno(aluno, disciplina, qtdAlunos);
                break;
            case 4:
                system(COMMAND);
                cadastraNota(aluno, qtdAlunos);
                break;
            case 5:
                system(COMMAND);
                mostraNotas(aluno, disciplina, qtdAlunos);
                break;
            case 6:
                system(COMMAND);
                printf("Digite o nome do arquivo para gerar o relatorio: ");
                scanf("%s", arq);
                RelatorioEmArquivo(arq, disciplina, aluno, qtdAlunos);
                break;
            case 7:
                system(COMMAND);
                SalvarDados(aluno, qtdAlunos, disciplina);
                break;
            case 8:
                system(COMMAND);
                CarregaDados(aluno, &qtdAlunos, disciplina);
                break;
            default:
                puts("Opcao Invalida\n");
                sleep(1);
                break;
        }
    }

    system(COMMAND);

    return 0;
}