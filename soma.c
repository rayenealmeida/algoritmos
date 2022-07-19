#include <stdio.h>

int main(){
    int n1, n2, soma=0;

    scanf("%d", &n1);

    for(int i=0; i <= n1; i++){
        scanf("%d", &n2);
        soma += n2;
    }
    printf("%d\n", soma);
}