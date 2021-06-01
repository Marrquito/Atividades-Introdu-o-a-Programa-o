#include <stdio.h>

#define SABRE 42
#define LIMITE 7

int main(){
    int rows, cols;
    int i, j, ii, jj;

    scanf("%d %d", &rows, &cols);

    int mtz[rows][cols];
    
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            scanf("%d", &mtz[i][j]);
        }
    }
    
    ii = jj = 0;
    
    for(i = 1; i < rows-1; i++){
        for(j = 1; j < cols-1; j++){
            if(mtz[i][j] == SABRE){
                if(mtz[i-1][j-1] == LIMITE && mtz[i-1][j] == LIMITE && mtz[i-1][j+1] == LIMITE && mtz[i][j-1] == LIMITE && mtz[i][j+1] == LIMITE && mtz[i+1][j-1] == LIMITE && mtz[i+1][j] == LIMITE && mtz[i+1][j+1] == LIMITE){
                    ii = i;
                    jj = j;
                }
            }
        }
    }

    if(ii == 0 && jj == 0){
        printf("%d %d\n", ii, jj);
    }else printf("%d %d\n", ii+1, jj+1);

    return 0;
}