#include <stdio.h>

int main() {
    int soma=0, soma2=0, numeros;
  
  do{
    scanf("%d", &numeros);
  
    if (numeros != 0 && numeros%2==0)
      soma += numeros;
    else{
      if(numeros != 0 && numeros%2 != 0)
      soma2 += numeros;
    }
  }
    while (numeros != 0);
  
  printf("%d %d\n", soma, soma2);
    return 0;
}