#include <stdio.h>
#define N 8

void BubbleSort(int x[], int n);
void CombSort(int x[], int n);

int main(void)
{
  int data[N] = {3,2,8,5,7,1,6,4};
  int i;

  printf("\nBefore sort\n");
  for (i=0; i<N; i++) printf("%d\t", data[i]);
  printf("\n");

  CombSort(data, N);

  printf("\nAfter sort\n");
  for (i=0; i<N; i++) printf("%d\t", data[i]);
  printf("\n");

  return 0;
}

void CombSort(int x[], int n)
{
  int i, j, tmp, gap, flg = 1;

  gap = n;
  while (gap > 1 || flg == 1) {
    gap = gap * 10 / 13;
    if (gap < 1) gap = 1;
    flg = 0;
    for (i=0; i+gap < n; i++) {
      if (x[i] > x[i+gap]) {
        tmp = x[i];
        x[i] = x[i+gap];
        x[i+gap] = tmp;
        flg = 1;
      }
    }
  }
  return;
}