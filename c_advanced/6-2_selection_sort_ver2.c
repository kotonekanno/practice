#include <stdio.h>
#define N 8

void SelectionSort_ver2(int x[], int n);

int main(void)
{
  int data[N] = {3,2,8,5,7,1,6,4};
  int i;

  printf("\nBefore Sort\n");
  for (i=0; i<N; i++) printf("%d\t", data[i]);
  printf("\n");

  SelectionSort_ver2(data, N);

  printf("\nAfter Sort\n");
  for (i=0; i<N; i++) printf("%d\t", data[i]);
  printf("\n");

  return 0;
}

void SelectionSort_ver2(int x[], int n)
{
  int i, j, min_id;
  int tmp;

  for (j=0; j<n-1; j++) {
    min_id = j;
    for (i=j+1; i<n; i++) {
      if (x[min_id] > x[i]) min_id = i;
    }
    tmp = x[j];
    x[j] = x[min_id];
    x[min_id] = tmp;
  }
  return;
}