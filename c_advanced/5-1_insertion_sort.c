#include <stdio.h>
#define N 8

void InsertionSort(int x[], int n);

int COMP;
int MOVE;

int main(void)
{
  int data[N] = {3,2,8,5,7,1,6,4};
  int i;

  printf("\nBefore Sort\n");
  for (i=0; i<N; i++) printf("%d\t", data[i]);
  printf("\n");

  printf("\nInsertion Sort\n");
  COMP = MOVE = 0;
  InsertionSort(data, N);
  printf("Comparison: %d times  Move: %d times\n", COMP, MOVE);

  printf("\nAfter Sort\n");
  for (i=0; i<N; i++) printf("%d\t", data[i]);
  printf("\n");

  return 0;
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