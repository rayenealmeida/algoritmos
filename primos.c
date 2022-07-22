#include <stdio.h>

int main(){
    int qnt, num, dig;

    scanf("%d", &qnt);

    for(int i=0; i <= qnt; i++){

        scanf("%d", &num);
        if( num % i == 0){
//separando os digitos do numero inteiro
            while(dig < 9){
                dig=(dig - (dig%10))/10;
                
            }    
        }
        if(dig % i == 0){
                    printf("N\n");
                }
        else{
                printf("S\n");
        }
    }
    return 0;
}