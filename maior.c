#include <stdio.h>

int main(){
    int num, maior, num2;

    scanf("%d", &num);
    scanf("%d", &maior);

    for(int i=1; i < num; i++){
        scanf("%d", &num2);
        if(num2 > maior){
            maior=num2;
        }
    }
    printf("%d\n", maior);
return 0;
}
