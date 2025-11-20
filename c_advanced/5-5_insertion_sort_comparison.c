#include <stdio.h>
#include <stdlib.h>
#define N 1000

void GenerateRandomData(int seed, int range, int data[], int num);
void InsertionSort(int x[], int n);
void ShellSort(int x[], int n);

int COMP;
int MOVE;

int main(void)
{
  int data1[N], data2[N];
  int i, seed;

  printf("Enter the seed of random numbers: "); scanf("%d", &seed);
  GenerateRandomData(seed, N, data1, N);
  for (i=0; i<N; i++) data2[i] = data1[i];

  printf("\nInsertion Sort\n");
  COMP = MOVE = 0;
  InsertionSort(data1, N);
  printf("Comparison: %d times  Move: %d times", COMP, MOVE);

  printf("\nShell Sort\n");
  COMP = MOVE = 0;
  ShellSort(data2, N);
  printf("Comparison: %d times  Move: %d times", COMP, MOVE);

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

void InsertionSort(int x[], int n)
{
  int i, j, tmp;

  for(j=1; j<n; j++) {
    tmp = x[j]; MOVE++;
    for (i=j-1; i>=0; i--) {
      COMP++;
      if (x[i] > tmp) {x[i+1] = x[i]; MOVE++;}
      else break;
    }
    x[i+1] = tmp; MOVE++;
  }
}

void ShellSort(int x[], int n)
{
  int i, j, k, tmp, gap;

  gap = n / 2;
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
    gap = gap / 2;
  }
  return;
}