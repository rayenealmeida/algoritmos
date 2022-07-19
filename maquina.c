#include <stdio.h>

int main() {

  int valor;
  int moedas;
  int troco;
  int y500, y100, y50, y10, y5, y1;
  int ry500, ry100, ry50, ry10, ry5, ry1;

  
  scanf("%d", &valor);
  scanf("%d", &moedas);

  troco = moedas - valor;
    ry500= troco % 500;
    y500= (troco - ry500)/ 500;
    printf("%d\n", y500);

    ry100= troco % 100;
    y100= (ry500 - ry100)/ 100;
    printf("%d\n", y100);

    ry50= troco % 50;
    y50= (ry100 - ry50)/ 50;
    printf("%d\n", y50);

    ry10= troco % 10;
    y10= (ry50 - ry10)/ 10;
    printf("%d\n", y10);

    ry5= troco % 5;
    y5= (ry10 - ry5)/ 5;
    printf("%d\n", y5);

    ry1= troco % 1;
    y1= (ry5 - ry1)/ 1;
    printf("%d\n", y1);
    

  
  return 0;
  }