
#include <stdio.h>
#define N 8

void SelectionSort(int x[], int n);

int main(void)
{
  int data[N] = {3,2,8,5,7,1,6,4};
  int i;

  printf("\nBefore Sort\n");
  for (i=0; i<N; i++) printf("%d\t", data[i]);
  printf("\n");

  SelectionSort(data, N);

  printf("\nAfter Sort\n");
  for (i=0; i<N; i++) printf("%d\t", data[i]);
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
      if (x[max_id] < x[i]) max_id = i;
    }
    tmp = x[j];
    x[j] = x[max_id];
    x[max_id] = tmp;
  }
  return;
}