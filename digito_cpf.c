#include <stdio.h>

int main() {
int digito1, digito2, somatorio1, somatorio2, res;
long int cpf;

  scanf("%ld", &cpf);

  somatorio1= 2 * (cpf % 10);
  somatorio2= 3 * (cpf % 10);
  cpf /= 10;
  somatorio1 += 3 * (cpf % 10);
  somatorio2 += 4 * (cpf % 10);
  cpf /= 10;
  somatorio1 += 4 * (cpf % 10);
  somatorio2 += 5 * (cpf % 10);
  cpf /= 10;
  somatorio1 += 5 * (cpf % 10);
  somatorio2 += 6 * (cpf % 10);
  cpf /= 10;
  somatorio1 += 6 * (cpf % 10);
  somatorio2 += 7 * (cpf % 10);
  cpf /= 10;
  somatorio1 += 7 * (cpf % 10);
  somatorio2 += 8 * (cpf % 10);
  cpf /= 10;
  somatorio1 += 8 * (cpf % 10);
  somatorio2 += 9 * (cpf % 10);
  cpf /= 10;
  somatorio1 += 9 * (cpf % 10);
  somatorio2 += 10 * (cpf % 10);
  cpf /= 10;
  somatorio1 += 10 * (cpf % 10);
  somatorio2 += 11 * (cpf % 10);
  cpf /= 10;

  res = somatorio1 % 11;

  if (res == 0 || res ==1){
    digito1 = 0;
  }
  else {
    digito1 = 11 - res;
  }

  somatorio2 += 2 * digito1;
  res = somatorio2 % 11;

  if (res == 0 || res == 1){
    digito2 = 0;
  }
  else{
    digito2 = 11 - res;
  }

  printf("%d %d\n", digito1, digito2);
  
  return 0;
  }