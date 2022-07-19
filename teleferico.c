#include <stdio.h>

int main() {
int C, cabines,cab, A, viagem;
  scanf("%d", &C);
  scanf("%d", &A);
  
  cabines = A / (C - 1);
  cab = A % (C -1);
  if (cab == 0){
    printf("%d\n", cabines);
  }
  else{
    printf("%d\n", cabines + 1);
  }
  return 0;
  }
  
