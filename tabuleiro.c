#include <stdio.h>

int main(){
    int linhas, colunas;
    scanf("%d", &linhas);

    for(int i=0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("[%d, %d]", i, j);
        }
    }

    return 0;
}