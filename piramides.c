#include <stdio.h>

int main() {
    int num; 
    scanf("%d", &num);

    for(int i=1; num >= i; i++){
      for(int j=1; i>=j; j++){
        printf("%.2d ", i);
      }
      printf("\n");
    }

    printf("\n");

    for(int i=1; num >=i; i++){
      for(int j=1; i>=j; j++){
        printf("%.2d ", j);
      }
      printf("\n");
    }
  
    return 0;
}