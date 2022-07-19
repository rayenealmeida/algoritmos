#include <stdio.h>

int main() {
int A, B, pedra, papel, tesoura, lagarto, spock;
  
  pedra = 0;
  papel = 1;
  tesoura = 2;
  lagarto = 3;
  spock = 4;
  
  scanf("%d", &A);
  scanf("%d", &B);
  if(A == B){
    printf("empate\n");
  }
if (A == pedra && B == tesoura){
  printf("A");
}
  else{
    
    if(A == tesoura && B == pedra)
    printf("B");
  }
  if (A == tesoura && B == papel){
  printf("A");
}
  else{
    if(A == papel && B == tesoura)
    printf("B");
  }
  if (A == papel && B == pedra){
  printf("A");
}
  else{
    if (A == pedra && B == papel)
    printf("B");
  }
  if (A == pedra && B == lagarto){
  printf("A");
}
  else{
    if (A == lagarto && B == pedra)
    printf("B");
  }
  if (A == lagarto && B == spock){
  printf("A");
}
  else{
    if (A == spock && B == lagarto)
    printf("B");
  }
  if (A == spock && B == tesoura){
  printf("A");
}
  else{
    if (A == tesoura && B == spock)
    printf("B");
  }
  if (A == tesoura && B == lagarto){
  printf("A");
}
  else{
   if (A == lagarto && B == tesoura)
    printf("B");
  }
  if (A == lagarto && B == papel){
  printf("A");
}
  else{
    if (A == papel && B == lagarto)
    printf("B");
  }
  if (A == papel && B == spock){
  printf("A");
}
  else{
    if (A == spock && B == papel)
    printf("B");
  }
  
  if (A == spock && B == pedra){
  printf("A");
}
  else{
    if (A == pedra && B == spock)
    printf("B");
  }
  return 0;
  }