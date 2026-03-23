#include <stdio.h>
#include <stdlib.h>
#define N 1000

void GenerateRandomData(int seed, int range, int data[], int num);
void InsertionSort(int x[], int n);
void QuickSort(int x[], int min, int max);

int COMP;
int MOVE;
int SWAP;

int main(void)
{
  int data[N];
  int i, seed;

  printf("乱数のタネを入力："); scanf("%d", &seed);
  GenerateRandomData(seed, N, data, N);

  printf("\n=QuickSort=\n");
  COMP = SWAP = 0;
  QuickSort(data, 0, N-1);
  printf("Comparison: %d times, Move: %d times\n", COMP, SWAP*3);

  return 0;
}

void GenerateRandomData(int seed, int range, int data[], int num)
{
  int i;

  srand(seed);
  for (i=0; i<num; i++) {
    data[i] = rand() % range + 1;
    printf("%d ", data[i]);
  }
  printf("\n");

  return;
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