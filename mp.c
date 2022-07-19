#include <stdio.h>

int main() {
  double x, x1, x2;
  double p1, p2;
  double s;

  scanf("%lf %lf", &x, &x2);
  scanf("%lf %lf", &p1, &p2);
  
  s = p1 +p2;
  x1= (s * x - x2 * p2) / p1;

  printf("%lf\n", x1);
    
    return 0;
}