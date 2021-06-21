#include <stdio.h>
#include <string.h>

struct produtos{
    char item[55];
    float preco;
};

typedef struct produtos Produtos;

int main(){
    int casos, products, qtdProducts;
    char fruta[55];
    int i, nFruta, j;
    double total = 0;

    scanf("%d", &casos);

    while(casos--){
        scanf("%d", &products);

        Produtos produto[products];
        
        for(i = 0; i < products; i++){
            scanf("%s %f", produto[i].item, &produto[i].preco);
        }

        scanf("%d", &qtdProducts);

        for(i = 0; i < qtdProducts; i++){
            scanf("%s %d", fruta, &nFruta);
            for(j = 0; j < products; j++){
                if(!strcmp(fruta, produto[j].item)){
                    total += produto[j].preco * nFruta;
                }
            }
        }

        printf("R$ %.2lf\n", total);
        total = 0;
    }

    return 0;
}