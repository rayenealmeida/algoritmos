#include <stdio.h>

int main() {
    int soma=0, numeros;
  
  do{
    scanf("%d", &numeros);
  
    if (numeros != 0 && numeros%2==0)
      soma += numeros;
  }
    while (numeros != 0);
  printf("%d\n", soma);
    return 0;
}