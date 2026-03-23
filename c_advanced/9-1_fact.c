#include <stdio.h>

int fact(int n)
{
  if (n<=1) return 1;
  return (n * fact(n-1));
}

int main(void)
{
  int n;
  printf("正の整数nを入力："); scanf("%d", &n);
  printf("fact(%d) = %d\n", n, fact(n));
  return 0;
}