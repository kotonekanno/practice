#include <stdio.h>

int GCD(int A, int B)
{
  int C;
  C = A % B;
  if (C==0) return B;
  return GCD(B, C);
}

int main()
{
  int a, b;
  printf("値1："); scanf("%d", &a);
  printf("値2："); scanf("%d", &b);
  printf("%d と %d の最大公約数は %d\n", a, b, GCD(a, b));
  return 0;
}