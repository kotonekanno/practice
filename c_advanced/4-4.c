#include <stdio.h>
#include <stdlib.h>
#define N 100

void GenerateRandomData(int seed, int range, int data[], int num);
void BubbleSort(int x[], int n);
void CombSort(int x[], int n);

int COMP;
int SWAP;

int main(void)
{
  int data1[N], data2[N];
  int i, seed;

  printf("Enter the seed of random numbers: ");
  scanf("%d", &seed);
  GenerateRandomData(seed, N, data1, N);
  for (i=0; i<N; i++) data2[i] = data1[i];

  printf("\n== Bubble sort ==\n");
  COMP = SWAP = 0;
  BubbleSort(data1, N);
  printf("Comparison: %d times, Swapping: %d times\n", COMP, SWAP);

  printf("\n== Comb sort ==\n");
  COMP = SWAP = 0;
  CombSort(data2, N);
  printf("Comparison: %d times, Swapping: %d times\n", COMP, SWAP);

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

void BubbleSort(int x[], int n)
{
  int i, j, tmp;

  for (j=n-1; j>0; j--) {
    for (i=0; i<j; i++) {
      if (x[i] > x[i+1]){
        tmp = x[i];
        x[i] = x[i+1];
        x[i+1] = tmp;
        SWAP++;
      }
      COMP++;
    }
  }
  return;
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
        SWAP++;
      }
      COMP++;
    }
  }
  return;
}