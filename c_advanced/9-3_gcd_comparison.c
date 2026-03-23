#include <stdio.h>
int COUNT;

int GCD(int A, int B)
{
  if (B==0) return A;
  COUNT++;
  return GCD(B, A%B);
}

int GCD_primitive(int A, int B)
{
  int i, i0;
  
  if (A<B) i0 = A;
  else i0=B;

  for (i=i0; i>=1; i--) {
    COUNT = COUNT+2;
    if ((A%i==0) && (B%i==0)) return i;
  }
}

int main()
{
  int a, b;
  printf("値1："); scanf("%d", &a);
  printf("値2："); scanf("%d", &b);

  COUNT = 0;
  printf("\nユークリッドの互除法\n");
  printf("%d と %d の最大公約数は %d", a, b, GCD(a, b));
  printf("（剰余演算回数 %d）\n", COUNT);

  COUNT = 0;
  printf("\nしらみつぶしの方法\n");
  printf("%d と %d の最大公約数は %d", a, b, GCD_primitive(a, b));
  printf("（剰余演算回数 %d）\n", COUNT);

  return 0;
}