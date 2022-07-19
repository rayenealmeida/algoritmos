#include <stdio.h>

int main() {
    int e, A, B, e2, C, D, e3, j5, j6, res, res2, res3, esc, esc2, esc3, vencedor1, vencedor2, vencedor3;
  scanf("%d %d %d", &e, &A, &B);
  res = (A + B) % 2 == e;
  if (res == 0){
    vencedor1 = A;
  }
  else{
    vencedor1=B;
  }
  scanf("%d %d %d", &e2, &C, &D);
  res = (C + D) % 2 == e2;
  if (res2 == 0){
    vencedor2 = C;
  }
  else{
    vencedor2=D;
  }
  scanf("%d %d %d", &e3, &j5, &j6);

  res3 = (vencedor1 + vencedor2) % 2 == e3;
  if (res3 == 0){
    vencedor3 = vencedor1;
  }
  else{
    vencedor3 = vencedor2;
  }

printf("%d\n", vencedor3);  
    return 0;
  
}
  