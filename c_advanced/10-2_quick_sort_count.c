#include <stdio.h>
#define N 8

void QuickSort(int x[], int min, int max);
int COMP, SWAP;

int main(void) {
  int i;
  int data[N] = {30,20,80,50,70,10,60,40};

  printf("\nBefore Sort\n");
  for (i=0; i<N; i++) printf("%d\t", data[i]);
  printf("\n");

  COMP = SWAP = 0;
  QuickSort(data, 0, N-1);
  printf("\nComparison: %d times, Swap: %d times\n", COMP, SWAP);

  printf("\nAfter Sort\n");
  for (i=0; i<N; i++) printf("%d\t", data[i]);
  printf("\n");

  return 0;
}

void QuickSort(int x[], int min, int max)
{
  int p, i, j, tmp;

  if (min >= max) return;

  p = (x[min] + x[max]) / 2;    // ピボットの設定
  i = min; j = max;
  while (1) {
    while (x[i] < p) {i++; COMP++;}
    COMP++;
    while (x[j] > p) {j--; COMP++;}
    COMP++;
    if (i >= j) break;
    tmp = x[i]; x[i] = x[j]; x[j] = tmp; SWAP++;
    i++; j--;
  }

  QuickSort(x, min, i-1);
  QuickSort(x, j+1, max);

  return;
}