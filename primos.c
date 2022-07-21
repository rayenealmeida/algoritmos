#include <stdio.h>

int main(){
    int qnt, num, dig;
    scanf("%d", &qnt);

    while(dig < 9){
        dig=(dig - (dig%10))/10;
    }
    for(int i=1; i < qnt; i++){
       for (int j=1; j <=dig/2; j++){
            if(dig % j ==0){
                printf("S");
            }
            else{
                printf("N");
            }
        }
    }
    return 0;
}