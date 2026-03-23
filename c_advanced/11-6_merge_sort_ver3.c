#include <stdio.h>
#define N 8

void MergeSort_ver3(int x[], int min, int max, int tmp[]);
void InsertionSort(int x[], int n);

int main(void)
{
  int data[N] = {3,2,8,5,7,1,6,4};
  int tmp[N];
  int i;

  printf("\nBefore Sort\n");
  for (i=0; i<N; i++) printf("%d\t", data[i]);
  printf("\n");

  MergeSort_ver3(data, 0, N-1, tmp);

  printf("\nAfter Sort\n");
  for (i=0; i<N; i++) printf("%d\t", data[i]);
  printf("\n");

  return 0;
}

void MergeSort_ver3(int x[], int min, int max, int tmp[])
{
	int mid, i, j, k;

  if (max-min < 8) {
    InsertionSort(x+min, max-min+1);
    return;
  }
		
	mid = (min + max) / 2;
	MergeSort_ver3(x, min, mid, tmp);
	MergeSort_ver3(x, mid+1, max, tmp);
	
	i = min; j = mid + 1;
	for (k=min; k<=max; k++) {
		if (i<=mid && j<=max) {
			if (x[i] <= x[j]) {
				tmp[k] = x[i]; i++;
			} else {
				tmp[k] = x[j]; j++;
			}
		} else if (i<=mid) {
			tmp[k] = x[i]; i++;
		} else {
			tmp[k] = x[j]; j++;
		}
	}
	for (k=min; k<=max; k++) x[k] = tmp[k];
	return;
}

void InsertionSort(int x[], int n)
{
  int i, j, tmp;

  for(j=1; j<n; j++) {
    tmp = x[j];
    for (i=j-1; i>=0; i--) {
      if (x[i] > tmp) x[i+1] = x[i];
      else break;
    }
    x[i+1] = tmp;
  }
  return;
}