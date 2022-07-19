#include <stdio.h>

int main() {
unsigned long long int cpf;
int inteiroMenor, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, digitos, valido, soma, soma2;
int m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11;

  scanf("%llu", &cpf);
  
  n1= cpf / 10000000000 % 10;
  n2= cpf / 1000000000 % 10;
  n3= cpf / 100000000 % 10;
  n4= cpf / 10000000 % 10;
  n5= cpf / 1000000 % 10;
  n6= cpf / 100000 % 10;
  n7= cpf / 10000 % 10;
  n8= cpf / 1000 % 10;
  n9= cpf / 100 % 10;
  n10= cpf / 10 % 10;
  n11= cpf % 10;

  m11 = n1 * 2;
  m10 = n2 * 3;
  m9 = n3 * 4;
  m8 = n4 * 5;
  m7 = n5 * 6;
  m6 = n6 * 7;
  m5 = n7 * 8;
  m4 = n8 * 9;
  m3 = n9 * 10;
  m2 = n10 * 11;
  m1 = n11 * 12;
  
    
soma = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + m11;

  if (soma < 2){
    soma = 0;
  }
  else {
    soma = 11 - soma;
  }
 soma2 = ((n1*13)+(n2*12)+(n3*11)+(n4*10)+(n5*9)+(n6*8)+(n7*7)+(n8*6)+(n9*5)+(n10 * 4) + (n11 * 3)+(soma*2))%11;
  if (soma2 < 2){
    soma2 = 0;
  }
else {
  soma2 = 11 - soma2;
}

digitos = soma * 10 + soma2;
valido = cpf * 100 + digitos;

if (valido == digitos){
  printf("valido");
}
else {
  printf("invalido");
}  
  return 0;
  }