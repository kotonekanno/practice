
#include <stdio.h>
#define N 8

void SelectionSort(int x[], int n);
void InsertionSort(int x[], int n);

int COMP, SWAP, MOVE;

int main(void)
{
  int i;
  int data1[N] = {3,2,8,5,7,1,6,4};
  int data2[N];
  for (i=0; i<N; i++) data2[i] = data1[i];

  printf("\nBefore Sort\n");
  for (i=0; i<N; i++) printf("%d\t", data1[i]);
  printf("\n");

  printf("\nSelection Sort\n");
  COMP = SWAP = 0;
  SelectionSort(data1, N);
  printf("Compare: %d times, Swap: %d times (Move: %d times)\n", COMP, SWAP, SWAP * 3);

  printf("\nInsertion Sort\n");
  COMP = SWAP = 0;
  InsertionSort(data2, N);
  printf("Compare: %d times, Move: %d times\n", COMP, MOVE);

  printf("\nAfter Sort\n");
  for (i=0; i<N; i++) printf("%d\t", data1[i]);
  printf("\n");

  return 0;
}

void SelectionSort(int x[], int n)
{
  int i, j, max_id;
  int tmp;

  for (j=n-1; j>0; j--) {
    max_id = 0;
    for (i=1; i<=j; i++) {
      COMP++;
      if (x[max_id] < x[i]) max_id = i;
    }
    tmp = x[j];
    x[j] = x[max_id];
    x[max_id] = tmp;
    SWAP++;
  }
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
  return;
}