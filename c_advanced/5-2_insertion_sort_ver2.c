#include <stdio.h>
#define N 8

void InsertionSort_ver2(int x[], int n);

int COMP;
int MOVE;

int main(void)
{
  int data[N] = {3,2,8,5,7,1,6,4};
  int i;

  printf("\nBefore Sort\n");
  for (i=0; i<N; i++) printf("%d\t", data[i]);
  printf("\n");

  printf("\nInsertion Sort version 2\n");
  COMP = MOVE = 0;
  InsertionSort_ver2(data, N);
  printf("Comparison: %d times  Move: %d times\n", COMP, MOVE);

  printf("\nAfter Sort\n");
  for (i=0; i<N; i++) printf("%d\t", data[i]);
  printf("\n");

  return 0;
}

void InsertionSort_ver2(int x[], int n)
{
  int i, j, tmp, min, max, mid;

  for (j=1; j<n; j++) {
    tmp = x[j]; MOVE++;
    min = 0; max = j;
    while (min < max) {
      mid = (min + max) / 2;
      COMP++;
      if (x[mid] <= tmp) min = mid + 1;
      else max = mid;
    }
    for(i=j-1; i>=min; i--) {x[i+1] = x[i]; MOVE++;}
    x[min] = tmp; MOVE++;
  }
  return;
}