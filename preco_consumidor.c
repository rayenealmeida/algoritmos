#include <stdio.h>

int main() {
    double pf, custo, plucro, pimpostos, impostos, lucro;

  scanf("%lf", &custo);
  scanf("%lf %lf", &plucro, &pimpostos);

  impostos = (custo * plucro) / 100;
  lucro = (custo * pimpostos) / 100;
  pf = custo + impostos + lucro;

  printf("%0.2lf\n", pf);
}
  