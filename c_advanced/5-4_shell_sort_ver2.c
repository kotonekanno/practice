#include <stdio.h>
#define N 8

void ShellSort_ver2(int x[], int n);

int COMP;
int MOVE;

int main(void)
{
  int data[N] = {3,2,8,5,7,1,6,4};
  int i;

  printf("\nBefore Sort\n");
  for (i=0; i<N; i++) printf("%d\t", data[i]);
  printf("\n");

  printf("\nShell Sort version 2\n");
  COMP = MOVE = 0;
  ShellSort_ver2(data, N);
  printf("Comparison: %d times  Move: %d times\n", COMP, MOVE);

  printf("\nAfter Sort\n");
  for (i=0; i<N; i++) printf("%d\t", data[i]);
  printf("\n");

  return 0;
}

void ShellSort_ver2(int x[], int n)
{
  int i, j, k, tmp, gap;

  gap = 1;
  while (n > gap) gap = 3 * gap + 1;
  gap = (gap - 1) / 3;

  while (gap > 0) {
    for (k=0; k<gap; k++) {
      for (j=k+gap; j<n; j=j+gap) {
        tmp = x[j]; MOVE++;
        for (i=j-gap; i>=0; i=i-gap) {
          COMP++;
          if (x[i] > tmp) {x[i+gap] = x[i]; MOVE++;}
          else break;
        }
        x[i+gap] = tmp; MOVE++;
      }
    }
    gap = (gap - 1) / 3;
  }
  return;
}