#include <stdio.h>

int main() {
  double pf, taxa, lucro, impostos, custo_carro;

  scanf("%lf", &pf);
  scanf("%lf %lf", &lucro, &impostos);

  taxa = (lucro + impostos) / 100 + 1;
  custo_carro = (pf / taxa);

  printf("%lf\n", custo_carro);
  

return 0;
  
}
  