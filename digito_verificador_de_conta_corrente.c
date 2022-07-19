#include <stdio.h>

int main() {
int Digitos, n1, n2, n3, n4, n5, n6, m1, m2, m3, m4, m5, m6, somatorio, div, sub;

  scanf("%d", &Digitos);
  
  n1= Digitos / 100000 % 10;
  n2= Digitos / 10000 % 10;
  n3= Digitos / 1000 % 10;
  n4= Digitos / 100 % 10;
  n5= Digitos / 10 % 10;
  n6= Digitos % 10;
  
  m1 = n6 * 2;
  m2 = n5 * 3;
  m3 = n4 * 4;
  m4 = n3 * 5;
  m5 = n2 * 6;
  m6 = n1 * 7;
  
  
  
  somatorio = m1 + m2 + m3 + m4 + m5 + m6;
  div = somatorio % 11;
  sub = 11 - div;

  printf("%d", sub);
  
  
  return 0;
  }