#include <stdio.h>

int main() {
double horas;
double minutos, segundos;

  scanf("%lf", &horas);

  minutos = horas * 60;
  segundos = horas * 3600;

  printf("%0.lf\n", minutos);
  printf("%0.lf\n", segundos);
  
  return 0;
  }